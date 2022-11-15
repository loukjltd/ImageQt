/********************************************************************************
** Form generated from reading UI file 'dialog_stretch_transform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_STRETCH_TRANSFORM_H
#define UI_DIALOG_STRETCH_TRANSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_DialogStretchTransform
{
public:
    QCustomPlot *customPlot;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *x1;
    QLabel *label_2;
    QSpinBox *y1;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpinBox *x2;
    QLabel *label_6;
    QSpinBox *y2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *k1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLabel *k2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *k3;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *DialogStretchTransform)
    {
        if (DialogStretchTransform->objectName().isEmpty())
            DialogStretchTransform->setObjectName(QString::fromUtf8("DialogStretchTransform"));
        DialogStretchTransform->resize(575, 374);
        customPlot = new QCustomPlot(DialogStretchTransform);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(230, 10, 331, 291));
        widget = new QWidget(DialogStretchTransform);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(340, 320, 222, 36));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_6->addWidget(buttonBox);

        widget1 = new QWidget(DialogStretchTransform);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 10, 201, 291));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        x1 = new QSpinBox(widget1);
        x1->setObjectName(QString::fromUtf8("x1"));
        x1->setMaximum(255);
        x1->setValue(50);

        horizontalLayout->addWidget(x1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        y1 = new QSpinBox(widget1);
        y1->setObjectName(QString::fromUtf8("y1"));
        y1->setMaximum(255);
        y1->setValue(60);

        horizontalLayout->addWidget(y1);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        x2 = new QSpinBox(widget1);
        x2->setObjectName(QString::fromUtf8("x2"));
        x2->setMaximum(255);
        x2->setValue(160);

        horizontalLayout_2->addWidget(x2);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        y2 = new QSpinBox(widget1);
        y2->setObjectName(QString::fromUtf8("y2"));
        y2->setMaximum(255);
        y2->setValue(150);

        horizontalLayout_2->addWidget(y2);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 87 14pt \"Roboto\";"));

        horizontalLayout_3->addWidget(label_7);

        k1 = new QLabel(widget1);
        k1->setObjectName(QString::fromUtf8("k1"));

        horizontalLayout_3->addWidget(k1);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(widget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: 87 14pt \"Roboto\";"));

        horizontalLayout_4->addWidget(label_8);

        k2 = new QLabel(widget1);
        k2->setObjectName(QString::fromUtf8("k2"));

        horizontalLayout_4->addWidget(k2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 87 14pt \"Roboto\";"));

        horizontalLayout_5->addWidget(label_9);

        k3 = new QLabel(widget1);
        k3->setObjectName(QString::fromUtf8("k3"));

        horizontalLayout_5->addWidget(k3);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        textBrowser = new QTextBrowser(widget1);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_4->addWidget(textBrowser);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        retranslateUi(DialogStretchTransform);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogStretchTransform, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogStretchTransform, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogStretchTransform);
    } // setupUi

    void retranslateUi(QDialog *DialogStretchTransform)
    {
        DialogStretchTransform->setWindowTitle(QCoreApplication::translate("DialogStretchTransform", "Grey Level Transform - Stretch", nullptr));
        label->setText(QCoreApplication::translate("DialogStretchTransform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">(</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("DialogStretchTransform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">,</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("DialogStretchTransform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">)</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("DialogStretchTransform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">(</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("DialogStretchTransform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">,</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("DialogStretchTransform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">)</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("DialogStretchTransform", "k1 = ", nullptr));
        k1->setText(QString());
        label_8->setText(QCoreApplication::translate("DialogStretchTransform", "k2 =", nullptr));
        k2->setText(QString());
        label_9->setText(QCoreApplication::translate("DialogStretchTransform", "k3 =", nullptr));
        k3->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("DialogStretchTransform", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">NOTE!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Input two points, and then the slope will be calculate automatically.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogStretchTransform: public Ui_DialogStretchTransform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_STRETCH_TRANSFORM_H
