/********************************************************************************
** Form generated from reading UI file 'gaussianblurdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAUSSIANBLURDIALOG_H
#define UI_GAUSSIANBLURDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GaussianBlurDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *radiusSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *sigmaSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GaussianBlurDialog)
    {
        if (GaussianBlurDialog->objectName().isEmpty())
            GaussianBlurDialog->setObjectName(QString::fromUtf8("GaussianBlurDialog"));
        GaussianBlurDialog->resize(243, 102);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GaussianBlurDialog->sizePolicy().hasHeightForWidth());
        GaussianBlurDialog->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(GaussianBlurDialog);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(GaussianBlurDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        radiusSpinBox = new QSpinBox(GaussianBlurDialog);
        radiusSpinBox->setObjectName(QString::fromUtf8("radiusSpinBox"));
        radiusSpinBox->setValue(3);

        horizontalLayout_2->addWidget(radiusSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(GaussianBlurDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        sigmaSpinBox = new QDoubleSpinBox(GaussianBlurDialog);
        sigmaSpinBox->setObjectName(QString::fromUtf8("sigmaSpinBox"));
        sigmaSpinBox->setFocusPolicy(Qt::StrongFocus);
        sigmaSpinBox->setDecimals(4);
        sigmaSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(sigmaSpinBox);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(GaussianBlurDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        retranslateUi(GaussianBlurDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GaussianBlurDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GaussianBlurDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GaussianBlurDialog);
    } // setupUi

    void retranslateUi(QDialog *GaussianBlurDialog)
    {
        GaussianBlurDialog->setWindowTitle(QCoreApplication::translate("GaussianBlurDialog", "Gauss", nullptr));
        label->setText(QCoreApplication::translate("GaussianBlurDialog", "<html><head/><body><p><span style=\" font-size:11pt;\">Radius = </span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("GaussianBlurDialog", "<html><head/><body><p><span style=\" font-size:11pt;\">Sigma = </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GaussianBlurDialog: public Ui_GaussianBlurDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAUSSIANBLURDIALOG_H
