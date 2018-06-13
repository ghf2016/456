/********************************************************************************
** Form generated from reading UI file 'LeftWdg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEFTWDG_H
#define UI_LEFTWDG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LeftWdg
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *userListArea;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *hBoxSpeakMode;
    QComboBox *cmbSpeakMode;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblSpeakerStatus;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblUserNum;
    QSpacerItem *horizontalSpacer;
    QListView *lvUser;
    QWidget *txtChatArea;
    QVBoxLayout *downLayout;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *outPutTextEdit;
    QWidget *chatToolBar;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *fontBox;
    QComboBox *sizeBox;
    QPushButton *colorBtn;
    QPushButton *gifBtn;
    QTextEdit *inPutTextEdit;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnSendMsg;

    void setupUi(QWidget *LeftWdg)
    {
        if (LeftWdg->objectName().isEmpty())
            LeftWdg->setObjectName(QString::fromUtf8("LeftWdg"));
        LeftWdg->resize(500, 555);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LeftWdg->sizePolicy().hasHeightForWidth());
        LeftWdg->setSizePolicy(sizePolicy);
        LeftWdg->setMinimumSize(QSize(400, 400));
        LeftWdg->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(LeftWdg);
        verticalLayout->setSpacing(10);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 10, 10);
        splitter = new QSplitter(LeftWdg);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setMinimumSize(QSize(285, 555));
        splitter->setOrientation(Qt::Vertical);
        userListArea = new QWidget(splitter);
        userListArea->setObjectName(QString::fromUtf8("userListArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(userListArea->sizePolicy().hasHeightForWidth());
        userListArea->setSizePolicy(sizePolicy1);
        userListArea->setMinimumSize(QSize(0, 300));
        userListArea->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        verticalLayout_2 = new QVBoxLayout(userListArea);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        hBoxSpeakMode = new QHBoxLayout();
        hBoxSpeakMode->setSpacing(0);
        hBoxSpeakMode->setObjectName(QString::fromUtf8("hBoxSpeakMode"));
        hBoxSpeakMode->setContentsMargins(16, -1, -1, -1);
        cmbSpeakMode = new QComboBox(userListArea);
        cmbSpeakMode->setObjectName(QString::fromUtf8("cmbSpeakMode"));
        cmbSpeakMode->setMinimumSize(QSize(150, 40));
        cmbSpeakMode->setMaximumSize(QSize(200, 16777215));
        cmbSpeakMode->setStyleSheet(QString::fromUtf8(""));

        hBoxSpeakMode->addWidget(cmbSpeakMode);

        horizontalSpacer_2 = new QSpacerItem(40, 2, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hBoxSpeakMode->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(hBoxSpeakMode);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblSpeakerStatus = new QLabel(userListArea);
        lblSpeakerStatus->setObjectName(QString::fromUtf8("lblSpeakerStatus"));
        sizePolicy.setHeightForWidth(lblSpeakerStatus->sizePolicy().hasHeightForWidth());
        lblSpeakerStatus->setSizePolicy(sizePolicy);
        lblSpeakerStatus->setMinimumSize(QSize(184, 45));
        lblSpeakerStatus->setMaximumSize(QSize(16777215, 16777215));
        lblSpeakerStatus->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-repeat: no-repeat;"));
        lblSpeakerStatus->setPixmap(QPixmap(QString::fromUtf8(":/skin/room/imgSpeakStatus.png")));

        horizontalLayout_2->addWidget(lblSpeakerStatus);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(16, -1, -1, -1);
        lblUserNum = new QLabel(userListArea);
        lblUserNum->setObjectName(QString::fromUtf8("lblUserNum"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblUserNum->sizePolicy().hasHeightForWidth());
        lblUserNum->setSizePolicy(sizePolicy2);
        lblUserNum->setMinimumSize(QSize(80, 35));
        lblUserNum->setMaximumSize(QSize(120, 16777215));
        lblUserNum->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(102,102,102);"));

        horizontalLayout_3->addWidget(lblUserNum);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        lvUser = new QListView(userListArea);
        lvUser->setObjectName(QString::fromUtf8("lvUser"));
        sizePolicy.setHeightForWidth(lvUser->sizePolicy().hasHeightForWidth());
        lvUser->setSizePolicy(sizePolicy);
        lvUser->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:0px solid rgb(211, 224, 233);\n"
"min-height:40px;"));

        verticalLayout_2->addWidget(lvUser);

        splitter->addWidget(userListArea);
        txtChatArea = new QWidget(splitter);
        txtChatArea->setObjectName(QString::fromUtf8("txtChatArea"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(txtChatArea->sizePolicy().hasHeightForWidth());
        txtChatArea->setSizePolicy(sizePolicy3);
        txtChatArea->setMinimumSize(QSize(285, 250));
        txtChatArea->setMaximumSize(QSize(16777215, 500));
        downLayout = new QVBoxLayout(txtChatArea);
        downLayout->setSpacing(0);
        downLayout->setContentsMargins(0, 0, 0, 0);
        downLayout->setObjectName(QString::fromUtf8("downLayout"));
        downLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalWidget = new QWidget(txtChatArea);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        verticalWidget->setMinimumSize(QSize(285, 105));
        verticalLayout_3 = new QVBoxLayout(verticalWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        outPutTextEdit = new QTextEdit(verticalWidget);
        outPutTextEdit->setObjectName(QString::fromUtf8("outPutTextEdit"));
        sizePolicy.setHeightForWidth(outPutTextEdit->sizePolicy().hasHeightForWidth());
        outPutTextEdit->setSizePolicy(sizePolicy);
        outPutTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(outPutTextEdit);

        chatToolBar = new QWidget(verticalWidget);
        chatToolBar->setObjectName(QString::fromUtf8("chatToolBar"));
        sizePolicy3.setHeightForWidth(chatToolBar->sizePolicy().hasHeightForWidth());
        chatToolBar->setSizePolicy(sizePolicy3);
        chatToolBar->setMinimumSize(QSize(277, 30));
        chatToolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        horizontalLayout_5 = new QHBoxLayout(chatToolBar);
        horizontalLayout_5->setSpacing(3);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 2, 0);
        fontBox = new QComboBox(chatToolBar);
        fontBox->setObjectName(QString::fromUtf8("fontBox"));
        fontBox->setStyleSheet(QString::fromUtf8("outline: none;\n"
"	margin: 0px;\n"
"	border-width:3px 3px 3px 3px;\n"
"	border-image:url(:/login/login/style_1_disable.png);\n"
"	padding: 1px 1px 1px 1px;\n"
"	selection-background-color: qlineargradient(x1: 0.5, y1: 0.5, x2: 0, y2: 0, stop: 0 #3f98d9, stop: 1 #3188c7);\n"
"\n"
""));

        horizontalLayout_5->addWidget(fontBox);

        sizeBox = new QComboBox(chatToolBar);
        sizeBox->setObjectName(QString::fromUtf8("sizeBox"));
        sizeBox->setStyleSheet(QString::fromUtf8("outline: none;\n"
"	margin: 0px;\n"
"	border-width:3px 3px 3px 3px;\n"
"	border-image:url(:/login/login/style_1_disable.png);\n"
"	padding: 1px 1px 1px 1px;\n"
"	selection-background-color: qlineargradient(x1: 0.5, y1: 0.5, x2: 0, y2: 0, stop: 0 #3f98d9, stop: 1 #3188c7);\n"
""));

        horizontalLayout_5->addWidget(sizeBox);

        colorBtn = new QPushButton(chatToolBar);
        colorBtn->setObjectName(QString::fromUtf8("colorBtn"));
        colorBtn->setMaximumSize(QSize(20, 20));
        colorBtn->setStyleSheet(QString::fromUtf8("border-image:url(:/setting/setting/colorImage.png);"));

        horizontalLayout_5->addWidget(colorBtn);

        gifBtn = new QPushButton(chatToolBar);
        gifBtn->setObjectName(QString::fromUtf8("gifBtn"));
        gifBtn->setMaximumSize(QSize(20, 20));
        gifBtn->setStyleSheet(QString::fromUtf8("border:0px;\n"
"	min-width:20px;min-height:20px;\n"
"	max-width:20px;max-height:20px;	\n"
"	border-image: url(:/setting/setting/MoreExpressionShops.png) 0 0 0 0;"));

        horizontalLayout_5->addWidget(gifBtn);


        verticalLayout_3->addWidget(chatToolBar);

        inPutTextEdit = new QTextEdit(verticalWidget);
        inPutTextEdit->setObjectName(QString::fromUtf8("inPutTextEdit"));
        sizePolicy.setHeightForWidth(inPutTextEdit->sizePolicy().hasHeightForWidth());
        inPutTextEdit->setSizePolicy(sizePolicy);
        inPutTextEdit->setMinimumSize(QSize(250, 71));
        inPutTextEdit->setMaximumSize(QSize(16777215, 130));
        inPutTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        inPutTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        inPutTextEdit->setOverwriteMode(false);
        inPutTextEdit->setTabStopWidth(70);

        verticalLayout_3->addWidget(inPutTextEdit);

        horizontalWidget = new QWidget(verticalWidget);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 1, -1, 2);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        btnSendMsg = new QPushButton(horizontalWidget);
        btnSendMsg->setObjectName(QString::fromUtf8("btnSendMsg"));

        horizontalLayout->addWidget(btnSendMsg);


        verticalLayout_3->addWidget(horizontalWidget);


        downLayout->addWidget(verticalWidget);

        splitter->addWidget(txtChatArea);

        verticalLayout->addWidget(splitter);


        retranslateUi(LeftWdg);

        QMetaObject::connectSlotsByName(LeftWdg);
    } // setupUi

    void retranslateUi(QWidget *LeftWdg)
    {
        LeftWdg->setWindowTitle(QApplication::translate("LeftWdg", "LeftWdg", 0, QApplication::UnicodeUTF8));
        cmbSpeakMode->clear();
        cmbSpeakMode->insertItems(0, QStringList()
         << QApplication::translate("LeftWdg", "\350\207\252\347\224\261\350\257\264\350\257\235", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LeftWdg", "\346\214\211\351\224\256\350\257\264\350\257\235", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LeftWdg", "\344\270\273\346\214\201\344\272\272\347\202\271\345\220\215", 0, QApplication::UnicodeUTF8)
        );
        lblSpeakerStatus->setText(QString());
        lblUserNum->setText(QApplication::translate("LeftWdg", "\346\210\277\351\227\264\345\206\205\346\210\220\345\221\230(4)", 0, QApplication::UnicodeUTF8));
        colorBtn->setText(QString());
        gifBtn->setText(QString());
        inPutTextEdit->setHtml(QApplication::translate("LeftWdg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        btnSendMsg->setWhatsThis(QApplication::translate("LeftWdg", "SeanButton", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        btnSendMsg->setText(QApplication::translate("LeftWdg", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LeftWdg: public Ui_LeftWdg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEFTWDG_H
