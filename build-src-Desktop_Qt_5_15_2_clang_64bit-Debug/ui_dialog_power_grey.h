/********************************************************************************
** Form generated from reading UI file 'dialog_power_grey.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_POWER_GREY_H
#define UI_DIALOG_POWER_GREY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_DialogPowerGrey
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *cDoubleSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *rDoubleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QDoubleSpinBox *bDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QCustomPlot *customPlot;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogPowerGrey)
    {
        if (DialogPowerGrey->objectName().isEmpty())
            DialogPowerGrey->setObjectName(QString::fromUtf8("DialogPowerGrey"));
        DialogPowerGrey->resize(646, 382);
        gridLayout = new QGridLayout(DialogPowerGrey);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(DialogPowerGrey);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(DialogPowerGrey);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        cDoubleSpinBox = new QDoubleSpinBox(DialogPowerGrey);
        cDoubleSpinBox->setObjectName(QString::fromUtf8("cDoubleSpinBox"));
        cDoubleSpinBox->setSingleStep(0.010000000000000);

        horizontalLayout->addWidget(cDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(DialogPowerGrey);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        rDoubleSpinBox = new QDoubleSpinBox(DialogPowerGrey);
        rDoubleSpinBox->setObjectName(QString::fromUtf8("rDoubleSpinBox"));

        horizontalLayout_2->addWidget(rDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(DialogPowerGrey);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        bDoubleSpinBox = new QDoubleSpinBox(DialogPowerGrey);
        bDoubleSpinBox->setObjectName(QString::fromUtf8("bDoubleSpinBox"));

        horizontalLayout_3->addWidget(bDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_4->addLayout(verticalLayout_2);

        customPlot = new QCustomPlot(DialogPowerGrey);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));

        horizontalLayout_4->addWidget(customPlot);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(DialogPowerGrey);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_5->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(DialogPowerGrey);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogPowerGrey, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogPowerGrey, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogPowerGrey);
    } // setupUi

    void retranslateUi(QDialog *DialogPowerGrey)
    {
        DialogPowerGrey->setWindowTitle(QCoreApplication::translate("DialogPowerGrey", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogPowerGrey", "<html><head/><body><p><span style=\" font-size:16pt;\">\345\217\230\346\215\242\345\207\275\346\225\260\357\274\232y = cx</span><span style=\" font-size:16pt; vertical-align:super;\">r </span><span style=\" font-size:16pt;\">+ b</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("DialogPowerGrey", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">c = </span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("DialogPowerGrey", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">r = </span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("DialogPowerGrey", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">b = </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPowerGrey: public Ui_DialogPowerGrey {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_POWER_GREY_H
