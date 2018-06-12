/********************************************************************************
** Form generated from reading UI file 'RoomWdg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMWDG_H
#define UI_ROOMWDG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomWdg
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *wdgTop;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *titleBar;
    QLabel *lblLogo;
    QHBoxLayout *horizontalLayout;
    QLabel *lblRoomNameLogo;
    QLabel *lblRoomName;
    QVBoxLayout *sysBtnBar;
    QHBoxLayout *sysBtnBar2;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QWidget *wdgClient;
    QHBoxLayout *horizontalLayout_4;
    QSplitter *splitter;
    QWidget *leftFrm;
    QWidget *centerFrm;
    QHBoxLayout *layoutRight;
    QCheckBox *btnTurnLeft;
    QWidget *videoFrm;
    QWidget *wdgBotton;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *bottomToolBar;
    QCheckBox *btnMic;
    QSlider *sliderMic;
    QCheckBox *btnSpeaker;
    QSlider *sliderSpeaker;
    QPushButton *btnFullScreen;
    QToolButton *btnShowPPT;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *bottom_right;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnShowVideo;
    QPushButton *btnCloseVideo;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *RoomWdg)
    {
        if (RoomWdg->objectName().isEmpty())
            RoomWdg->setObjectName(QString::fromUtf8("RoomWdg"));
        RoomWdg->resize(886, 690);
        RoomWdg->setMinimumSize(QSize(800, 600));
        verticalLayout = new QVBoxLayout(RoomWdg);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        wdgTop = new QWidget(RoomWdg);
        wdgTop->setObjectName(QString::fromUtf8("wdgTop"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wdgTop->sizePolicy().hasHeightForWidth());
        wdgTop->setSizePolicy(sizePolicy);
        wdgTop->setMinimumSize(QSize(0, 81));
        wdgTop->setBaseSize(QSize(0, 28));
        wdgTop->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(wdgTop);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetFixedSize);
        titleBar = new QHBoxLayout();
        titleBar->setSpacing(10);
        titleBar->setObjectName(QString::fromUtf8("titleBar"));
        titleBar->setContentsMargins(23, -1, -1, -1);
        lblLogo = new QLabel(wdgTop);
        lblLogo->setObjectName(QString::fromUtf8("lblLogo"));
        lblLogo->setMinimumSize(QSize(242, 46));
        lblLogo->setMaximumSize(QSize(500, 50));
        lblLogo->setPixmap(QPixmap(QString::fromUtf8(":/login/login/logo4.png")));
        lblLogo->setScaledContents(false);

        titleBar->addWidget(lblLogo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblRoomNameLogo = new QLabel(wdgTop);
        lblRoomNameLogo->setObjectName(QString::fromUtf8("lblRoomNameLogo"));
        lblRoomNameLogo->setMinimumSize(QSize(18, 16));
        lblRoomNameLogo->setMaximumSize(QSize(18, 16));
        lblRoomNameLogo->setStyleSheet(QString::fromUtf8("background-image: url(:/skin/room/icon_rom_name.png);\n"
"background-repeat: no-repeat;"));

        horizontalLayout->addWidget(lblRoomNameLogo);

        lblRoomName = new QLabel(wdgTop);
        lblRoomName->setObjectName(QString::fromUtf8("lblRoomName"));
        lblRoomName->setMinimumSize(QSize(250, 50));
        lblRoomName->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"font-size:12pt;\n"
"font-family:\345\276\256\350\275\257\351\233\205\351\273\221,\345\256\213\344\275\223;\n"
"color: rgb(255, 255, 255);\n"
""));
        lblRoomName->setScaledContents(false);
        lblRoomName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblRoomName);


        titleBar->addLayout(horizontalLayout);


        horizontalLayout_6->addLayout(titleBar);

        sysBtnBar = new QVBoxLayout();
        sysBtnBar->setSpacing(2);
        sysBtnBar->setObjectName(QString::fromUtf8("sysBtnBar"));
        sysBtnBar2 = new QHBoxLayout();
        sysBtnBar2->setSpacing(6);
        sysBtnBar2->setObjectName(QString::fromUtf8("sysBtnBar2"));
        label = new QLabel(wdgTop);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(1, 1));
        label->setMaximumSize(QSize(10, 10));

        sysBtnBar2->addWidget(label);

        label_2 = new QLabel(wdgTop);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        sysBtnBar2->addWidget(label_2);


        sysBtnBar->addLayout(sysBtnBar2);

        verticalSpacer = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        sysBtnBar->addItem(verticalSpacer);


        horizontalLayout_6->addLayout(sysBtnBar);


        horizontalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout->addWidget(wdgTop);

        wdgClient = new QWidget(RoomWdg);
        wdgClient->setObjectName(QString::fromUtf8("wdgClient"));
        wdgClient->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));
        horizontalLayout_4 = new QHBoxLayout(wdgClient);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        splitter = new QSplitter(wdgClient);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(2);
        splitter->setChildrenCollapsible(true);
        leftFrm = new QWidget(splitter);
        leftFrm->setObjectName(QString::fromUtf8("leftFrm"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leftFrm->sizePolicy().hasHeightForWidth());
        leftFrm->setSizePolicy(sizePolicy2);
        leftFrm->setMinimumSize(QSize(270, 0));
        leftFrm->setMaximumSize(QSize(500, 16777215));
        leftFrm->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        splitter->addWidget(leftFrm);
        centerFrm = new QWidget(splitter);
        centerFrm->setObjectName(QString::fromUtf8("centerFrm"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(centerFrm->sizePolicy().hasHeightForWidth());
        centerFrm->setSizePolicy(sizePolicy3);
        centerFrm->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        layoutRight = new QHBoxLayout(centerFrm);
        layoutRight->setSpacing(0);
        layoutRight->setContentsMargins(0, 0, 0, 0);
        layoutRight->setObjectName(QString::fromUtf8("layoutRight"));
        btnTurnLeft = new QCheckBox(centerFrm);
        btnTurnLeft->setObjectName(QString::fromUtf8("btnTurnLeft"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnTurnLeft->sizePolicy().hasHeightForWidth());
        btnTurnLeft->setSizePolicy(sizePolicy4);
        btnTurnLeft->setMinimumSize(QSize(5, 9));
        btnTurnLeft->setMaximumSize(QSize(5, 9));
        btnTurnLeft->setIconSize(QSize(5, 9));

        layoutRight->addWidget(btnTurnLeft);

        videoFrm = new QWidget(centerFrm);
        videoFrm->setObjectName(QString::fromUtf8("videoFrm"));
        videoFrm->setMaximumSize(QSize(6000, 6000));

        layoutRight->addWidget(videoFrm);

        splitter->addWidget(centerFrm);

        horizontalLayout_4->addWidget(splitter);


        verticalLayout->addWidget(wdgClient);

        wdgBotton = new QWidget(RoomWdg);
        wdgBotton->setObjectName(QString::fromUtf8("wdgBotton"));
        sizePolicy.setHeightForWidth(wdgBotton->sizePolicy().hasHeightForWidth());
        wdgBotton->setSizePolicy(sizePolicy);
        wdgBotton->setMinimumSize(QSize(0, 44));
        wdgBotton->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(wdgBotton);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(15, 0, 0, 0);
        bottomToolBar = new QHBoxLayout();
        bottomToolBar->setSpacing(10);
        bottomToolBar->setObjectName(QString::fromUtf8("bottomToolBar"));
        bottomToolBar->setContentsMargins(-1, -1, 0, -1);
        btnMic = new QCheckBox(wdgBotton);
        btnMic->setObjectName(QString::fromUtf8("btnMic"));
        btnMic->setStyleSheet(QString::fromUtf8("QCheckBox:focus, QRadioButton:focus \n"
"{\n"
"	border: none;\n"
"	outline: none;\n"
"}\n"
"\n"
"QCheckBox\n"
"{\n"
"	font-size:12px;\n"
"	font-family:\345\276\256\350\275\257\351\233\205\351\273\221,\345\256\213\344\275\223;\n"
"}\n"
"\n"
"QCheckBox::indicator\n"
"{	\n"
"	width:22px;\n"
"	height:22px;\n"
"}\n"
"QCheckBox::indicator:unchecked \n"
"{\n"
"	border-image: url(:/skin/room/mic_check.png) 0 110 0 0;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"	border-image: url(:/skin/room/mic_check.png) 0 88 0 22;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed\n"
"{\n"
"	border-image: url(:/skin/room/mic_check.png) 0 66 0 44;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled\n"
"{\n"
"  border-image: url(:/skin/room/mic_check.png) 0 66 0 44;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"	border-image: url(:/skin/room/mic_check.png) 0 44 0 66;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover\n"
"{\n"
"	border-image: url(:/skin/room/mic_check.png) 0 22 0 88;\n"
"}\n"
"\n"
"QCheck"
                        "Box::indicator:checked:pressed\n"
"{\n"
"	border-image: url(:/skin/room/mic_check.png) 0 0 0 110;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled\n"
"{\n"
"    border-image: url(:/skin/room/mic_check.png) 0 0 0 110;\n"
"}"));

        bottomToolBar->addWidget(btnMic);

        sliderMic = new QSlider(wdgBotton);
        sliderMic->setObjectName(QString::fromUtf8("sliderMic"));
        sliderMic->setMaximum(255);
        sliderMic->setValue(200);
        sliderMic->setOrientation(Qt::Horizontal);

        bottomToolBar->addWidget(sliderMic);

        btnSpeaker = new QCheckBox(wdgBotton);
        btnSpeaker->setObjectName(QString::fromUtf8("btnSpeaker"));
        btnSpeaker->setStyleSheet(QString::fromUtf8("QCheckBox:focus, QRadioButton:focus \n"
"{\n"
"	border: none;\n"
"	outline: none;\n"
"}\n"
"\n"
"QCheckBox\n"
"{\n"
"	font-size:12px;\n"
"	font-family:\345\276\256\350\275\257\351\233\205\351\273\221,\345\256\213\344\275\223;\n"
"}\n"
"\n"
"QCheckBox::indicator\n"
"{	\n"
"	width:22px;\n"
"	height:22px;\n"
"}\n"
"QCheckBox::indicator:unchecked \n"
"{\n"
"	border-image: url(:/skin/room/speaker_check.png) 0 110 0 0;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"	border-image: url(:/skin/room/speaker_check.png) 0 88 0 22;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed\n"
"{\n"
"	border-image: url(:/skin/room/speaker_check.png) 0 66 0 44;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled\n"
"{\n"
"  border-image: url(:/skin/room/speaker_check.png) 0 66 0 44;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"	border-image: url(:/skin/room/speaker_check.png) 0 44 0 66;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover\n"
"{\n"
"	border-image: url(:/skin/room/speaker_check.png) 0 22 0 8"
                        "8;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed\n"
"{\n"
"	border-image: url(:/skin/room/speaker_check.png) 0 0 0 110;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled\n"
"{\n"
"    border-image: url(:/skin/room/speaker_check.png) 0 0 0 110;\n"
"}"));

        bottomToolBar->addWidget(btnSpeaker);

        sliderSpeaker = new QSlider(wdgBotton);
        sliderSpeaker->setObjectName(QString::fromUtf8("sliderSpeaker"));
        sliderSpeaker->setMaximum(255);
        sliderSpeaker->setValue(200);
        sliderSpeaker->setOrientation(Qt::Horizontal);

        bottomToolBar->addWidget(sliderSpeaker);

        btnFullScreen = new QPushButton(wdgBotton);
        btnFullScreen->setObjectName(QString::fromUtf8("btnFullScreen"));
        btnFullScreen->setMinimumSize(QSize(24, 24));
        btnFullScreen->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/video/fullscreen_24_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnFullScreen->setIcon(icon);
        btnFullScreen->setIconSize(QSize(24, 24));

        bottomToolBar->addWidget(btnFullScreen);

        btnShowPPT = new QToolButton(wdgBotton);
        btnShowPPT->setObjectName(QString::fromUtf8("btnShowPPT"));
        btnShowPPT->setMinimumSize(QSize(67, 16));
        btnShowPPT->setMaximumSize(QSize(67, 16));
        btnShowPPT->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/skin/room/ppt_1h.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnShowPPT->setIcon(icon1);
        btnShowPPT->setIconSize(QSize(67, 16));

        bottomToolBar->addWidget(btnShowPPT);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        bottomToolBar->addItem(horizontalSpacer);


        horizontalLayout_3->addLayout(bottomToolBar);

        bottom_right = new QHBoxLayout();
        bottom_right->setSpacing(6);
        bottom_right->setObjectName(QString::fromUtf8("bottom_right"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        bottom_right->addItem(horizontalSpacer_3);

        btnShowVideo = new QPushButton(wdgBotton);
        btnShowVideo->setObjectName(QString::fromUtf8("btnShowVideo"));
        sizePolicy4.setHeightForWidth(btnShowVideo->sizePolicy().hasHeightForWidth());
        btnShowVideo->setSizePolicy(sizePolicy4);
        btnShowVideo->setMinimumSize(QSize(99, 29));

        bottom_right->addWidget(btnShowVideo);

        btnCloseVideo = new QPushButton(wdgBotton);
        btnCloseVideo->setObjectName(QString::fromUtf8("btnCloseVideo"));
        sizePolicy4.setHeightForWidth(btnCloseVideo->sizePolicy().hasHeightForWidth());
        btnCloseVideo->setSizePolicy(sizePolicy4);
        btnCloseVideo->setMinimumSize(QSize(99, 29));

        bottom_right->addWidget(btnCloseVideo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        bottom_right->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(bottom_right);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addWidget(wdgBotton);


        retranslateUi(RoomWdg);

        QMetaObject::connectSlotsByName(RoomWdg);
    } // setupUi

    void retranslateUi(QWidget *RoomWdg)
    {
        RoomWdg->setWindowTitle(QApplication::translate("RoomWdg", "\350\247\206\351\242\221\344\274\232\350\256\256\344\270\273\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        lblLogo->setText(QString());
        lblRoomNameLogo->setText(QString());
        lblRoomName->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        btnTurnLeft->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMic->setToolTip(QApplication::translate("RoomWdg", "\351\235\231\351\237\263", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnMic->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSpeaker->setToolTip(QApplication::translate("RoomWdg", "\351\235\231\351\237\263", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnSpeaker->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnFullScreen->setToolTip(QApplication::translate("RoomWdg", "\345\205\250\345\261\217\346\230\276\347\244\272\350\247\206\351\242\221\346\210\226\346\226\207\346\241\243", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnFullScreen->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnShowPPT->setToolTip(QApplication::translate("RoomWdg", "\346\274\224\347\244\272PPT", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnShowPPT->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnShowVideo->setToolTip(QApplication::translate("RoomWdg", "\346\230\276\347\244\272\346\210\221\347\232\204\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnShowVideo->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnCloseVideo->setToolTip(QApplication::translate("RoomWdg", "\346\230\276\347\244\272\346\210\221\347\232\204\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnCloseVideo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RoomWdg: public Ui_RoomWdg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMWDG_H
