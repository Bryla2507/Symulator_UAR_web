/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QDoubleSpinBox *frequency;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_2;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QDoubleSpinBox *amplitude;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QDoubleSpinBox *period;
    QLabel *label_8;
    QPushButton *setGenerator;
    QHBoxLayout *horizontalLayout_24;
    QRadioButton *rectangular;
    QRadioButton *sinusoidal;
    QRadioButton *jumpUnit;
    QFrame *line_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_14;
    QDoubleSpinBox *tI_value;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_17;
    QPushButton *reset_Integral;
    QPushButton *reset_Derative;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_16;
    QDoubleSpinBox *max_value;
    QPushButton *setRegulator;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QDoubleSpinBox *kP_value;
    QCheckBox *antiWindupON;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QDoubleSpinBox *tD_value;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QDoubleSpinBox *min_value;
    QLabel *label_3;
    QCheckBox *altIntegralCheck;
    QFrame *line_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *setModel;
    QFrame *line_4;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_21;
    QRadioButton *radioNetwork;
    QRadioButton *radioLocal;
    QLabel *label_20;
    QListWidget *listWidgetClientServer;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_18;
    QTextEdit *textIP;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_19;
    QTextEdit *textPort;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *networkConfirm;
    QPushButton *testConnect;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_21;
    QDoubleSpinBox *interval;
    QPushButton *setLoop;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *save;
    QPushButton *load;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *reset;
    QPushButton *startStop;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_4;
    QPushButton *show_uP;
    QPushButton *show_uI;
    QPushButton *show_uD;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GUI)
    {
        if (GUI->objectName().isEmpty())
            GUI->setObjectName("GUI");
        GUI->resize(1220, 1288);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GUI->sizePolicy().hasHeightForWidth());
        GUI->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(GUI);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");

        gridLayout_4->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_9);

        frequency = new QDoubleSpinBox(centralwidget);
        frequency->setObjectName("frequency");
        sizePolicy1.setHeightForWidth(frequency->sizePolicy().hasHeightForWidth());
        frequency->setSizePolicy(sizePolicy1);
        frequency->setDecimals(2);
        frequency->setMaximum(10000.000000000000000);
        frequency->setSingleStep(0.100000000000000);
        frequency->setValue(1.000000000000000);

        horizontalLayout_5->addWidget(frequency);


        gridLayout_4->addLayout(horizontalLayout_5, 11, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        horizontalLayout_17->addWidget(label_5);

        doubleSpinBox_2 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setMinimum(-100.000000000000000);
        doubleSpinBox_2->setSingleStep(0.010000000000000);

        horizontalLayout_17->addWidget(doubleSpinBox_2);


        gridLayout_4->addLayout(horizontalLayout_17, 13, 0, 1, 1);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        horizontalLayout_23->addWidget(label_7);

        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setMaximum(1.000000000000000);
        doubleSpinBox->setSingleStep(0.010000000000000);
        doubleSpinBox->setValue(0.500000000000000);

        horizontalLayout_23->addWidget(doubleSpinBox);


        gridLayout_4->addLayout(horizontalLayout_23, 12, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(label_11);

        amplitude = new QDoubleSpinBox(centralwidget);
        amplitude->setObjectName("amplitude");
        sizePolicy1.setHeightForWidth(amplitude->sizePolicy().hasHeightForWidth());
        amplitude->setSizePolicy(sizePolicy1);
        amplitude->setMinimum(-100.000000000000000);
        amplitude->setMaximum(10000.000000000000000);
        amplitude->setSingleStep(0.100000000000000);
        amplitude->setValue(1.000000000000000);

        horizontalLayout_8->addWidget(amplitude);


        gridLayout_4->addLayout(horizontalLayout_8, 9, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(label_10);

        period = new QDoubleSpinBox(centralwidget);
        period->setObjectName("period");
        sizePolicy1.setHeightForWidth(period->sizePolicy().hasHeightForWidth());
        period->setSizePolicy(sizePolicy1);
        period->setMaximum(10000.000000000000000);
        period->setSingleStep(0.100000000000000);
        period->setValue(4.000000000000000);

        horizontalLayout_6->addWidget(period);


        gridLayout_4->addLayout(horizontalLayout_6, 10, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setMaximumSize(QSize(16777215, 18));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(0, 0, 127, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(0, 0, 190, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(0, 0, 158, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(0, 0, 63, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(0, 0, 85, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 127));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush9(QColor(0, 0, 63, 127));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        label_8->setPalette(palette);
        QFont font;
        font.setBold(true);
        label_8->setFont(font);
        label_8->setAutoFillBackground(false);
        label_8->setFrameShape(QFrame::Shape::StyledPanel);
        label_8->setFrameShadow(QFrame::Shadow::Raised);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_8, 3, 0, 1, 1);

        setGenerator = new QPushButton(centralwidget);
        setGenerator->setObjectName("setGenerator");
        sizePolicy1.setHeightForWidth(setGenerator->sizePolicy().hasHeightForWidth());
        setGenerator->setSizePolicy(sizePolicy1);
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        setGenerator->setPalette(palette1);

        gridLayout_4->addWidget(setGenerator, 14, 0, 1, 1);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        rectangular = new QRadioButton(centralwidget);
        rectangular->setObjectName("rectangular");
        sizePolicy1.setHeightForWidth(rectangular->sizePolicy().hasHeightForWidth());
        rectangular->setSizePolicy(sizePolicy1);
        rectangular->setChecked(true);

        horizontalLayout_24->addWidget(rectangular);

        sinusoidal = new QRadioButton(centralwidget);
        sinusoidal->setObjectName("sinusoidal");
        sizePolicy1.setHeightForWidth(sinusoidal->sizePolicy().hasHeightForWidth());
        sinusoidal->setSizePolicy(sizePolicy1);

        horizontalLayout_24->addWidget(sinusoidal);

        jumpUnit = new QRadioButton(centralwidget);
        jumpUnit->setObjectName("jumpUnit");
        sizePolicy1.setHeightForWidth(jumpUnit->sizePolicy().hasHeightForWidth());
        jumpUnit->setSizePolicy(sizePolicy1);

        horizontalLayout_24->addWidget(jumpUnit);


        gridLayout_4->addLayout(horizontalLayout_24, 4, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        sizePolicy1.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy1);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(label_14);

        tI_value = new QDoubleSpinBox(centralwidget);
        tI_value->setObjectName("tI_value");
        sizePolicy1.setHeightForWidth(tI_value->sizePolicy().hasHeightForWidth());
        tI_value->setSizePolicy(sizePolicy1);
        tI_value->setSingleStep(0.100000000000000);
        tI_value->setValue(3.000000000000000);

        horizontalLayout_9->addWidget(tI_value);


        gridLayout_3->addLayout(horizontalLayout_9, 5, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(label_17);

        reset_Integral = new QPushButton(centralwidget);
        reset_Integral->setObjectName("reset_Integral");
        sizePolicy1.setHeightForWidth(reset_Integral->sizePolicy().hasHeightForWidth());
        reset_Integral->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(reset_Integral);

        reset_Derative = new QPushButton(centralwidget);
        reset_Derative->setObjectName("reset_Derative");
        sizePolicy1.setHeightForWidth(reset_Derative->sizePolicy().hasHeightForWidth());
        reset_Derative->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(reset_Derative);


        gridLayout_3->addLayout(horizontalLayout_14, 11, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);

        horizontalLayout_13->addWidget(label_16);

        max_value = new QDoubleSpinBox(centralwidget);
        max_value->setObjectName("max_value");
        sizePolicy1.setHeightForWidth(max_value->sizePolicy().hasHeightForWidth());
        max_value->setSizePolicy(sizePolicy1);
        max_value->setMinimum(-100000.000000000000000);
        max_value->setMaximum(100000.000000000000000);
        max_value->setSingleStep(0.010000000000000);
        max_value->setValue(1.000000000000000);

        horizontalLayout_13->addWidget(max_value);


        gridLayout_3->addLayout(horizontalLayout_13, 10, 0, 1, 1);

        setRegulator = new QPushButton(centralwidget);
        setRegulator->setObjectName("setRegulator");
        sizePolicy1.setHeightForWidth(setRegulator->sizePolicy().hasHeightForWidth());
        setRegulator->setSizePolicy(sizePolicy1);
        setRegulator->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        setRegulator->setPalette(palette2);

        gridLayout_3->addWidget(setRegulator, 12, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(label_13);

        kP_value = new QDoubleSpinBox(centralwidget);
        kP_value->setObjectName("kP_value");
        sizePolicy1.setHeightForWidth(kP_value->sizePolicy().hasHeightForWidth());
        kP_value->setSizePolicy(sizePolicy1);
        kP_value->setSingleStep(0.100000000000000);
        kP_value->setValue(0.200000000000000);

        horizontalLayout_11->addWidget(kP_value);


        gridLayout_3->addLayout(horizontalLayout_11, 4, 0, 1, 1);

        antiWindupON = new QCheckBox(centralwidget);
        antiWindupON->setObjectName("antiWindupON");
        sizePolicy1.setHeightForWidth(antiWindupON->sizePolicy().hasHeightForWidth());
        antiWindupON->setSizePolicy(sizePolicy1);
        antiWindupON->setChecked(true);

        gridLayout_3->addWidget(antiWindupON, 8, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(label_12);

        tD_value = new QDoubleSpinBox(centralwidget);
        tD_value->setObjectName("tD_value");
        sizePolicy1.setHeightForWidth(tD_value->sizePolicy().hasHeightForWidth());
        tD_value->setSizePolicy(sizePolicy1);
        tD_value->setSingleStep(0.100000000000000);
        tD_value->setValue(0.200000000000000);

        horizontalLayout_10->addWidget(tD_value);


        gridLayout_3->addLayout(horizontalLayout_10, 7, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(label_15);

        min_value = new QDoubleSpinBox(centralwidget);
        min_value->setObjectName("min_value");
        sizePolicy1.setHeightForWidth(min_value->sizePolicy().hasHeightForWidth());
        min_value->setSizePolicy(sizePolicy1);
        min_value->setMinimum(-100000.000000000000000);
        min_value->setMaximum(100000.000000000000000);
        min_value->setSingleStep(0.010000000000000);
        min_value->setValue(-1.000000000000000);

        horizontalLayout_12->addWidget(min_value);


        gridLayout_3->addLayout(horizontalLayout_12, 9, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMaximumSize(QSize(16777215, 18));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        label_3->setPalette(palette3);
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::Shape::StyledPanel);
        label_3->setFrameShadow(QFrame::Shadow::Raised);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);

        altIntegralCheck = new QCheckBox(centralwidget);
        altIntegralCheck->setObjectName("altIntegralCheck");

        gridLayout_3->addWidget(altIntegralCheck, 6, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        sizePolicy1.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy1);
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(16777215, 18));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        label->setPalette(palette4);
        label->setFont(font);
        label->setFrameShape(QFrame::Shape::StyledPanel);
        label->setFrameShadow(QFrame::Shadow::Raised);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        setModel = new QPushButton(centralwidget);
        setModel->setObjectName("setModel");
        sizePolicy1.setHeightForWidth(setModel->sizePolicy().hasHeightForWidth());
        setModel->setSizePolicy(sizePolicy1);
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        setModel->setPalette(palette5);

        gridLayout->addWidget(setModel, 2, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        sizePolicy1.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy1);
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_4);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_6);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        radioNetwork = new QRadioButton(centralwidget);
        radioNetwork->setObjectName("radioNetwork");

        horizontalLayout_21->addWidget(radioNetwork);

        radioLocal = new QRadioButton(centralwidget);
        radioLocal->setObjectName("radioLocal");

        horizontalLayout_21->addWidget(radioLocal);


        verticalLayout_3->addLayout(horizontalLayout_21);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName("label_20");

        verticalLayout_3->addWidget(label_20);

        listWidgetClientServer = new QListWidget(centralwidget);
        new QListWidgetItem(listWidgetClientServer);
        new QListWidgetItem(listWidgetClientServer);
        listWidgetClientServer->setObjectName("listWidgetClientServer");
        listWidgetClientServer->setMaximumSize(QSize(16777215, 40));
        listWidgetClientServer->setSortingEnabled(false);

        verticalLayout_3->addWidget(listWidgetClientServer);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");

        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");

        horizontalLayout_25->addWidget(label_18);

        textIP = new QTextEdit(centralwidget);
        textIP->setObjectName("textIP");
        textIP->setMaximumSize(QSize(16777215, 28));

        horizontalLayout_25->addWidget(textIP);


        verticalLayout_3->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");

        horizontalLayout_26->addWidget(label_19);

        textPort = new QTextEdit(centralwidget);
        textPort->setObjectName("textPort");
        textPort->setMaximumSize(QSize(16777215, 28));

        horizontalLayout_26->addWidget(textPort);


        verticalLayout_3->addLayout(horizontalLayout_26);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        networkConfirm = new QPushButton(centralwidget);
        networkConfirm->setObjectName("networkConfirm");

        horizontalLayout_16->addWidget(networkConfirm);

        testConnect = new QPushButton(centralwidget);
        testConnect->setObjectName("testConnect");

        horizontalLayout_16->addWidget(testConnect);


        verticalLayout_3->addLayout(horizontalLayout_16);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName("label_21");
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);

        horizontalLayout_18->addWidget(label_21);

        interval = new QDoubleSpinBox(centralwidget);
        interval->setObjectName("interval");
        sizePolicy1.setHeightForWidth(interval->sizePolicy().hasHeightForWidth());
        interval->setSizePolicy(sizePolicy1);
        interval->setDecimals(3);
        interval->setMinimum(0.020000000000000);
        interval->setSingleStep(0.001000000000000);
        interval->setValue(0.020000000000000);

        horizontalLayout_18->addWidget(interval);


        gridLayout_2->addLayout(horizontalLayout_18, 3, 0, 1, 1);

        setLoop = new QPushButton(centralwidget);
        setLoop->setObjectName("setLoop");
        sizePolicy1.setHeightForWidth(setLoop->sizePolicy().hasHeightForWidth());
        setLoop->setSizePolicy(sizePolicy1);
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        setLoop->setPalette(palette6);

        gridLayout_2->addWidget(setLoop, 6, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMaximumSize(QSize(16777215, 18));
        QPalette palette7;
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        label_2->setPalette(palette7);
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::Shape::StyledPanel);
        label_2->setFrameShadow(QFrame::Shadow::Raised);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        save = new QPushButton(centralwidget);
        save->setObjectName("save");
        sizePolicy1.setHeightForWidth(save->sizePolicy().hasHeightForWidth());
        save->setSizePolicy(sizePolicy1);
        QPalette palette8;
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        QBrush brush10(QColor(170, 170, 127, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush10);
        QBrush brush11(QColor(255, 255, 190, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush11);
        QBrush brush12(QColor(212, 212, 158, 255));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush12);
        QBrush brush13(QColor(85, 85, 63, 255));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush13);
        QBrush brush14(QColor(113, 113, 85, 255));
        brush14.setStyle(Qt::BrushStyle::SolidPattern);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush14);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush10);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        QBrush brush15(QColor(212, 212, 191, 255));
        brush15.setStyle(Qt::BrushStyle::SolidPattern);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush16(QColor(0, 0, 0, 127));
        brush16.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush16);
#endif
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush10);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush11);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush12);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush13);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush14);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush10);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush16);
#endif
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush13);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush10);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush11);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush12);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush13);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush14);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush13);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush13);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush10);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush10);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush10);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush17(QColor(85, 85, 63, 127));
        brush17.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush17);
#endif
        save->setPalette(palette8);

        horizontalLayout_20->addWidget(save);

        load = new QPushButton(centralwidget);
        load->setObjectName("load");
        sizePolicy1.setHeightForWidth(load->sizePolicy().hasHeightForWidth());
        load->setSizePolicy(sizePolicy1);
        QPalette palette9;
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush10);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush11);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush12);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush13);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush14);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush10);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush16);
#endif
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush10);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush11);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush12);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush13);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush14);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush10);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush16);
#endif
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush13);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush10);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush11);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush12);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush13);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush14);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush13);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush13);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush10);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush10);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush10);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush17);
#endif
        load->setPalette(palette9);

        horizontalLayout_20->addWidget(load);


        gridLayout_2->addLayout(horizontalLayout_20, 5, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        reset = new QPushButton(centralwidget);
        reset->setObjectName("reset");
        sizePolicy1.setHeightForWidth(reset->sizePolicy().hasHeightForWidth());
        reset->setSizePolicy(sizePolicy1);
        QPalette palette10;
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush18(QColor(85, 0, 0, 255));
        brush18.setStyle(Qt::BrushStyle::SolidPattern);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush18);
        QBrush brush19(QColor(127, 0, 0, 255));
        brush19.setStyle(Qt::BrushStyle::SolidPattern);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush19);
        QBrush brush20(QColor(106, 0, 0, 255));
        brush20.setStyle(Qt::BrushStyle::SolidPattern);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush20);
        QBrush brush21(QColor(42, 0, 0, 255));
        brush21.setStyle(Qt::BrushStyle::SolidPattern);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush21);
        QBrush brush22(QColor(57, 0, 0, 255));
        brush22.setStyle(Qt::BrushStyle::SolidPattern);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush22);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush18);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush21);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush18);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush19);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush20);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush21);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush22);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush18);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush21);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush21);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush18);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush19);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush20);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush21);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush22);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush21);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush21);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush18);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush18);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush18);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush23(QColor(42, 0, 0, 127));
        brush23.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush23);
#endif
        reset->setPalette(palette10);

        horizontalLayout_19->addWidget(reset);

        startStop = new QPushButton(centralwidget);
        startStop->setObjectName("startStop");
        sizePolicy1.setHeightForWidth(startStop->sizePolicy().hasHeightForWidth());
        startStop->setSizePolicy(sizePolicy1);
        QPalette palette11;
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush24(QColor(0, 85, 0, 255));
        brush24.setStyle(Qt::BrushStyle::SolidPattern);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush24);
        QBrush brush25(QColor(0, 127, 0, 255));
        brush25.setStyle(Qt::BrushStyle::SolidPattern);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush25);
        QBrush brush26(QColor(0, 106, 0, 255));
        brush26.setStyle(Qt::BrushStyle::SolidPattern);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush26);
        QBrush brush27(QColor(0, 42, 0, 255));
        brush27.setStyle(Qt::BrushStyle::SolidPattern);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush27);
        QBrush brush28(QColor(0, 57, 0, 255));
        brush28.setStyle(Qt::BrushStyle::SolidPattern);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush28);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush24);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush27);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush24);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush25);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush26);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush27);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush28);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush24);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush27);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush27);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush24);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush25);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush26);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush27);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush28);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush27);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush27);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush24);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush24);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush24);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush29(QColor(0, 42, 0, 127));
        brush29.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush29);
#endif
        startStop->setPalette(palette11);

        horizontalLayout_19->addWidget(startStop);


        gridLayout_2->addLayout(horizontalLayout_19, 4, 0, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        horizontalLayout_22->addWidget(label_4);

        show_uP = new QPushButton(centralwidget);
        show_uP->setObjectName("show_uP");

        horizontalLayout_22->addWidget(show_uP);

        show_uI = new QPushButton(centralwidget);
        show_uI->setObjectName("show_uI");

        horizontalLayout_22->addWidget(show_uI);

        show_uD = new QPushButton(centralwidget);
        show_uD->setObjectName("show_uD");

        horizontalLayout_22->addWidget(show_uD);


        gridLayout_2->addLayout(horizontalLayout_22, 2, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);
        verticalLayout_3->setStretch(3, 1);
        verticalLayout_3->setStretch(4, 1);
        verticalLayout_3->setStretch(5, 1);
        verticalLayout_3->setStretch(14, 1);

        horizontalLayout->addLayout(verticalLayout_3);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");

        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout_2->setStretch(0, 5);
        verticalLayout_2->setStretch(1, 2);

        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(2, 7);

        horizontalLayout_2->addLayout(horizontalLayout);

        GUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GUI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1220, 25));
        GUI->setMenuBar(menubar);
        statusbar = new QStatusBar(GUI);
        statusbar->setObjectName("statusbar");
        GUI->setStatusBar(statusbar);

        retranslateUi(GUI);

        listWidgetClientServer->setCurrentRow(0);


        QMetaObject::connectSlotsByName(GUI);
    } // setupUi

    void retranslateUi(QMainWindow *GUI)
    {
        GUI->setWindowTitle(QCoreApplication::translate("GUI", "GUI", nullptr));
        label_9->setText(QCoreApplication::translate("GUI", "Cz\304\231stotliwo\305\233\304\207 (dla sin.):", nullptr));
        label_5->setText(QCoreApplication::translate("GUI", "Sta\305\202a sk\305\202adowa:", nullptr));
        label_7->setText(QCoreApplication::translate("GUI", "Wype\305\202nienie (dla prost.):", nullptr));
        label_11->setText(QCoreApplication::translate("GUI", "Amplituda:", nullptr));
        label_10->setText(QCoreApplication::translate("GUI", "Okres:", nullptr));
        label_8->setText(QCoreApplication::translate("GUI", "GENERATOR", nullptr));
        setGenerator->setText(QCoreApplication::translate("GUI", "Zatwierd\305\272 parametry", nullptr));
        rectangular->setText(QCoreApplication::translate("GUI", "Prostok\304\205tny", nullptr));
        sinusoidal->setText(QCoreApplication::translate("GUI", "Sinusoidalny", nullptr));
        jumpUnit->setText(QCoreApplication::translate("GUI", "Skok jednostkowy", nullptr));
        label_14->setText(QCoreApplication::translate("GUI", "Nastawa tI:", nullptr));
        label_17->setText(QCoreApplication::translate("GUI", "Reset pami\304\231ci:", nullptr));
        reset_Integral->setText(QCoreApplication::translate("GUI", "Ca\305\202kuj\304\205cej", nullptr));
        reset_Derative->setText(QCoreApplication::translate("GUI", "R\303\263\305\274niczkuj\304\205cej", nullptr));
        label_16->setText(QCoreApplication::translate("GUI", "Max:", nullptr));
        setRegulator->setText(QCoreApplication::translate("GUI", "Zatwierd\305\272 parametry", nullptr));
        label_13->setText(QCoreApplication::translate("GUI", "Nastawa kP:", nullptr));
        antiWindupON->setText(QCoreApplication::translate("GUI", "Anti-Windup", nullptr));
        label_12->setText(QCoreApplication::translate("GUI", "Nastawa tD:", nullptr));
        label_15->setText(QCoreApplication::translate("GUI", "Min:", nullptr));
        label_3->setText(QCoreApplication::translate("GUI", "REGULATOR PID", nullptr));
        altIntegralCheck->setText(QCoreApplication::translate("GUI", "Alternatywna metoda obliczania ca\305\202ki", nullptr));
        label->setText(QCoreApplication::translate("GUI", "MODEL ARX", nullptr));
        setModel->setText(QCoreApplication::translate("GUI", "Dodaj parametry Modelu ARX", nullptr));
        label_6->setText(QCoreApplication::translate("GUI", "USTAWIENIA PRACY SIECIOWEJ I LOKALNEJ", nullptr));
        radioNetwork->setText(QCoreApplication::translate("GUI", "Sie\304\207", nullptr));
        radioLocal->setText(QCoreApplication::translate("GUI", "Lokalnie", nullptr));
        label_20->setText(QCoreApplication::translate("GUI", "Ustawienia pracy sieciowej", nullptr));

        const bool __sortingEnabled = listWidgetClientServer->isSortingEnabled();
        listWidgetClientServer->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidgetClientServer->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("GUI", "Serwer PID", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidgetClientServer->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("GUI", "Klient ARX", nullptr));
        listWidgetClientServer->setSortingEnabled(__sortingEnabled);

        label_18->setText(QCoreApplication::translate("GUI", "Adres IP serwera", nullptr));
        label_19->setText(QCoreApplication::translate("GUI", "Port", nullptr));
        networkConfirm->setText(QCoreApplication::translate("GUI", "Zatwierd\305\272", nullptr));
        testConnect->setText(QCoreApplication::translate("GUI", "Test po\305\202\304\205czenia", nullptr));
        label_21->setText(QCoreApplication::translate("GUI", "Interwa\305\202 (min. 0,02 s):", nullptr));
        setLoop->setText(QCoreApplication::translate("GUI", "Zatwierd\305\272 parametry", nullptr));
        label_2->setText(QCoreApplication::translate("GUI", "SYMULACJA", nullptr));
        save->setText(QCoreApplication::translate("GUI", "ZAPISZ symulacj\304\231", nullptr));
        load->setText(QCoreApplication::translate("GUI", "WCZYTAJ symulacj\304\231", nullptr));
        reset->setText(QCoreApplication::translate("GUI", "RESET", nullptr));
        startStop->setText(QCoreApplication::translate("GUI", "START/STOP", nullptr));
        label_4->setText(QCoreApplication::translate("GUI", "Wykres sk\305\202adowych:", nullptr));
        show_uP->setText(QCoreApplication::translate("GUI", "uP", nullptr));
        show_uI->setText(QCoreApplication::translate("GUI", "uI", nullptr));
        show_uD->setText(QCoreApplication::translate("GUI", "uD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUI: public Ui_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
