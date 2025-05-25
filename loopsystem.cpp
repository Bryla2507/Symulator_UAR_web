#include "loopsystem.h"

LoopSystem::LoopSystem(QObject *parent)
    : QObject(parent),
    generator(SignalType::RECTANGULAR, 1.0, 4.0, 1.0, 0.5, 0.0, this),
    object({ -0.4, 0.3, -0.1 }, { 0.6, -0.4, 0.6 }, 1, 0.01),
    loopRunning(false),
    loopInterval(20),
    loopTimer(new QTimer(this))
{
    init();
}

void LoopSystem::startLoop()
{
    if(!loopRunning){
        loopRunning = true;
        loopTimer->start(loopInterval);
    }
    else{
        loopRunning = false;
        loopTimer->stop();
    }
    czyObiektOnlineDziala = !czyObiektOnlineDziala;
    if((server != nullptr) && (serverSocket != nullptr))
    {
        sendStop();
    }

}

void LoopSystem::setLoopInterval(double miliseconds)
{
    this->loopInterval = miliseconds;
    startLoop();
    startLoop();
}

Generator& LoopSystem::getGenerator()
{
    return generator;
}

PID_Regulator &LoopSystem::getRegulator()
{
    return regulator;
}

ARX_Model &LoopSystem::getObject()
{
    return object;
}

void LoopSystem::sendStop()
{
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out << static_cast<qint32>(taktowanieObiektuOnline) << czyObiektOnlineDziala << PID_ResponseValue << wantedValue << loopRunning;
    qDebug() << block.toHex();
    QByteArray packet;
    QDataStream packetStream(&packet, QIODevice::WriteOnly);
    packetStream.setVersion(QDataStream::Qt_DefaultCompiledVersion);
    packetStream << static_cast<quint32>(block.size());
    packet.append(block);

    serverSocket->write(packet);
}

void LoopSystem::executeLoop()
{
    // serverSocket trzyma dane o kliencie w instancji serwera
    // clientSocket trzyma dane o serwerze w instancji klienta
    // serverSocket powinien wysyłać dane z regulatora, a odbierać z obiektu
    // clientSocket powinien wysyłać dane z obiektu, a odbierać z regulatora
    if ((server != nullptr) && (serverSocket != nullptr) && (serverSocket->state() == QAbstractSocket::ConnectedState) && server->isListening()) {
        // Serwer

        // block odpowiedzialny za wysłanie danych z regulatora
        QByteArray block;
        QDataStream out(&block, QIODevice::WriteOnly);
        //czyObiektOnlineDziala = !czyObiektOnlineDziala;
        out << static_cast<qint32>(taktowanieObiektuOnline) << czyObiektOnlineDziala << PID_ResponseValue << wantedValue << localLoop;
        qDebug() << block.toHex();
        QByteArray packet;
        QDataStream packetStream(&packet, QIODevice::WriteOnly);
        packetStream.setVersion(QDataStream::Qt_DefaultCompiledVersion);
        packetStream << static_cast<quint32>(block.size());
        packet.append(block);

        serverSocket->write(packet);



        qDebug() << "serwer czeka na dane";
        if (serverSocket->bytesAvailable()) {

            int bytesAvailable = serverSocket->bytesAvailable();
            if(bytesAvailable >= sizeof(double))
            {
                emit setGreenLight(); networkWasDisconnected = false;   //reset flagi bo polaczenie jest aktywne
                qDebug() << "serwer ma dostępne dane";
                int bytesToSkip = bytesAvailable - sizeof(double);

                QDataStream in;
                in.setDevice(serverSocket);

                in.skipRawData(bytesToSkip);

                double receivedValue;
                in >> receivedValue;
                qDebug() << "[Server] Otrzymano od klienta:" << receivedValue;
                objectValue = receivedValue;
            }

            // odbieranie danych z klienta na serwerze



            /*
            qDebug() << "serwer ma dostępne dane";
            QByteArray data = serverSocket->readAll();
            QString str = QString::fromUtf8(data).trimmed();
            bool ok = false;
            double receivedValue = str.toDouble(&ok);
            if (ok) {
                qDebug() << "[Server] Otrzymano od klienta:" << receivedValue;
                wantedValue = receivedValue;
            }
            */
        }
        else
        {
            emit setRedLight();
        }

        wantedValue = generator.simulate(loopInterval);
        deviation = wantedValue - objectValue;
        PID_ResponseValue = regulator.simulate(deviation);

        emit sendObjectValueToChart(objectValue);

    } else if (clientSocket && clientSocket->state() == QAbstractSocket::ConnectedState) {
        // Klient


        //
        qDebug() << clientSocket->peerAddress();
        QByteArray block;
        QDataStream out(&block, QIODevice::WriteOnly);
        out << objectValue;
        clientSocket->write(block);

        qDebug() << "klient czeka na dane";
        qDebug() << clientSocket->state();
        if (clientSocket->bytesAvailable()) {
            int bytesAvailable = clientSocket->bytesAvailable();
            if(bytesAvailable >= (sizeof(double)+sizeof(qint32)+sizeof(bool)+sizeof(double)+sizeof(bool)))
            {
                double receivedValue;


                qDebug() << "klient ma dostępne dane";
                int bytesToSkip = bytesAvailable - (sizeof(double)+sizeof(qint32)+sizeof(bool)+sizeof(double)+sizeof(bool));

                QDataStream in;
                in.setDevice(clientSocket);

                in.skipRawData(bytesToSkip);
                bool obiektStart;
                in >> taktowanieObiektuOnline >> czyObiektOnlineDziala >> receivedValue >> wantedValueClient >> obiektStart;
                qDebug() << receivedValue;
                qDebug() << czyObiektOnlineDziala;
                qDebug() << taktowanieObiektuOnline;


                networkWasDisconnected = false;    //reset flagi bo polaczenie jest aktywne

                if(czyObiektOnlineDziala) // jeśli odebrano włączony
                {
                    setLoopInterval(taktowanieObiektuOnline);
                    //loopInterval = taktowanieObiektuOnline;
                    if(obiektStart)
                    {
                        qDebug() << "[Client] Otrzymano od serwera:" << receivedValue;
                        PID_ResponseValue = receivedValue;

                        objectValue = object.simulate(PID_ResponseValue);

                        emit sendPIDValueToChart(0,0,0,PID_ResponseValue);
                        emit sendWantedValueToChart(wantedValueClient);
                        emit sendDeviationValueToChart(0);
                    }



                }
                else
                {
                    setLoopInterval(10);
                    //loopInterval = 15;
                }
                emit setGreenLight();


            }


            // odbieranie danych z serwera na kliencie




            //QByteArray data = clientSocket->readAll();
            //QString str = QString::fromUtf8(data).trimmed();
            //bool ok = false;
            //double receivedValue = str.toDouble(&ok);
            //if (ok) {
            //    qDebug() << "[Client] Otrzymano od serwera:" << receivedValue;
            //    wantedValue = receivedValue;
            //}
        }
        else
        {
            emit setRedLight();
            if(czyObiektOnlineDziala) // jeśli odebrano włączony
            {
                setLoopInterval(taktowanieObiektuOnline);
                //loopInterval = taktowanieObiektuOnline;

                objectValue = object.simulate(PID_ResponseValue);

                emit sendPIDValueToChart(0,0,0,PID_ResponseValue);
                emit sendWantedValueToChart(wantedValueClient);
                emit sendDeviationValueToChart(0);

            }
            else
            {

                setLoopInterval(10);
                //loopInterval = 15;
            }
        }

    } else {
        // Praca lokalna
        emit setRedLight();
        wantedValue = generator.simulate(loopInterval);
        deviation = wantedValue - objectValue;
        PID_ResponseValue = regulator.simulate(deviation);
        objectValue = object.simulate(PID_ResponseValue);
    }
}

void LoopSystem::setTaktowanieObustronne(bool czyObiektDziala, double intervalObiektu)
{
    czyObiektOnlineDziala = czyObiektDziala;

    taktowanieObiektuOnline = intervalObiektu*1000;
}

void LoopSystem::setTaktowanieJednostronne(double intervalObiektu)
{
    czyObiektOnlineDziala = true;
    taktowanieObiektuOnline = intervalObiektu;
}


void LoopSystem::init()
{
    connectLoopSignals();
}

void LoopSystem::connectLoopSignals()
{
    connect(loopTimer,&QTimer::timeout,this,&LoopSystem::executeLoop);
}

void LoopSystem::startServer(int port)
{
    //port = 25565; //temporary
    if (!server) {
        server = new QTcpServer(this);
        connect(server, &QTcpServer::newConnection, this, &LoopSystem::newConnection);
    }
    else
        connect(server, &QTcpServer::newConnection, this, &LoopSystem::newConnection);

    if (!server->isListening()) {
        if (!server->listen(QHostAddress::Any, port)) {
            qDebug() << "Server could not start!";
        } else {
            qDebug() << "Server started on port" << port;
            //networkWasDisconnected = false;    //reset flagi bo polaczenie jest aktywne
        }
    }
    localLoop = loopRunning;
}

void LoopSystem::newConnection()
{
    serverSocket = server->nextPendingConnection();
    connect(serverSocket, &QTcpSocket::stateChanged, this, &LoopSystem::onClientSocketStateChanged);
    qDebug() << "New connection established!";

}

void LoopSystem::testConnection()
{
    if (clientSocket != nullptr) {
        if (!clientSocket->peerAddress().toString().isEmpty()) {
            qDebug() << "Adres serwera: " << clientSocket->peerAddress().toString();
            QMessageBox::information(nullptr, "Test serwera", "Adres serwera: " + clientSocket->peerAddress().toString());
        } else {
            QMessageBox::information(nullptr, "Test serwera", "Serwer niepodłączony");
        }
    } else {
        QMessageBox::information(nullptr, "Test serwera", "Serwer niepodłączony");
    }

    if (serverSocket != nullptr) {
        if (!serverSocket->peerAddress().toString().isEmpty()) {
            qDebug() << "Adres klienta: " << serverSocket->peerAddress().toString();
            QMessageBox::information(nullptr, "Test klienta", "Adres klienta: " + serverSocket->peerAddress().toString());
        } else {
            QMessageBox::information(nullptr, "Test klienta", "Klient niepodłączony");
        }
    } else {
        QMessageBox::information(nullptr, "Test klienta", "Klient niepodłączony");
    }
}

void LoopSystem::setClientSocket(QString ip, int port)
{
    if(clientSocket == nullptr)
        this->clientSocket = new QTcpSocket(this);
    clientSocket->connectToHost(ip, port);
    connect(clientSocket, &QTcpSocket::connected, []() {
        qDebug() << "Połączono z serwerem";
    });

    connect(clientSocket, &QTcpSocket::stateChanged, this, &LoopSystem::onClientSocketStateChanged);

    localLoop = loopRunning;
    loopRunning = false;
    startLoop();

    networkWasDisconnected = false;    //reset flagi bo polaczenie jest aktywne
}

void LoopSystem::resetConnection()
{




    if(server != nullptr)
    {
        server->disconnect();
        server->close();


    }

    if(clientSocket != nullptr)
    {
        clientSocket->disconnectFromHost();
        clientSocket->close();

    }
}

void LoopSystem::setLoop()
{
    if(localLoop == true)
    {
        qDebug() << localLoop;
        loopRunning = false;
        startLoop();
    }
    else
    {
        qDebug() << localLoop;
        loopRunning = true;
        startLoop();
    }
}

void LoopSystem::onClientSocketStateChanged(QAbstractSocket::SocketState state)
{
    if (state == QAbstractSocket::UnconnectedState) {
        if (!networkWasDisconnected) {    //sprawdzanie flagi, na razie wersja bez
            emit networkDisconnected();
            networkWasDisconnected = true;
        }
    }
}


