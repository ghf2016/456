/********************************************************************************
** Form generated from reading UI file 'DlgAVSetting.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGAVSETTING_H
#define UI_DLGAVSETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgAVSetting
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hBoxTop;
    QHBoxLayout *hBoxTitle;
    QHBoxLayout *hBoxSysBtn;
    QVBoxLayout *vBoxClient;
    QTabWidget *tabAVSetting;
    QWidget *tab;
    QComboBox *cmbMicList;
    QComboBox *cmbSpeakerList;
    QLabel *label;
    QLabel *label_2;
    QSlider *sliderMic;
    QSlider *sliderSpeaker;
    QLabel *label_3;
    QLabel *micImageLabel;
    QLabel *soundImageLabel;
    QCheckBox *checkBox;
    QLabel *label_4;
    QWidget *tab_2;
    QLabel *lblVideo;
    QComboBox *cmbCamList;
    QLabel *label_5;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLabel *label_6;
    QLabel *label_7;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QPushButton *pushButton;
    QLabel *label_8;
    QHBoxLayout *hBoxBottom;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QWidget *DlgAVSetting)
    {
        if (DlgAVSetting->objectName().isEmpty())
            DlgAVSetting->setObjectName(QString::fromUtf8("DlgAVSetting"));
        DlgAVSetting->resize(431, 344);
        verticalLayout = new QVBoxLayout(DlgAVSetting);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hBoxTop = new QHBoxLayout();
        hBoxTop->setSpacing(0);
        hBoxTop->setObjectName(QString::fromUtf8("hBoxTop"));
        hBoxTop->setContentsMargins(-1, -1, -1, 0);
        hBoxTitle = new QHBoxLayout();
        hBoxTitle->setSpacing(0);
        hBoxTitle->setObjectName(QString::fromUtf8("hBoxTitle"));
        hBoxTitle->setContentsMargins(5, -1, -1, -1);

        hBoxTop->addLayout(hBoxTitle);

        hBoxSysBtn = new QHBoxLayout();
        hBoxSysBtn->setSpacing(0);
        hBoxSysBtn->setObjectName(QString::fromUtf8("hBoxSysBtn"));
        hBoxSysBtn->setContentsMargins(-1, -1, 2, -1);

        hBoxTop->addLayout(hBoxSysBtn);


        verticalLayout->addLayout(hBoxTop);

        vBoxClient = new QVBoxLayout();
        vBoxClient->setSpacing(0);
        vBoxClient->setObjectName(QString::fromUtf8("vBoxClient"));
        vBoxClient->setContentsMargins(1, -1, 1, -1);
        tabAVSetting = new QTabWidget(DlgAVSetting);
        tabAVSetting->setObjectName(QString::fromUtf8("tabAVSetting"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        cmbMicList = new QComboBox(tab);
        cmbMicList->setObjectName(QString::fromUtf8("cmbMicList"));
        cmbMicList->setGeometry(QRect(20, 30, 351, 22));
        cmbSpeakerList = new QComboBox(tab);
        cmbSpeakerList->setObjectName(QString::fromUtf8("cmbSpeakerList"));
        cmbSpeakerList->setGeometry(QRect(20, 80, 351, 22));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 15, 151, 16));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 65, 161, 16));
        sliderMic = new QSlider(tab);
        sliderMic->setObjectName(QString::fromUtf8("sliderMic"));
        sliderMic->setGeometry(QRect(60, 140, 100, 22));
        sliderMic->setMinimum(0);
        sliderMic->setMaximum(255);
        sliderMic->setValue(204);
        sliderMic->setOrientation(Qt::Horizontal);
        sliderSpeaker = new QSlider(tab);
        sliderSpeaker->setObjectName(QString::fromUtf8("sliderSpeaker"));
        sliderSpeaker->setGeometry(QRect(230, 140, 100, 22));
        sliderSpeaker->setMaximum(255);
        sliderSpeaker->setValue(204);
        sliderSpeaker->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 54, 12));
        micImageLabel = new QLabel(tab);
        micImageLabel->setObjectName(QString::fromUtf8("micImageLabel"));
        micImageLabel->setGeometry(QRect(33, 140, 21, 20));
        soundImageLabel = new QLabel(tab);
        soundImageLabel->setObjectName(QString::fromUtf8("soundImageLabel"));
        soundImageLabel->setGeometry(QRect(203, 140, 21, 20));
        checkBox = new QCheckBox(tab);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(40, 170, 241, 16));
        checkBox->setTristate(false);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 200, 311, 16));
        tabAVSetting->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lblVideo = new QLabel(tab_2);
        lblVideo->setObjectName(QString::fromUtf8("lblVideo"));
        lblVideo->setGeometry(QRect(10, 10, 231, 211));
        lblVideo->setPixmap(QPixmap(QString::fromUtf8("../Resources/setting/SeanVideoTestDefalutImage.png")));
        lblVideo->setScaledContents(true);
        cmbCamList = new QComboBox(tab_2);
        cmbCamList->setObjectName(QString::fromUtf8("cmbCamList"));
        cmbCamList->setGeometry(QRect(260, 90, 161, 21));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(250, 10, 54, 12));
        checkBox_2 = new QCheckBox(tab_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(260, 30, 131, 16));
        checkBox_3 = new QCheckBox(tab_2);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(260, 50, 151, 16));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 70, 161, 16));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(250, 120, 111, 16));
        checkBox_4 = new QCheckBox(tab_2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(260, 140, 151, 16));
        checkBox_5 = new QCheckBox(tab_2);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(260, 160, 151, 16));
        checkBox_6 = new QCheckBox(tab_2);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(260, 190, 151, 16));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 220, 81, 23));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 230, 221, 16));
        tabAVSetting->addTab(tab_2, QString());

        vBoxClient->addWidget(tabAVSetting);


        verticalLayout->addLayout(vBoxClient);

        hBoxBottom = new QHBoxLayout();
        hBoxBottom->setSpacing(12);
        hBoxBottom->setObjectName(QString::fromUtf8("hBoxBottom"));
        hBoxBottom->setContentsMargins(-1, -1, 5, -1);
        horizontalSpacer = new QSpacerItem(40, 35, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hBoxBottom->addItem(horizontalSpacer);

        btnOK = new QPushButton(DlgAVSetting);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnOK->sizePolicy().hasHeightForWidth());
        btnOK->setSizePolicy(sizePolicy);

        hBoxBottom->addWidget(btnOK);

        btnCancel = new QPushButton(DlgAVSetting);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);

        hBoxBottom->addWidget(btnCancel);


        verticalLayout->addLayout(hBoxBottom);


        retranslateUi(DlgAVSetting);

        tabAVSetting->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DlgAVSetting);
    } // setupUi

    void retranslateUi(QWidget *DlgAVSetting)
    {
        DlgAVSetting->setWindowTitle(QApplication::translate("DlgAVSetting", "\351\237\263\350\247\206\351\242\221\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DlgAVSetting", "\345\243\260\351\237\263\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DlgAVSetting", "\345\243\260\351\237\263\350\276\223\345\207\272", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DlgAVSetting", "\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        micImageLabel->setText(QApplication::translate("DlgAVSetting", "TextLabel", 0, QApplication::UnicodeUTF8));
        soundImageLabel->setText(QApplication::translate("DlgAVSetting", "TextLabel", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("DlgAVSetting", "\350\207\252\345\212\250\350\260\203\350\212\202\351\272\246\345\205\213\351\243\216\351\237\263\351\207\217", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DlgAVSetting", "\346\217\220\347\244\272\357\274\232\350\257\267\345\257\271\347\235\200\351\272\246\345\205\213\351\243\216\350\257\264\350\257\235\357\274\214\350\277\233\350\241\214\350\257\225\345\220\254\346\265\213\350\257\225.", 0, QApplication::UnicodeUTF8));
        tabAVSetting->setTabText(tabAVSetting->indexOf(tab), QApplication::translate("DlgAVSetting", "\351\237\263\351\242\221", 0, QApplication::UnicodeUTF8));
        lblVideo->setText(QString());
        label_5->setText(QApplication::translate("DlgAVSetting", "\351\242\204\350\247\210", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("DlgAVSetting", "\346\210\221\347\232\204\346\234\254\345\234\260\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("DlgAVSetting", "\345\257\271\346\226\271\347\234\213\345\210\260\347\232\204\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DlgAVSetting", "\350\257\267\351\200\211\346\213\251\344\275\240\347\232\204\350\247\206\351\242\221\350\256\276\345\244\207", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DlgAVSetting", "\344\274\230\345\205\210\351\200\211\351\241\271", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("DlgAVSetting", "\344\274\230\345\205\210\344\277\235\350\257\201\347\224\273\351\235\242\346\270\205\346\231\260", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("DlgAVSetting", "\344\274\230\345\205\210\344\277\235\350\257\201\350\247\206\351\242\221\346\265\201\347\225\205", 0, QApplication::UnicodeUTF8));
        checkBox_6->setText(QApplication::translate("DlgAVSetting", "\350\212\202\347\234\201\345\256\275\345\270\246\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DlgAVSetting", "\347\224\273\350\264\250\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DlgAVSetting", "\350\247\206\351\242\221\347\273\204\344\273\266\345\220\257\345\212\250\346\210\220\345\212\237!", 0, QApplication::UnicodeUTF8));
        tabAVSetting->setTabText(tabAVSetting->indexOf(tab_2), QApplication::translate("DlgAVSetting", "\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("DlgAVSetting", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("DlgAVSetting", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DlgAVSetting: public Ui_DlgAVSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGAVSETTING_H
