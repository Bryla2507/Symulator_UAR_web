#ifndef LOOPSYSTEM_H
#define LOOPSYSTEM_H

#include <QObject>
#include <QTimer>
#include "generator.h"
#include "pid_regulator.h"
#include "arx_model.h"
#include <QTcpServer>
#include <QTcpSocket>
#include <QMessageBox>

class LoopSystem : public QObject
{
    Q_OBJECT
public:
    LoopSystem(QObject *parent = nullptr);

    // funkcje pętli sprzężenia zwrotnego
    void startLoop();

    // SETTERY
    void setLoopInterval(double miliseconds);

    // GETTERY
    Generator& getGenerator();
    PID_Regulator &getRegulator();
    ARX_Model& getObject();
    double& getLoopInterval(){return this->loopInterval;}

public slots:
    void executeLoop();
    void startServer(int port);
    void testConnection();
    void setClientSocket(QString, int);
    void resetConnection();
    void setTaktowanieJednostronne(double);
    void setTaktowanieObustronne(bool, double);
    void setLoop();
    void onClientSocketStateChanged(QAbstractSocket::SocketState state);


signals:
    void updateGUIControls(SignalType s, double a, double per, double f, double p, double i,
                           double d, bool win, double min, double max, int k, std::vector<double> ca, std::vector<double> cb,
                           double z, double sf, double cc);
    void sendObjectValueToChart(double value);
    void sendPIDValueToChart(double value1, double value2, double value3, double output);
    void sendDeviationValueToChart(double value);
    void sendWantedValueToChart(double value);

    void setRedLight();
    void setGreenLight();
    void networkDisconnected();

private:
    void init();
    void newConnection();
    bool networkWasDisconnected = false;    //flaga sprawdzajaca czy polaczenie zostalo zerwane

    // funkcje pętli sprzężenia zwrotnego
    void connectLoopSignals();

    // elementy pętli
    Generator generator;
    PID_Regulator regulator;
    ARX_Model object;
    void sendStop();

    // wartosci
    double wantedValue;
    double objectValue;
    double deviation;
    double PID_ResponseValue;
    double wantedValueClient;


    bool czyObiektOnlineDziala;
    qint32 taktowanieObiektuOnline;

    // pola dotyczące samego wykonywania pętli
    bool loopRunning;
    bool localLoop = true;
    double loopInterval;
    bool obiektStartOld = true;
    QTimer* loopTimer;


    QTcpServer *server = nullptr;
    QTcpSocket *serverSocket = nullptr;
    QTcpSocket *clientSocket = nullptr;
};

#endif // LOOPSYSTEM_H
