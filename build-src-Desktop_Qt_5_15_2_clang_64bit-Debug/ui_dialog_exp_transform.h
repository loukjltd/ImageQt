/********************************************************************************
** Form generated from reading UI file 'dialog_exp_transform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_EXP_TRANSFORM_H
#define UI_DIALOG_EXP_TRANSFORM_H

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

class Ui_DialogExpTransform
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *bDoubleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QDoubleSpinBox *cDoubleSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QDoubleSpinBox *aDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QCustomPlot *customPlot;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogExpTransform)
    {
        if (DialogExpTransform->objectName().isEmpty())
            DialogExpTransform->setObjectName(QString::fromUtf8("DialogExpTransform"));
        DialogExpTransform->resize(565, 356);
        gridLayout = new QGridLayout(DialogExpTransform);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(DialogExpTransform);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label = new QLabel(DialogExpTransform);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/src/fun_exp.png")));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(DialogExpTransform);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        bDoubleSpinBox = new QDoubleSpinBox(DialogExpTransform);
        bDoubleSpinBox->setObjectName(QString::fromUtf8("bDoubleSpinBox"));
        bDoubleSpinBox->setMaximum(10.000000000000000);

        horizontalLayout_2->addWidget(bDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(DialogExpTransform);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        cDoubleSpinBox = new QDoubleSpinBox(DialogExpTransform);
        cDoubleSpinBox->setObjectName(QString::fromUtf8("cDoubleSpinBox"));
        cDoubleSpinBox->setMinimum(-2.000000000000000);
        cDoubleSpinBox->setMaximum(2.000000000000000);
        cDoubleSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_3->addWidget(cDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(DialogExpTransform);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        aDoubleSpinBox = new QDoubleSpinBox(DialogExpTransform);
        aDoubleSpinBox->setObjectName(QString::fromUtf8("aDoubleSpinBox"));
        aDoubleSpinBox->setMinimum(-50.000000000000000);
        aDoubleSpinBox->setMaximum(50.000000000000000);

        horizontalLayout_4->addWidget(aDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout);

        customPlot = new QCustomPlot(DialogExpTransform);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));

        horizontalLayout_5->addWidget(customPlot);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(DialogExpTransform);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_6->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_6);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(DialogExpTransform);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogExpTransform, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogExpTransform, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogExpTransform);
    } // setupUi

    void retranslateUi(QDialog *DialogExpTransform)
    {
        DialogExpTransform->setWindowTitle(QCoreApplication::translate("DialogExpTransform", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("DialogExpTransform", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\217\230\346\215\242\345\207\275\346\225\260\357\274\232</span></p></body></html>", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("DialogExpTransform", "<html><head/><body><p><span style=\" font-size:14pt;\">b = </span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("DialogExpTransform", "<html><head/><body><p><span style=\" font-size:14pt;\">c = </span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("DialogExpTransform", "<html><head/><body><p><span style=\" font-size:14pt;\">a = </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogExpTransform: public Ui_DialogExpTransform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_EXP_TRANSFORM_H
