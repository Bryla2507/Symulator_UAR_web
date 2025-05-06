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
    wantedValue = generator.simulate(loopInterval);

    deviation = wantedValue - objectValue;

    PID_ResponseValue = regulator.simulate(deviation);

    objectValue = object.simulate(PID_ResponseValue);
}

void LoopSystem::init()
{
    connectLoopSignals();
}

void LoopSystem::connectLoopSignals()
{
    connect(loopTimer,&QTimer::timeout,this,&LoopSystem::executeLoop);
}

void LoopSystem::startServer(quint16 port)
{
    if (!server) {
        server = new QTcpServer(this);
        connect(server, &QTcpServer::newConnection, this, &LoopSystem::newConnection);
    }

    if (!server->isListening()) {
        if (!server->listen(QHostAddress::Any, port)) {
            qDebug() << "Server could not start!";
        } else {
            qDebug() << "Server started on port" << port;
        }
    }
}

void LoopSystem::newConnection()
{
    serverSocket = server->nextPendingConnection();
    qDebug() << "New connection established!";
}
