/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_B;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QDialogButtonBox *buttonBox;
    QLabel *label_Z;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QSpinBox *delay;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName("gridLayout");
        label_B = new QLabel(Dialog);
        label_B->setObjectName("label_B");

        gridLayout->addWidget(label_B, 4, 1, 1, 1);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 3, 2, 1, 1);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(Dialog);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setDecimals(3);
        doubleSpinBox->setSingleStep(0.001000000000000);
        doubleSpinBox->setValue(0.010000000000000);

        gridLayout->addWidget(doubleSpinBox, 5, 2, 1, 1);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 4);

        label_Z = new QLabel(Dialog);
        label_Z->setObjectName("label_Z");

        gridLayout->addWidget(label_Z, 5, 1, 1, 1);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 4, 2, 1, 1);

        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 4);

        delay = new QSpinBox(Dialog);
        delay->setObjectName("delay");
        delay->setMinimum(1);

        gridLayout->addWidget(delay, 1, 2, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_B->setText(QCoreApplication::translate("Dialog", "Wsp\303\263\305\202czynniki B:", nullptr));
        lineEdit->setText(QCoreApplication::translate("Dialog", "-0.4, 0.3, -0.1", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Wsp\303\263\305\202czynniki A:", nullptr));
        label_Z->setText(QCoreApplication::translate("Dialog", "Zak\305\202\303\263cenie:", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Op\303\263\305\272nienie transportowe", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Dialog", "0.6, -0.4, 0.6", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Wsp\303\263\305\202czynniki prosz\304\231 wypisa\304\207 po przecinku np: {-0.4,0.2,1} !!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
