/********************************************************************************
** Form generated from reading UI file 'dialog_two_threshold_transform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_TWO_THRESHOLD_TRANSFORM_H
#define UI_DIALOG_TWO_THRESHOLD_TRANSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_DialogThresholdTransform
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *T1SpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *T2SpinBox;
    QTextBrowser *textBrowser;
    QCustomPlot *customPlot;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogThresholdTransform)
    {
        if (DialogThresholdTransform->objectName().isEmpty())
            DialogThresholdTransform->setObjectName(QString::fromUtf8("DialogThresholdTransform"));
        DialogThresholdTransform->resize(601, 401);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogThresholdTransform->sizePolicy().hasHeightForWidth());
        DialogThresholdTransform->setSizePolicy(sizePolicy);
        DialogThresholdTransform->setMinimumSize(QSize(567, 383));
        DialogThresholdTransform->setMaximumSize(QSize(1000, 700));
        verticalLayout_3 = new QVBoxLayout(DialogThresholdTransform);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(DialogThresholdTransform);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        comboBox = new QComboBox(DialogThresholdTransform);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(DialogThresholdTransform);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        T1SpinBox = new QSpinBox(DialogThresholdTransform);
        T1SpinBox->setObjectName(QString::fromUtf8("T1SpinBox"));
        T1SpinBox->setMaximum(255);
        T1SpinBox->setSingleStep(1);
        T1SpinBox->setValue(80);

        horizontalLayout_2->addWidget(T1SpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(DialogThresholdTransform);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        T2SpinBox = new QSpinBox(DialogThresholdTransform);
        T2SpinBox->setObjectName(QString::fromUtf8("T2SpinBox"));
        T2SpinBox->setMaximum(255);
        T2SpinBox->setValue(160);

        horizontalLayout->addWidget(T2SpinBox);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        textBrowser = new QTextBrowser(DialogThresholdTransform);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);


        horizontalLayout_4->addLayout(verticalLayout_2);

        customPlot = new QCustomPlot(DialogThresholdTransform);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        sizePolicy.setHeightForWidth(customPlot->sizePolicy().hasHeightForWidth());
        customPlot->setSizePolicy(sizePolicy);
        customPlot->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(customPlot);


        verticalLayout_3->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(DialogThresholdTransform);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(DialogThresholdTransform);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogThresholdTransform, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogThresholdTransform, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogThresholdTransform);
    } // setupUi

    void retranslateUi(QDialog *DialogThresholdTransform)
    {
        DialogThresholdTransform->setWindowTitle(QCoreApplication::translate("DialogThresholdTransform", "Grey Transform - Two Threshold Transform", nullptr));
        label->setText(QCoreApplication::translate("DialogThresholdTransform", "Type:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DialogThresholdTransform", "0-255-0", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DialogThresholdTransform", "255-0-255", nullptr));

        label_2->setText(QCoreApplication::translate("DialogThresholdTransform", "<html><head/><body><p><span style=\" font-size:14pt;\">T1 = </span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("DialogThresholdTransform", "<html><head/><body><p><span style=\" font-size:14pt;\">T2 = </span></p></body></html>", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("DialogThresholdTransform", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">NOTE:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Input two integer values between 0~255 for the two thresholds transform.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogThresholdTransform: public Ui_DialogThresholdTransform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_TWO_THRESHOLD_TRANSFORM_H
