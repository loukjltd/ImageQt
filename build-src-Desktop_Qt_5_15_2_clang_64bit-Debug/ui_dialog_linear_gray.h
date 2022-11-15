/********************************************************************************
** Form generated from reading UI file 'dialog_linear_gray.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_LINEAR_GRAY_H
#define UI_DIALOG_LINEAR_GRAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_LinearGrayDialog
{
public:
    QDialogButtonBox *buttonBox;
    QCustomPlot *customPlot;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *aDoubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *bDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *LinearGrayDialog)
    {
        if (LinearGrayDialog->objectName().isEmpty())
            LinearGrayDialog->setObjectName(QString::fromUtf8("LinearGrayDialog"));
        LinearGrayDialog->resize(574, 322);
        buttonBox = new QDialogButtonBox(LinearGrayDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(380, 280, 181, 32));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        customPlot = new QCustomPlot(LinearGrayDialog);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(260, 10, 301, 261));
        customPlot->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(LinearGrayDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 241, 261));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Roboto\";"));

        horizontalLayout->addWidget(label_2);

        aDoubleSpinBox = new QDoubleSpinBox(widget);
        aDoubleSpinBox->setObjectName(QString::fromUtf8("aDoubleSpinBox"));
        aDoubleSpinBox->setMinimum(-10.000000000000000);
        aDoubleSpinBox->setMaximum(10.000000000000000);
        aDoubleSpinBox->setSingleStep(0.010000000000000);
        aDoubleSpinBox->setValue(1.200000000000000);

        horizontalLayout->addWidget(aDoubleSpinBox);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Roboto\";"));

        horizontalLayout->addWidget(label_3);

        bDoubleSpinBox = new QDoubleSpinBox(widget);
        bDoubleSpinBox->setObjectName(QString::fromUtf8("bDoubleSpinBox"));
        bDoubleSpinBox->setMinimum(-100.000000000000000);
        bDoubleSpinBox->setMaximum(100.000000000000000);

        horizontalLayout->addWidget(bDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(textBrowser);


        retranslateUi(LinearGrayDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LinearGrayDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LinearGrayDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LinearGrayDialog);
    } // setupUi

    void retranslateUi(QDialog *LinearGrayDialog)
    {
        LinearGrayDialog->setWindowTitle(QCoreApplication::translate("LinearGrayDialog", "Linear Gray Level Transformation", nullptr));
        label_4->setText(QCoreApplication::translate("LinearGrayDialog", "<html><head/><body><p><span style=\" font-size:11pt;\">Transformation function:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("LinearGrayDialog", "y = ", nullptr));
        label_3->setText(QCoreApplication::translate("LinearGrayDialog", "x + ", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("LinearGrayDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#c80932;\">NOTE!</span><span style=\" font-size:11pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">The function you choose here will be used for grayscale linear transformation.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinearGrayDialog: public Ui_LinearGrayDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_LINEAR_GRAY_H
