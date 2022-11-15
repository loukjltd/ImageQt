/********************************************************************************
** Form generated from reading UI file 'dialog_log_grey.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_LOG_GREY_H
#define UI_DIALOG_LOG_GREY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_DialogLogGrey
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *funLabel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QDoubleSpinBox *aDoubleSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QDoubleSpinBox *bDoubleSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *verticalSpacer;
    QCustomPlot *customPlot;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogLogGrey)
    {
        if (DialogLogGrey->objectName().isEmpty())
            DialogLogGrey->setObjectName(QString::fromUtf8("DialogLogGrey"));
        DialogLogGrey->resize(594, 352);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogLogGrey->sizePolicy().hasHeightForWidth());
        DialogLogGrey->setSizePolicy(sizePolicy);
        widget = new QWidget(DialogLogGrey);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(6, 6, 581, 341));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_3->setContentsMargins(0, 0, 0, 1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        funLabel = new QLabel(widget);
        funLabel->setObjectName(QString::fromUtf8("funLabel"));

        verticalLayout_2->addWidget(funLabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));

        horizontalLayout_2->addLayout(horizontalLayout_8);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        aDoubleSpinBox = new QDoubleSpinBox(widget);
        aDoubleSpinBox->setObjectName(QString::fromUtf8("aDoubleSpinBox"));
        aDoubleSpinBox->setSingleStep(0.100000000000000);
        aDoubleSpinBox->setValue(2.720000000000000);

        horizontalLayout_2->addWidget(aDoubleSpinBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));

        horizontalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));

        horizontalLayout->addLayout(horizontalLayout_7);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        bDoubleSpinBox = new QDoubleSpinBox(widget);
        bDoubleSpinBox->setObjectName(QString::fromUtf8("bDoubleSpinBox"));
        bDoubleSpinBox->setMinimum(0.000000000000000);

        horizontalLayout->addWidget(bDoubleSpinBox);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));

        horizontalLayout->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_2);

        customPlot = new QCustomPlot(widget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));

        horizontalLayout_3->addWidget(customPlot);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(DialogLogGrey);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogLogGrey, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogLogGrey, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogLogGrey);
    } // setupUi

    void retranslateUi(QDialog *DialogLogGrey)
    {
        DialogLogGrey->setWindowTitle(QCoreApplication::translate("DialogLogGrey", "Dialog", nullptr));
        funLabel->setText(QString());
        label->setText(QCoreApplication::translate("DialogLogGrey", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">a = </span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("DialogLogGrey", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">b = </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLogGrey: public Ui_DialogLogGrey {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_LOG_GREY_H
