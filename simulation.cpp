#include "simulation.h"

Simulation::Simulation()
{
    init();
}

void Simulation::run()
{

}

void Simulation::init()
{
    fileManager.setLoop(&loop);

    connectBackendFrontend();

    gui.show();

    loop.startLoop();
}

void Simulation::connectBackendFrontend()
{
    const Generator* generator = &loop.getGenerator();
    const PID_Regulator* regulator = &loop.getRegulator();
    const ARX_Model* object = &loop.getObject();

    QObject::connect(generator, &Generator::sendDataToChart, &gui, &GUI::updateGeneratorSerie);
    QObject::connect(&gui, &GUI::newGeneratorParameters, generator, &Generator::setGeneratorParameters);
    QObject::connect(&gui, &GUI::resetGeneratorTime, generator, &Generator::resetGeneratorTime);

    QObject::connect(regulator, &PID_Regulator::sendPIDValues, &gui, &GUI::updatePIDSeries);
    QObject::connect(regulator, &PID_Regulator::sendDevationValue, &gui, &GUI::updateDeviationSerie);
    QObject::connect(&gui, &GUI::newPIDParameters, regulator, &PID_Regulator::setPIDParameters);
    QObject::connect(&gui, &GUI::resetDeriative, regulator, &PID_Regulator::resetDeriativeMemory);
    QObject::connect(&gui, &GUI::resetIntegral, regulator, &PID_Regulator::resetIntegralMemory);

    QObject::connect(object, &ARX_Model::sendObjectValueToChart, &gui, &GUI::updateObjectSerie);
    // duplikowanie sygnału tak, aby przy braku użycia modelu ARX (serwer) wykresy przyjmowały wartości z klienta
    QObject::connect(&loop, &LoopSystem::sendObjectValueToChart, &gui, &GUI::updateObjectSerie);

    //to samo dla klientaa
    QObject::connect(&loop, &LoopSystem::sendPIDValueToChart, &gui, &GUI::updatePIDSeries);
    QObject::connect(&loop, &LoopSystem::sendDeviationValueToChart, &gui, &GUI::updateDeviationSerie);
    QObject::connect(&loop, &LoopSystem::sendWantedValueToChart, &gui, &GUI::updateGeneratorSerie);
    //QObject::connect(&loop, &LoopSystem::sendWantedValueToChart, &gui, &GUI::updatePIDSeries);




    QObject::connect(&gui, &GUI::newModelParameters, object, &ARX_Model::setModelParameters);

    QObject::connect(&gui, &GUI::startStop, &loop, &LoopSystem::startLoop);
    QObject::connect(&gui, &GUI::setLoop, &loop, &LoopSystem::setLoopInterval);

    QObject::connect(&gui, &GUI::saveSimulation, &fileManager, &FileManager::saveInstance);
    QObject::connect(&gui, &GUI::loadSimulation, &fileManager, &FileManager::loadInstance);
    QObject::connect(&loop, &LoopSystem::updateGUIControls, &gui, &GUI::updateGUIControls);



    QObject::connect(&gui, &GUI::startServerRequest, &loop, &LoopSystem::startServer);
    QObject::connect(&gui, &GUI::testConnectionRequest, &loop, &LoopSystem::testConnection);
    QObject::connect(&gui, &GUI::clientSocketCreated, &loop, &LoopSystem::setClientSocket);
    QObject::connect(&gui, &GUI::resetConnection, &loop, &LoopSystem::resetConnection);

    QObject::connect(&gui, &GUI::setTaktowanieJednostronne, &loop, &LoopSystem::setTaktowanieJednostronne);
    QObject::connect(&gui, &GUI::setTaktowanieObustronne, &loop, &LoopSystem::setTaktowanieObustronne);
    QObject::connect(&gui, &GUI::setLocalLoop, &loop, &LoopSystem::setLoop);

    QObject::connect(&loop, &LoopSystem::setGreenLight, &gui, &GUI::setGreenLight);
    QObject::connect(&loop, &LoopSystem::setRedLight, &gui, &GUI::setRedLight);
    QObject::connect(&loop, &LoopSystem::networkDisconnected, &gui, &GUI::networkDisconnected);



}
