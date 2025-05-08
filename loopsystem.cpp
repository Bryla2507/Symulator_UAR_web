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

void LoopSystem::executeLoop()
{
    // serverSocket trzyma dane o kliencie w instancji serwera
    // clientSocket trzyma dane o serwerze w instancji klienta
    // serverSocket powinien wysyłać dane z regulatora, a odbierać z obiektu
    // clientSocket powinien wysyłać dane z obiektu, a odbierać z regulatora
    if (server && server->isListening() && serverSocket && serverSocket->state() == QAbstractSocket::ConnectedState) {
        // Serwer
        qDebug() << "serwer czeka na dane";
        if (serverSocket->bytesAvailable()) {
<<<<<<< Updated upstream
=======

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
                networkWasDisconnected = false;
            }

            // odbieranie danych z klienta na serwerze



            /*
>>>>>>> Stashed changes
            qDebug() << "serwer ma dostępne dane";
            QByteArray data = serverSocket->readAll();
            QString str = QString::fromUtf8(data).trimmed();
            bool ok = false;
            double receivedValue = str.toDouble(&ok);
            if (ok) {
                qDebug() << "[Server] Otrzymano od klienta:" << receivedValue;
                wantedValue = receivedValue;
            }
        }
<<<<<<< Updated upstream
=======
        else
        {
            emit setRedLight();
            if (!networkWasDisconnected) {
                emit networkDisconnected();
                networkWasDisconnected = true;
            }
        }

        wantedValue = generator.simulate(loopInterval);
        deviation = wantedValue - objectValue;
        PID_ResponseValue = regulator.simulate(deviation);

        emit sendObjectValueToChart(objectValue);
>>>>>>> Stashed changes

    } else if (clientSocket && clientSocket->state() == QAbstractSocket::ConnectedState) {
        // Klient
        qDebug() << "klient czeka na dane";
        if (clientSocket->bytesAvailable()) {
<<<<<<< Updated upstream
            qDebug() << "klient ma dostępne dane";
            QByteArray data = clientSocket->readAll();
            QString str = QString::fromUtf8(data).trimmed();
            bool ok = false;
            double receivedValue = str.toDouble(&ok);
            if (ok) {
                qDebug() << "[Client] Otrzymano od serwera:" << receivedValue;
                wantedValue = receivedValue;
=======
            int bytesAvailable = clientSocket->bytesAvailable();
            if(bytesAvailable >= (sizeof(double)+sizeof(qint32)+sizeof(bool)))
            {
                double receivedValue;

                qDebug() << "klient ma dostępne dane";
                int bytesToSkip = bytesAvailable - (sizeof(double)+sizeof(qint32)+sizeof(bool));

                QDataStream in;
                in.setDevice(clientSocket);

                in.skipRawData(bytesToSkip);

                in >> taktowanieObiektuOnline >> czyObiektOnlineDziala >> receivedValue;
                qDebug() << receivedValue;
                qDebug() << czyObiektOnlineDziala;
                qDebug() << taktowanieObiektuOnline;

                 networkWasDisconnected = false;    //reset flagi bo polaczenie jest aktywne


                if(czyObiektOnlineDziala) // jeśli odebrano włączony
                {
                    setLoopInterval(taktowanieObiektuOnline);
                    //loopInterval = taktowanieObiektuOnline;


                    qDebug() << "[Client] Otrzymano od serwera:" << receivedValue;
                    PID_ResponseValue = receivedValue;

                    objectValue = object.simulate(PID_ResponseValue);
                }
                else
                {
                    setLoopInterval(15);
                    //loopInterval = 15;
                }


>>>>>>> Stashed changes
            }
        }

    } else {
        // Praca lokalna
        wantedValue = generator.simulate(loopInterval);
        deviation = wantedValue - objectValue;
        PID_ResponseValue = regulator.simulate(deviation);
        objectValue = object.simulate(PID_ResponseValue);
    }
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
   // port = 25565; //temporary
    if (!server) {
        server = new QTcpServer(this);
        connect(server, &QTcpServer::newConnection, this, &LoopSystem::newConnection);
    }

    if (!server->isListening()) {
        if (!server->listen(QHostAddress::Any, port)) {
            qDebug() << "Server could not start!";
        } else {
            qDebug() << "Server started on port" << port;

            networkWasDisconnected = false;    //reset flagi bo polaczenie jest aktywne
        }
    }
<<<<<<< Updated upstream
=======
    localLoop = loopRunning;


>>>>>>> Stashed changes
}

void LoopSystem::newConnection()
{
    serverSocket = server->nextPendingConnection();
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

void LoopSystem::setClientSocket(QTcpSocket* socket)
{
    this->clientSocket = socket;
    connect(clientSocket, &QTcpSocket::connected, []() {
        qDebug() << "Połączono z serwerem";
    });
<<<<<<< Updated upstream
=======
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
>>>>>>> Stashed changes
}



