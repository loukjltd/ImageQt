/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "graphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionNormal;
    QAction *actionAdjust;
    QAction *actionRestore;
    QAction *actionLeft;
    QAction *zoomAction;
    QAction *actionGrayscale;
    QAction *actionWarm;
    QAction *actionCool;
    QAction *actionMovie_frame;
    QAction *actionClassic_frame;
    QAction *actionFlower_frame;
    QAction *actionMetal;
    QAction *actionAdjust_brightness;
    QAction *actionHorizontal;
    QAction *actionVertical;
    QAction *actionHistogram;
    QAction *actionLinear_level_transformation;
    QAction *actionLogarithm_grey_level_transformation;
    QAction *actionPower_transformation;
    QAction *actionExp_transfrom;
    QAction *actionTwo_thresholds_transform;
    QAction *actionStretch_transformation;
    QAction *actionSimple;
    QAction *actionGauss;
    QAction *actionMeida_Filter;
    QAction *actionLaplace;
    QAction *actionSobel;
    QAction *actionBinaryzation;
    QAction *actionPrewitt;
    QAction *actionContour_extraction;
    QAction *actionEdge_following;
    QAction *actionArea;
    QAction *actionCircumference;
    QAction *actionDilate;
    QAction *actionExpansion;
    QAction *actionOpening;
    QAction *actionClosing;
    QAction *actionThinning;
    QAction *actionEqualization;
    QAction *actionRotate;
    QAction *actionSwitchChinese;
    QAction *actionSwitchEnglish;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    GraphicsView *leftGraphicsView;
    GraphicsView *rightGraphicsView;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuGrey_Transfrom;
    QMenu *menuGeometric;
    QMenu *menuFlip;
    QMenu *menuArtistic_Effect;
    QMenu *menuFrame;
    QMenu *menuTexture;
    QMenu *menuTemperature;
    QMenu *menuBlur;
    QMenu *menuContour_extraction;
    QMenu *menuMorphology;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1196, 711);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/openImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/cleanImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/saveImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionSave_As->setIcon(icon3);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/exitApp.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/aboutThis.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon5);
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName(QString::fromUtf8("actionNormal"));
        actionAdjust = new QAction(MainWindow);
        actionAdjust->setObjectName(QString::fromUtf8("actionAdjust"));
        actionRestore = new QAction(MainWindow);
        actionRestore->setObjectName(QString::fromUtf8("actionRestore"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/resetImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRestore->setIcon(icon6);
        actionLeft = new QAction(MainWindow);
        actionLeft->setObjectName(QString::fromUtf8("actionLeft"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/rightRotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLeft->setIcon(icon7);
        zoomAction = new QAction(MainWindow);
        zoomAction->setObjectName(QString::fromUtf8("zoomAction"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/src/zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomAction->setIcon(icon8);
        actionGrayscale = new QAction(MainWindow);
        actionGrayscale->setObjectName(QString::fromUtf8("actionGrayscale"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/grayScale.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGrayscale->setIcon(icon9);
        actionWarm = new QAction(MainWindow);
        actionWarm->setObjectName(QString::fromUtf8("actionWarm"));
        actionCool = new QAction(MainWindow);
        actionCool->setObjectName(QString::fromUtf8("actionCool"));
        actionMovie_frame = new QAction(MainWindow);
        actionMovie_frame->setObjectName(QString::fromUtf8("actionMovie_frame"));
        actionClassic_frame = new QAction(MainWindow);
        actionClassic_frame->setObjectName(QString::fromUtf8("actionClassic_frame"));
        actionFlower_frame = new QAction(MainWindow);
        actionFlower_frame->setObjectName(QString::fromUtf8("actionFlower_frame"));
        actionMetal = new QAction(MainWindow);
        actionMetal->setObjectName(QString::fromUtf8("actionMetal"));
        actionAdjust_brightness = new QAction(MainWindow);
        actionAdjust_brightness->setObjectName(QString::fromUtf8("actionAdjust_brightness"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/adjustBrightness.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdjust_brightness->setIcon(icon10);
        actionHorizontal = new QAction(MainWindow);
        actionHorizontal->setObjectName(QString::fromUtf8("actionHorizontal"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/src/horizontal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHorizontal->setIcon(icon11);
        actionVertical = new QAction(MainWindow);
        actionVertical->setObjectName(QString::fromUtf8("actionVertical"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/img/src/vertical.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVertical->setIcon(icon12);
        actionHistogram = new QAction(MainWindow);
        actionHistogram->setObjectName(QString::fromUtf8("actionHistogram"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/img/imageHistogram.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHistogram->setIcon(icon13);
        actionLinear_level_transformation = new QAction(MainWindow);
        actionLinear_level_transformation->setObjectName(QString::fromUtf8("actionLinear_level_transformation"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/img/src/line_graphic_72p.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLinear_level_transformation->setIcon(icon14);
        actionLogarithm_grey_level_transformation = new QAction(MainWindow);
        actionLogarithm_grey_level_transformation->setObjectName(QString::fromUtf8("actionLogarithm_grey_level_transformation"));
        actionPower_transformation = new QAction(MainWindow);
        actionPower_transformation->setObjectName(QString::fromUtf8("actionPower_transformation"));
        actionExp_transfrom = new QAction(MainWindow);
        actionExp_transfrom->setObjectName(QString::fromUtf8("actionExp_transfrom"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/img/src/Line_Chart_72px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExp_transfrom->setIcon(icon15);
        actionTwo_thresholds_transform = new QAction(MainWindow);
        actionTwo_thresholds_transform->setObjectName(QString::fromUtf8("actionTwo_thresholds_transform"));
        actionStretch_transformation = new QAction(MainWindow);
        actionStretch_transformation->setObjectName(QString::fromUtf8("actionStretch_transformation"));
        actionSimple = new QAction(MainWindow);
        actionSimple->setObjectName(QString::fromUtf8("actionSimple"));
        actionGauss = new QAction(MainWindow);
        actionGauss->setObjectName(QString::fromUtf8("actionGauss"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/img/src/blur_on_72px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGauss->setIcon(icon16);
        actionMeida_Filter = new QAction(MainWindow);
        actionMeida_Filter->setObjectName(QString::fromUtf8("actionMeida_Filter"));
        actionLaplace = new QAction(MainWindow);
        actionLaplace->setObjectName(QString::fromUtf8("actionLaplace"));
        actionSobel = new QAction(MainWindow);
        actionSobel->setObjectName(QString::fromUtf8("actionSobel"));
        actionBinaryzation = new QAction(MainWindow);
        actionBinaryzation->setObjectName(QString::fromUtf8("actionBinaryzation"));
        actionPrewitt = new QAction(MainWindow);
        actionPrewitt->setObjectName(QString::fromUtf8("actionPrewitt"));
        actionContour_extraction = new QAction(MainWindow);
        actionContour_extraction->setObjectName(QString::fromUtf8("actionContour_extraction"));
        actionEdge_following = new QAction(MainWindow);
        actionEdge_following->setObjectName(QString::fromUtf8("actionEdge_following"));
        actionArea = new QAction(MainWindow);
        actionArea->setObjectName(QString::fromUtf8("actionArea"));
        actionCircumference = new QAction(MainWindow);
        actionCircumference->setObjectName(QString::fromUtf8("actionCircumference"));
        actionDilate = new QAction(MainWindow);
        actionDilate->setObjectName(QString::fromUtf8("actionDilate"));
        actionExpansion = new QAction(MainWindow);
        actionExpansion->setObjectName(QString::fromUtf8("actionExpansion"));
        actionOpening = new QAction(MainWindow);
        actionOpening->setObjectName(QString::fromUtf8("actionOpening"));
        actionClosing = new QAction(MainWindow);
        actionClosing->setObjectName(QString::fromUtf8("actionClosing"));
        actionThinning = new QAction(MainWindow);
        actionThinning->setObjectName(QString::fromUtf8("actionThinning"));
        actionEqualization = new QAction(MainWindow);
        actionEqualization->setObjectName(QString::fromUtf8("actionEqualization"));
        actionRotate = new QAction(MainWindow);
        actionRotate->setObjectName(QString::fromUtf8("actionRotate"));
        actionSwitchChinese = new QAction(MainWindow);
        actionSwitchChinese->setObjectName(QString::fromUtf8("actionSwitchChinese"));
        actionSwitchEnglish = new QAction(MainWindow);
        actionSwitchEnglish->setObjectName(QString::fromUtf8("actionSwitchEnglish"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        leftGraphicsView = new GraphicsView(centralwidget);
        leftGraphicsView->setObjectName(QString::fromUtf8("leftGraphicsView"));

        horizontalLayout_4->addWidget(leftGraphicsView);

        rightGraphicsView = new GraphicsView(centralwidget);
        rightGraphicsView->setObjectName(QString::fromUtf8("rightGraphicsView"));

        horizontalLayout_4->addWidget(rightGraphicsView);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1196, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuGrey_Transfrom = new QMenu(menuBar);
        menuGrey_Transfrom->setObjectName(QString::fromUtf8("menuGrey_Transfrom"));
        menuGeometric = new QMenu(menuBar);
        menuGeometric->setObjectName(QString::fromUtf8("menuGeometric"));
        menuFlip = new QMenu(menuGeometric);
        menuFlip->setObjectName(QString::fromUtf8("menuFlip"));
        menuArtistic_Effect = new QMenu(menuBar);
        menuArtistic_Effect->setObjectName(QString::fromUtf8("menuArtistic_Effect"));
        menuFrame = new QMenu(menuArtistic_Effect);
        menuFrame->setObjectName(QString::fromUtf8("menuFrame"));
        menuTexture = new QMenu(menuArtistic_Effect);
        menuTexture->setObjectName(QString::fromUtf8("menuTexture"));
        menuTemperature = new QMenu(menuArtistic_Effect);
        menuTemperature->setObjectName(QString::fromUtf8("menuTemperature"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/img/src/temperature_72px.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuTemperature->setIcon(icon17);
        menuBlur = new QMenu(menuBar);
        menuBlur->setObjectName(QString::fromUtf8("menuBlur"));
        menuContour_extraction = new QMenu(menuBar);
        menuContour_extraction->setObjectName(QString::fromUtf8("menuContour_extraction"));
        menuMorphology = new QMenu(menuBar);
        menuMorphology->setObjectName(QString::fromUtf8("menuMorphology"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuArtistic_Effect->menuAction());
        menuBar->addAction(menuBlur->menuAction());
        menuBar->addAction(menuGeometric->menuAction());
        menuBar->addAction(menuGrey_Transfrom->menuAction());
        menuBar->addAction(menuContour_extraction->menuAction());
        menuBar->addAction(menuMorphology->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionClose);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionExit);
        menuFile->addSeparator();
        menuFile->addAction(actionSwitchChinese);
        menuFile->addAction(actionSwitchEnglish);
        menuEdit->addAction(actionRestore);
        menuEdit->addAction(actionHistogram);
        menuEdit->addAction(actionGrayscale);
        menuEdit->addAction(actionAdjust_brightness);
        menuHelp->addAction(actionAbout);
        menuGrey_Transfrom->addAction(actionLinear_level_transformation);
        menuGrey_Transfrom->addAction(actionPower_transformation);
        menuGrey_Transfrom->addAction(actionLogarithm_grey_level_transformation);
        menuGrey_Transfrom->addAction(actionExp_transfrom);
        menuGrey_Transfrom->addAction(actionTwo_thresholds_transform);
        menuGrey_Transfrom->addAction(actionStretch_transformation);
        menuGrey_Transfrom->addSeparator();
        menuGrey_Transfrom->addAction(actionBinaryzation);
        menuGeometric->addAction(zoomAction);
        menuGeometric->addAction(actionRotate);
        menuGeometric->addAction(menuFlip->menuAction());
        menuFlip->addAction(actionHorizontal);
        menuFlip->addAction(actionVertical);
        menuArtistic_Effect->addAction(menuFrame->menuAction());
        menuArtistic_Effect->addAction(menuTexture->menuAction());
        menuArtistic_Effect->addAction(menuTemperature->menuAction());
        menuFrame->addAction(actionMovie_frame);
        menuFrame->addAction(actionClassic_frame);
        menuFrame->addAction(actionFlower_frame);
        menuTexture->addAction(actionMetal);
        menuTemperature->addAction(actionCool);
        menuTemperature->addAction(actionWarm);
        menuBlur->addAction(actionSimple);
        menuBlur->addAction(actionGauss);
        menuBlur->addSeparator();
        menuBlur->addAction(actionMeida_Filter);
        menuBlur->addSeparator();
        menuBlur->addAction(actionLaplace);
        menuContour_extraction->addAction(actionContour_extraction);
        menuContour_extraction->addAction(actionEdge_following);
        menuContour_extraction->addSeparator();
        menuContour_extraction->addAction(actionPrewitt);
        menuContour_extraction->addAction(actionSobel);
        menuMorphology->addAction(actionDilate);
        menuMorphology->addAction(actionExpansion);
        menuMorphology->addAction(actionOpening);
        menuMorphology->addAction(actionClosing);
        menuMorphology->addAction(actionThinning);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ImageQt", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\200\345\274\240\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\345\233\276\347\211\207", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        actionNormal->setText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        actionAdjust->setText(QCoreApplication::translate("MainWindow", "Adjust", nullptr));
        actionRestore->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215", nullptr));
        actionLeft->setText(QCoreApplication::translate("MainWindow", "&Left", nullptr));
        zoomAction->setText(QCoreApplication::translate("MainWindow", "\347\274\251\346\224\276", nullptr));
        actionGrayscale->setText(QCoreApplication::translate("MainWindow", "\347\201\260\345\272\246\345\233\276\345\203\217", nullptr));
        actionWarm->setText(QCoreApplication::translate("MainWindow", "&Warm", nullptr));
        actionCool->setText(QCoreApplication::translate("MainWindow", "&Cool", nullptr));
        actionMovie_frame->setText(QCoreApplication::translate("MainWindow", "\347\224\265\345\275\261", nullptr));
        actionClassic_frame->setText(QCoreApplication::translate("MainWindow", "\347\273\217\345\205\270", nullptr));
        actionFlower_frame->setText(QCoreApplication::translate("MainWindow", "\345\260\217\350\212\261", nullptr));
        actionMetal->setText(QCoreApplication::translate("MainWindow", "\351\207\221\345\261\236", nullptr));
        actionAdjust_brightness->setText(QCoreApplication::translate("MainWindow", "\344\272\256\345\272\246", nullptr));
        actionHorizontal->setText(QCoreApplication::translate("MainWindow", "\346\260\264\345\271\263", nullptr));
        actionVertical->setText(QCoreApplication::translate("MainWindow", "\345\236\202\347\233\264", nullptr));
        actionHistogram->setText(QCoreApplication::translate("MainWindow", "\347\233\264\346\226\271\345\233\276", nullptr));
        actionLinear_level_transformation->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\200\247\345\217\230\346\215\242", nullptr));
        actionLogarithm_grey_level_transformation->setText(QCoreApplication::translate("MainWindow", "\345\257\271\346\225\260\345\217\230\346\215\242", nullptr));
        actionPower_transformation->setText(QCoreApplication::translate("MainWindow", "\345\271\202\346\254\241\345\217\230\346\215\242", nullptr));
        actionExp_transfrom->setText(QCoreApplication::translate("MainWindow", "\346\214\207\346\225\260\345\217\230\346\215\242", nullptr));
        actionTwo_thresholds_transform->setText(QCoreApplication::translate("MainWindow", "\345\217\214\351\230\210\345\200\274\345\217\230\346\215\242", nullptr));
        actionStretch_transformation->setText(QCoreApplication::translate("MainWindow", "\346\213\211\344\274\270\345\217\230\346\215\242", nullptr));
        actionSimple->setText(QCoreApplication::translate("MainWindow", "\347\256\200\345\215\225\346\250\241\347\263\212", nullptr));
        actionGauss->setText(QCoreApplication::translate("MainWindow", "\351\253\230\346\226\257\346\250\241\347\263\212", nullptr));
        actionMeida_Filter->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\200\274\346\273\244\346\263\242", nullptr));
        actionLaplace->setText(QCoreApplication::translate("MainWindow", "\346\213\211\346\231\256\346\213\211\346\226\257\351\224\220\345\214\226", nullptr));
        actionSobel->setText(QCoreApplication::translate("MainWindow", "Sobel \350\276\271\347\274\230\346\243\200\346\265\213", nullptr));
        actionBinaryzation->setText(QCoreApplication::translate("MainWindow", "\344\272\214\345\200\274\345\214\226", nullptr));
        actionPrewitt->setText(QCoreApplication::translate("MainWindow", "Prewitt \350\276\271\347\274\230\346\243\200\346\265\213", nullptr));
        actionContour_extraction->setText(QCoreApplication::translate("MainWindow", "\350\275\256\345\273\223\346\217\220\345\217\226", nullptr));
        actionEdge_following->setText(QCoreApplication::translate("MainWindow", "\350\276\271\347\274\230\350\267\237\350\270\252", nullptr));
        actionArea->setText(QCoreApplication::translate("MainWindow", "Area", nullptr));
        actionCircumference->setText(QCoreApplication::translate("MainWindow", "Circumference", nullptr));
        actionDilate->setText(QCoreApplication::translate("MainWindow", "\350\205\220\350\232\200", nullptr));
        actionExpansion->setText(QCoreApplication::translate("MainWindow", "\350\206\250\350\203\200", nullptr));
        actionOpening->setText(QCoreApplication::translate("MainWindow", "\345\274\200\350\277\220\347\256\227", nullptr));
        actionClosing->setText(QCoreApplication::translate("MainWindow", "\351\227\255\350\277\220\347\256\227", nullptr));
        actionThinning->setText(QCoreApplication::translate("MainWindow", "\347\273\206\345\214\226\345\244\204\347\220\206", nullptr));
        actionEqualization->setText(QCoreApplication::translate("MainWindow", "Equalization", nullptr));
        actionRotate->setText(QCoreApplication::translate("MainWindow", "\346\227\213\350\275\254", nullptr));
        actionSwitchChinese->setText(QCoreApplication::translate("MainWindow", "\345\210\207\346\215\242\350\257\255\350\250\200\345\210\260\344\270\255\346\226\207", nullptr));
#if QT_CONFIG(tooltip)
        actionSwitchChinese->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\207\346\215\242\350\257\255\350\250\200\345\210\260\344\270\255\346\226\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSwitchEnglish->setText(QCoreApplication::translate("MainWindow", "\345\210\207\346\215\242\350\257\255\350\250\200\345\210\260\350\213\261\350\257\255", nullptr));
#if QT_CONFIG(tooltip)
        actionSwitchEnglish->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\207\346\215\242\350\257\255\350\250\200\345\210\260\350\213\261\350\257\255", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        menuGrey_Transfrom->setTitle(QCoreApplication::translate("MainWindow", "\347\201\260\350\211\262\345\217\230\346\215\242(&G)", nullptr));
        menuGeometric->setTitle(QCoreApplication::translate("MainWindow", "\345\207\240\344\275\225\345\217\230\346\215\242", nullptr));
        menuFlip->setTitle(QCoreApplication::translate("MainWindow", "\347\277\273\350\275\254\n"
"", nullptr));
        menuArtistic_Effect->setTitle(QCoreApplication::translate("MainWindow", "\350\211\272\346\234\257\346\225\210\346\236\234", nullptr));
        menuFrame->setTitle(QCoreApplication::translate("MainWindow", "\347\233\270\346\241\206", nullptr));
        menuTexture->setTitle(QCoreApplication::translate("MainWindow", "\347\272\271\347\220\206", nullptr));
        menuTemperature->setTitle(QCoreApplication::translate("MainWindow", "\350\211\262\346\270\251", nullptr));
        menuBlur->setTitle(QCoreApplication::translate("MainWindow", "\346\250\241\347\263\212\344\270\216\351\224\220\345\214\226", nullptr));
        menuContour_extraction->setTitle(QCoreApplication::translate("MainWindow", "\350\275\256\345\273\223\346\217\220\345\217\226", nullptr));
        menuMorphology->setTitle(QCoreApplication::translate("MainWindow", "\345\275\242\346\200\201\345\255\246", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
