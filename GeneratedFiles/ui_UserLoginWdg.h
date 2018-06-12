/********************************************************************************
** Form generated from reading UI file 'UserLoginWdg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGINWDG_H
#define UI_USERLOGINWDG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserLoginWdg
{
public:
    QLabel *logoLabel;
    QLabel *titleLabel;
    QPushButton *setBtn;
    QPushButton *loginBtn;
    QPushButton *closeBtn;
    QCheckBox *saveCheckBox;
    QCheckBox *freeCheckBox;
    QPushButton *meetingBtn;
    QPushButton *countBtn;

    void setupUi(QWidget *UserLoginWdg)
    {
        if (UserLoginWdg->objectName().isEmpty())
            UserLoginWdg->setObjectName(QString::fromUtf8("UserLoginWdg"));
        UserLoginWdg->resize(454, 380);
        logoLabel = new QLabel(UserLoginWdg);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(-10, 0, 450, 380));
        logoLabel->setPixmap(QPixmap(QString::fromUtf8("Resources/login/login_bg2.png")));
        titleLabel = new QLabel(UserLoginWdg);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(10, 30, 401, 41));
        titleLabel->setPixmap(QPixmap(QString::fromUtf8(":/login/login/logo4.png")));
        setBtn = new QPushButton(UserLoginWdg);
        setBtn->setObjectName(QString::fromUtf8("setBtn"));
        setBtn->setGeometry(QRect(80, 300, 86, 31));
        loginBtn = new QPushButton(UserLoginWdg);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(180, 300, 186, 31));
        closeBtn = new QPushButton(UserLoginWdg);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(420, 10, 17, 16));
        saveCheckBox = new QCheckBox(UserLoginWdg);
        saveCheckBox->setObjectName(QString::fromUtf8("saveCheckBox"));
        saveCheckBox->setGeometry(QRect(120, 270, 91, 16));
        freeCheckBox = new QCheckBox(UserLoginWdg);
        freeCheckBox->setObjectName(QString::fromUtf8("freeCheckBox"));
        freeCheckBox->setGeometry(QRect(240, 270, 101, 16));
        meetingBtn = new QPushButton(UserLoginWdg);
        meetingBtn->setObjectName(QString::fromUtf8("meetingBtn"));
        meetingBtn->setGeometry(QRect(220, 80, 211, 41));
        meetingBtn->setCheckable(true);
        countBtn = new QPushButton(UserLoginWdg);
        countBtn->setObjectName(QString::fromUtf8("countBtn"));
        countBtn->setGeometry(QRect(10, 80, 211, 41));
        countBtn->setCheckable(true);
        countBtn->setChecked(true);

        retranslateUi(UserLoginWdg);

        QMetaObject::connectSlotsByName(UserLoginWdg);
    } // setupUi

    void retranslateUi(QWidget *UserLoginWdg)
    {
        UserLoginWdg->setWindowTitle(QApplication::translate("UserLoginWdg", "UserLoginDlg", 0, QApplication::UnicodeUTF8));
        logoLabel->setText(QString());
        titleLabel->setText(QString());
        setBtn->setText(QString());
        loginBtn->setText(QString());
        closeBtn->setText(QString());
        saveCheckBox->setText(QApplication::translate("UserLoginWdg", "\344\277\235\345\255\230\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        freeCheckBox->setText(QApplication::translate("UserLoginWdg", "\345\205\215\350\264\271\344\275\223\351\252\214", 0, QApplication::UnicodeUTF8));
        meetingBtn->setText(QApplication::translate("UserLoginWdg", "\346\210\277\351\227\264\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        countBtn->setText(QApplication::translate("UserLoginWdg", "\350\264\246\345\217\267\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserLoginWdg: public Ui_UserLoginWdg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGINWDG_H
