#include "gui.h"
#include "ui_gui.h"


GUI::GUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GUI)
{
    ui->setupUi(this);



    connectionIndicator = new QLabel("");
    connectionIndicator->setFixedWidth(25);
    ui->statusbar->addPermanentWidget(connectionIndicator, 0);
    connectionIndicator->setAutoFillBackground(true);
    connectionIndicator->setObjectName("connectionIndicator");



    initCharts();



    interval = 0.02; // poczatkowo

    this->resize({1530,800});

    qApp->setStyleSheet(R"(
    QWidget {
        background-color: rgb(30, 30, 30); /* Ciemne tło */
        color: white; /* Biały tekst */
    }

    QMainWindow {
        background-color: rgb(20, 20, 20);
    }




    /* ZIELONY TEKST DLA OKREŚLONYCH LABELI */
    #label, #label_2, #label_3, #label_8, #label_B, #label_Z, #label_6{
        color: rgb(0, 255, 0); /* Jasnozielony */
        font-weight: bold;
        border: 1px solid rgb(0, 128, 0);
        font-size: 12pt;
    }

    #setRegulator, #setModel, #setLoop, #setGenerator, #networkConfirm, #testConnect
    {
        background-color:  rgb(0, 128, 0);
    }

    #setRegulator:hover, #setModel:hover, #setLoop:hover, #setGenerator:hover
    {
        background-color:  rgb(0, 255, 0);
    }

    #line{
        background-color:  rgb(0, 128, 0);
    }

    QLineEdit {
        background-color: rgb(50, 50, 50);
        border: 1px solid white;
        color: white;
    }

    QDoubleSpinBox, QSpinBox {
        background-color: rgb(50, 50, 50);
        border: 1px solid white;
        color: white;
    }

    QComboBox {
        background-color: rgb(50, 50, 50);
        border: 1px solid white;
        color: white;
    }

    QMessageBox {
        background-color: rgb(40, 40, 40);
        color: white;
    }

    QChartView {
        background: rgb(0, 0, 0);
    }
)");
}

GUI::~GUI()
{
    delete ui;
}

void GUI::updateGeneratorSerie(double value)
{
    Chart& chart = charts["Zadana/Rzeczywista"];
    appendData(chart, 0, value);
    incrementXAxis(chart);
}

void GUI::updatePIDSeries(double uP, double uI, double uD, double output)
{
    Chart& chart = charts["Sterowanie"];
    appendData(chart, 0, output);
    incrementXAxis(chart);

    Chart& chart2 = charts["Składowe PID"];
    appendData(chart2, 0, uP);
    appendData(chart2, 1, uI);
    appendData(chart2, 2, uD);
    incrementXAxis(chart2);
}

void GUI::updateObjectSerie(double value)
{
    Chart& chart = charts["Zadana/Rzeczywista"];
    appendData(chart, 1, value);
    //incrementXAxis(chart);
}

void GUI::updateDeviationSerie(double value)
{
    Chart& chart = charts["Uchyb"];
    appendData(chart, 0, value);
    incrementXAxis(chart);
}

void GUI::initCharts() {
    charts.clear();

    // Funkcja pomocnicza do tworzenia wykresu
    auto createChart = [this](const QString& chartTitle, int numSeries, const QString& layoutName) {
        Chart chart;
        for (int i = 0; i < numSeries; ++i) {
            chart.series.push_back(new QLineSeries());
        }

        chart.chart = new QChart();
        chart.view = new QChartView(chart.chart);

        for (auto series : chart.series) {
            chart.chart->addSeries(series);
        }

        QLineSeries* staticLine = new QLineSeries();
        staticLine->append(-10, 0);
        staticLine->append(3600, 0);
        QPen pen(Qt::red);
        pen.setStyle(Qt::DashLine);
        staticLine->setPen(pen);
        chart.series.push_back(staticLine);
        chart.chart->addSeries(staticLine);

        chart.chart->createDefaultAxes();
        chart.chart->setTitle(chartTitle);
        chart.chart->axes(Qt::Horizontal).first()->setRange(-10, 0);

        // Ustawienie nazw osi w zależności od tytułu wykresu:
        if (chartTitle == "Zadana/Rzeczywista")
            configureChart(chart.chart, "Czas (s)", "Wartość sygnału");
        else if (chartTitle == "Składowe PID")
            configureChart(chart.chart, "Czas (s)", "Wartości PID");
        else if (chartTitle == "Sterowanie")
            configureChart(chart.chart, "Czas (s)", "Sygnał sterowania");
        else if (chartTitle == "Uchyb")
            configureChart(chart.chart, "Czas (s)", "Uchyb");

        if (layoutName == "Zadana/Rzeczywista") {
            ui->horizontalLayout_4->addWidget(chart.view);
        } else {
            ui->horizontalLayout_3->addWidget(chart.view);
        }

        charts[chartTitle] = chart;
    };

    createChart("Zadana/Rzeczywista", 2, "Zadana/Rzeczywista");
    createChart("Składowe PID", 3, "Składowe PID");
    createChart("Sterowanie", 1, "Sterowanie");
    createChart("Uchyb", 1, "Uchyb");

    charts["Składowe PID"].series[1]->setVisible(false);
    charts["Składowe PID"].series[2]->setVisible(false);


}

void GUI::configureChart(QChart* chart,const QString xLabel,const QString yLabel) {
    chart->setBackgroundBrush(QBrush(Qt::black));
    chart->setTitleBrush(QBrush(Qt::white));

    QPalette palette;
    palette.setColor(QPalette::Window, QColor(30, 30, 30));
    palette.setColor(QPalette::WindowText, Qt::white);
    palette.setColor(QPalette::Button, QColor(45, 45, 45));
    chart->setPalette(palette);

    chart->legend()->setVisible(false);

    auto axesX = chart->axes(Qt::Horizontal);
    auto axesY = chart->axes(Qt::Vertical);

    for (auto axis : axesX) {
        axis->setTitleText(xLabel);
        axis->setTitleBrush(QBrush(Qt::white));
        axis->setLabelsBrush(QBrush(Qt::white));
    }

    for (auto axis : axesY) {
        axis->setTitleText(yLabel);
        axis->setTitleBrush(QBrush(Qt::white));
        axis->setLabelsBrush(QBrush(Qt::white));
    }
}

void GUI::incrementXAxis(Chart& chart) {
    chart.x += interval;
    updateXAxisRange(chart);
}

void GUI::adjustYAxisRange(Chart& chart) {
    auto axisY = chart.chart->axes(Qt::Vertical).first();

    double minY = std::numeric_limits<double>::max();
    double maxY = std::numeric_limits<double>::lowest();

    for (const auto& series : chart.series) {
        const auto points = series->points();
        for (const auto& point : points) {
            const double y = point.y();
            minY = std::min(minY, y);
            maxY = std::max(maxY, y);
        }
    }

    if (minY == std::numeric_limits<double>::max()) {
        minY = 0;
        maxY = 1;
    }

    const double margin = (maxY - minY) * 0.07;

    axisY->setRange(minY - margin, maxY +  margin);
}

void GUI::appendData(Chart& chart, int seriesIndex, double value) {
    chart.series[seriesIndex]->append(chart.x, value);

    removeExcessPoints(chart.series[seriesIndex], 500);

    if (value > chart.maxY) {
        chart.maxY = value;
    }
    if (value < chart.minY) {
        chart.minY = value;
    }



    adjustYAxisRange(chart);
}

void GUI::updateXAxisRange(Chart& chart) {
    const double baseInterval = 0.02; // Minimalny interwał
    const double visibleRangeWidth = 500 * interval; // Dynamiczny zakres na podstawie interwału
    auto axisX = chart.chart->axes(Qt::Horizontal).first();

    if (chart.x > chart.maxX) {
        chart.maxX = chart.x;
    }

    chart.minX = chart.maxX - visibleRangeWidth;
    axisX->setRange(chart.minX, chart.maxX);
}

void GUI::removeExcessPoints(QLineSeries* series, int maxPoints) {
    while (series->count() > maxPoints) {
        series->removePoints(0, 1);
    }
}

void GUI::on_setGenerator_clicked()
{
    bool sin = ui->sinusoidal->isChecked();
    bool rec = ui->rectangular->isChecked();
    bool jum = ui->jumpUnit->isChecked();

    SignalType type;

    if(sin){ type = SignalType::SINUSOIDAL;}
    else if(rec) {type = SignalType::RECTANGULAR;}
    else {type = SignalType::JUMP_UNIT;}

    emit newGeneratorParameters(type, ui->amplitude->value(), ui->period->value(), ui->frequency->value(), ui->doubleSpinBox->value(), ui->doubleSpinBox_2->value());
}


void GUI::on_setRegulator_clicked()
{
    emit newPIDParameters(ui->kP_value->value(), ui->tI_value->value(), ui->tD_value->value(), ui->min_value->value(), ui->max_value->value(), ui->antiWindupON->isChecked(),ui->altIntegralCheck->isChecked());
}


std::vector<double> GUI::convertToVector(const QString& input) {
    std::vector<double> result;
    QStringList elements = input.split(',');

    for (const QString& element : elements) {
        bool ok;
        double value = element.trimmed().toDouble(&ok);
        if (ok) {
            result.push_back(value);
        } else {
            QMessageBox::warning(nullptr, "Błąd konwersji", "Nieprawidłowy format liczby: " + element);
            return {};
        }
    }

    return result;
}

void GUI::on_setModel_clicked()
{
    DialogData data;

    m_window=new Dialog(data, nullptr);
    int result=m_window->exec();
//
  //  if(result)
    //    ui->status->setText("OK");
    //else
    //    ui->status->setText("FAIL");

    std::vector<double> coefficientsA = convertToVector(data.inputA);
    std::vector<double> coefficientsB = convertToVector(data.inputB);

    if (coefficientsA.size()<3 || coefficientsB.size()<3) {
        QMessageBox::information(nullptr,"Za mało współczynników","Podano mniej niż 3 współczynniki");
        return;
    }

    emit newModelParameters(coefficientsA, coefficientsB, data.disturbance, data.delay);
}


void GUI::on_startStop_clicked()
{
    emit startStop();

}


void GUI::on_reset_clicked()
{
    emit resetGeneratorTime();
    emit resetDeriative();
    emit resetIntegral();

    for (auto& [key, chart] : charts) {
        for (size_t i = 0; i < chart.series.size() - 1; ++i) {
            chart.series[i]->clear();
        }

        // Resetowanie zakresu osi X
        chart.minX = 0; chart.minY = 0;
        chart.maxX = 10; chart.maxY = 0;
        chart.x = 0;
        chart.chart->axisX()->setRange(chart.minX, chart.maxX);
    }
}


void GUI::on_setLoop_clicked()
{
    interval = ui->interval->value();

    emit setLoop(ui->interval->value() * 1000);
    emit setTaktowanieObustronne(true, ui->interval->value());
    on_networkConfirm_clicked();
}


void GUI::on_reset_Integral_clicked()
{
    emit resetIntegral();
}


void GUI::on_reset_Derative_clicked()
{
    emit resetDeriative();
}


void GUI::on_show_uP_clicked()
{
    charts["Składowe PID"].series[0]->setVisible(true);
    charts["Składowe PID"].series[1]->setVisible(false);
    charts["Składowe PID"].series[2]->setVisible(false);
}


void GUI::on_show_uI_clicked()
{
    charts["Składowe PID"].series[0]->setVisible(false);
    charts["Składowe PID"].series[1]->setVisible(true);
    charts["Składowe PID"].series[2]->setVisible(false);
}


void GUI::on_show_uD_clicked()
{
    charts["Składowe PID"].series[0]->setVisible(false);
    charts["Składowe PID"].series[1]->setVisible(false);
    charts["Składowe PID"].series[2]->setVisible(true);
}


void GUI::on_save_clicked()
{
    QString filePath = QFileDialog::getSaveFileName(this, tr("Zapisz plik"), "", tr("Pliki tekstowe (*.txt);;Wszystkie pliki (*)"));

    if (!filePath.isEmpty()) {

        emit saveSimulation(filePath);
    }
}


void GUI::on_load_clicked()
{
    emit startStop();

    QString filePath = QFileDialog::getOpenFileName(this, tr("Wczytaj plik"), "", tr("Pliki tekstowe (*.txt);;Wszystkie pliki (*)"));

    if (!filePath.isEmpty()) {
        emit loadSimulation(filePath);
    }

    emit startStop();
}

void GUI::updateGUIControls(SignalType s, double a, double per, double f, double p, double i, double d, bool win, double min, double max, int k, std::vector<double> ca, std::vector<double> cb, double z, double sf, double cc)
{
    switch(s){
    case SignalType::JUMP_UNIT: ui->jumpUnit->setChecked(true); break;
    case SignalType::SINUSOIDAL: ui->sinusoidal->setChecked(true); break;
    case SignalType::RECTANGULAR: ui->rectangular->setChecked(true); break;
    }

    ui->amplitude->setValue(a);
    ui->period->setValue(per);
    ui->frequency->setValue(f);
    ui->kP_value->setValue(p);
    ui->tD_value->setValue(d);
    ui->tI_value->setValue(i);
    ui->min_value->setValue(min);
    ui->max_value->setValue(max);
    ui->doubleSpinBox->setValue(sf);
    ui->doubleSpinBox_2->setValue(cc);

    switch(win){
    case true: ui->antiWindupON->setChecked(true);  break;
    case false:  ui->antiWindupON->setChecked(false) ;break;
    }
}


void GUI::on_pushButton_clicked() //deprecated
{

}


void setGridLayout(QGridLayout* layout, bool var) {
    for (int i = 0; i < layout->count(); ++i) {
        QWidget* widget = layout->itemAt(i)->widget();
        if (widget) {
            widget->setEnabled(var);
        }
    }
}

void setHorizontalLayout(QHBoxLayout* layout, bool var) {
    for (int i = 0; i < layout->count(); ++i) {
        QWidget* widget = layout->itemAt(i)->widget();
        if (widget) {
            widget->setEnabled(var);
        }
    }
}

void GUI::on_networkConfirm_clicked()
{
    setGridLayout(ui->gridLayout_3, true);
    setGridLayout(ui->gridLayout_2, true);
    setGridLayout(ui->gridLayout_4, true);
    setHorizontalLayout(ui->horizontalLayout_18, true);
    setHorizontalLayout(ui->horizontalLayout_19, true);
    setHorizontalLayout(ui->horizontalLayout_20, true);
    setHorizontalLayout(ui->horizontalLayout_22, true);

    setHorizontalLayout(ui->horizontalLayout_5, true);
    setHorizontalLayout(ui->horizontalLayout_6, true);
    setHorizontalLayout(ui->horizontalLayout_8, true);

    setHorizontalLayout(ui->horizontalLayout_9, true);
    setHorizontalLayout(ui->horizontalLayout_10, true);
    setHorizontalLayout(ui->horizontalLayout_11, true);
    setHorizontalLayout(ui->horizontalLayout_12, true);
    setHorizontalLayout(ui->horizontalLayout_13, true);
    setHorizontalLayout(ui->horizontalLayout_14, true);
    setHorizontalLayout(ui->horizontalLayout_17, true);
    setHorizontalLayout(ui->horizontalLayout_23, true);
    setHorizontalLayout(ui->horizontalLayout_24, true);
    setGridLayout(ui->gridLayout, true);

    emit resetConnection();
    //if(server != nullptr)
    //    server->close();
    //if(clientSocket != nullptr)
    //    clientSocket->disconnectFromHost();


    if(ui->radioNetwork->isChecked())
    {
        if(ui->listWidgetClientServer->currentItem()==ui->listWidgetClientServer->item(1))
        {
            setGridLayout(ui->gridLayout_3, false);
            setGridLayout(ui->gridLayout_2, false);
            setGridLayout(ui->gridLayout_4, false);
            setHorizontalLayout(ui->horizontalLayout_9, false);
            setHorizontalLayout(ui->horizontalLayout_10, false);
            setHorizontalLayout(ui->horizontalLayout_11, false);
            setHorizontalLayout(ui->horizontalLayout_12, false);
            setHorizontalLayout(ui->horizontalLayout_13, false);
            setHorizontalLayout(ui->horizontalLayout_14, false);

            setHorizontalLayout(ui->horizontalLayout_18, false);
            setHorizontalLayout(ui->horizontalLayout_19, false);
            setHorizontalLayout(ui->horizontalLayout_20, false);
            setHorizontalLayout(ui->horizontalLayout_22, false);

            setHorizontalLayout(ui->horizontalLayout_17, false);
            setHorizontalLayout(ui->horizontalLayout_23, false);
            setHorizontalLayout(ui->horizontalLayout_24, false);

            setHorizontalLayout(ui->horizontalLayout_5, false);
            setHorizontalLayout(ui->horizontalLayout_6, false);
            setHorizontalLayout(ui->horizontalLayout_8, false);

            ui->doubleSpinBoxTaktowanieObiektu->setEnabled(false);
            ui->radioJednostronne->setEnabled(false);
            ui->radioObustronne->setEnabled(false);
            ui->radioObiektStart->setEnabled(false);
            ui->radioObiektStop->setEnabled(false);

            if(ui->textPort->toPlainText()=="")
                ui->textPort->setText("25565");
            if(ui->textIP->toPlainText()=="")
                ui->textIP->setText("localhost");

            //clientSocket = new QTcpSocket(this);
            //clientSocket->connectToHost(ui->textIP->toPlainText(), ui->textPort->toPlainText().toInt());
            emit clientSocketCreated(ui->textIP->toPlainText(), ui->textPort->toPlainText().toInt());
            connect(clientSocket, &QTcpSocket::connected, []() {
                qDebug() << "Połączono z serwerem";
            });
            ui->statusbar->showMessage("Używany adres serwera: " + ui->textIP->toPlainText() + "   Port: " + ui->textPort->toPlainText());

        }

        else
        {
            if(ui->textPort->toPlainText()=="")
                ui->textPort->setText("25565");
            setGridLayout(ui->gridLayout, false);
            ui->doubleSpinBoxTaktowanieObiektu->setEnabled(true);
            ui->radioJednostronne->setEnabled(true);
            ui->radioObustronne->setEnabled(true);
            ui->radioObiektStart->setEnabled(true);
            ui->radioObiektStop->setEnabled(true);

            QString portText = ui->textPort->toPlainText();  // bo to QTextEdit
            int port = portText.toInt();
            emit startServerRequest(port);
            ui->statusbar->showMessage("Port użyty przy uruchomieniu serwera: " + ui->textPort->toPlainText());
            if(ui->radioObustronne->isChecked())
            {
                bool czyObiektON;
                czyObiektON = ui->radioObiektStart->isChecked();
                emit setTaktowanieObustronne(czyObiektON, ui->doubleSpinBoxTaktowanieObiektu->value());
            }
            else
            {
                emit setTaktowanieObustronne(true, ui->interval->value());

            }

        }
    }
    else
    {
        emit setLocalLoop();
        interval = ui->interval->value();

        emit setLoop(ui->interval->value() * 1000);
    }

}


void GUI::on_testConnect_clicked(){
    emit testConnectionRequest();
}

void GUI::setGreenLight()
{
    connectionIndicator->setStyleSheet(
        "QLabel#connectionIndicator { background-color: rgb(0, 255, 0); }"
        );
    //qDebug() << "zmiana koloru";
    QPalette zielony = connectionIndicator->palette();
    zielony.setColor(QPalette::Window, QColor(Qt::green));
    connectionIndicator->setPalette(zielony);
}

void GUI::setRedLight()
{
    connectionIndicator->setStyleSheet(
        "QLabel#connectionIndicator { background-color: rgb(255, 0, 0); }"
        );
    //qDebug() << "zmiana koloru";
    QPalette czerwony = connectionIndicator->palette();
    czerwony.setColor(QPalette::Window, QColor(Qt::red));
    connectionIndicator->setPalette(czerwony);
}
void GUI::networkDisconnected()
{

    ui->radioNetwork->setChecked(false);
    ui->radioLocal->setChecked(true);
    on_networkConfirm_clicked();
    QMessageBox::warning(this, "Rozłączono", "Połączenie sieciowe zostało zerwane. Przełączono na tryb lokalny.");
}


// void GUI::startServer() {
//     server = new QTcpServer(this);
//     if(server->listen(QHostAddress::Any, ui->textPort->toPlainText().toInt())) {
//         connect(server, &QTcpServer::newConnection, this, &GUI::newConnection);
//         qDebug() << "serwer działa";
//     } else {
//         QMessageBox::critical(this, "Błąd", "Nie można uruchomić serwera!");
//     }
// }

// void GUI::newConnection() {
//     serverSocket = server->nextPendingConnection();

// }

// void GUI::on_testConnect_clicked()  //przeniesc
// {
//     if(clientSocket != nullptr) //tu reset connection
//     {
//         if(clientSocket->peerAddress().toString() != "")
//         {
//             QMessageBox::information(this,"Test serwera", "Adres serwera: " + clientSocket->peerAddress().toString());
//             qDebug() << clientSocket->peerAddress().toString();
//             qDebug() << "test serwera";

//         }
//         else
//             QMessageBox::information(this,"Test serwera", "Serwer niepodłączony");

//     }
//     else
//         QMessageBox::information(this,"Test serwera", "Serwer niepodłączony");

//     if(serverSocket != nullptr)
//     {
//         if(serverSocket->peerAddress().toString() != "")
//         {
//             QMessageBox::information(this,"Test klienta", "Adres klienta: " + serverSocket->peerAddress().toString());
//             qDebug() << serverSocket->peerAddress().toString();
//             qDebug() << "test klienta";
//         }
//         else
//             QMessageBox::information(this,"Test klienta", "Klient niepodłączony");

//     }
//     else
//         QMessageBox::information(this,"Test klienta", "Klient niepodłączony");

// }

