/********************************************************************************
** Form generated from reading UI file 'ServerAddressSet.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERADDRESSSET_H
#define UI_SERVERADDRESSSET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerAddressSet
{
public:
    QLabel *backLabel;
    QLabel *titleLabel;
    QLineEdit *serverLineEdit;
    QPushButton *closeBtn;
    QPushButton *queDingBtn;
    QPushButton *cancelBtn;
    QLabel *logoLabel;

    void setupUi(QWidget *ServerAddressSet)
    {
        if (ServerAddressSet->objectName().isEmpty())
            ServerAddressSet->setObjectName(QString::fromUtf8("ServerAddressSet"));
        ServerAddressSet->resize(400, 200);
        ServerAddressSet->setStyleSheet(QString::fromUtf8("background-image: url(:/setting/setting/bg_list.png);"));
        backLabel = new QLabel(ServerAddressSet);
        backLabel->setObjectName(QString::fromUtf8("backLabel"));
        backLabel->setGeometry(QRect(0, 0, 400, 200));
        titleLabel = new QLabel(ServerAddressSet);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(30, 60, 311, 21));
        serverLineEdit = new QLineEdit(ServerAddressSet);
        serverLineEdit->setObjectName(QString::fromUtf8("serverLineEdit"));
        serverLineEdit->setGeometry(QRect(30, 90, 331, 31));
        serverLineEdit->setMouseTracking(true);
        serverLineEdit->setFocusPolicy(Qt::StrongFocus);
        closeBtn = new QPushButton(ServerAddressSet);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(370, 10, 17, 16));
        queDingBtn = new QPushButton(ServerAddressSet);
        queDingBtn->setObjectName(QString::fromUtf8("queDingBtn"));
        queDingBtn->setGeometry(QRect(90, 140, 75, 23));
        cancelBtn = new QPushButton(ServerAddressSet);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setGeometry(QRect(210, 140, 75, 23));
        logoLabel = new QLabel(ServerAddressSet);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(10, 10, 242, 46));

        retranslateUi(ServerAddressSet);

        QMetaObject::connectSlotsByName(ServerAddressSet);
    } // setupUi

    void retranslateUi(QWidget *ServerAddressSet)
    {
        ServerAddressSet->setWindowTitle(QApplication::translate("ServerAddressSet", "ServerAddressSet", 0, QApplication::UnicodeUTF8));
        backLabel->setText(QString());
        titleLabel->setText(QApplication::translate("ServerAddressSet", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\350\256\276\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        serverLineEdit->setPlaceholderText(QApplication::translate("ServerAddressSet", "www.cnbm.com", 0, QApplication::UnicodeUTF8));
        closeBtn->setText(QString());
        queDingBtn->setText(QApplication::translate("ServerAddressSet", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("ServerAddressSet", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        logoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ServerAddressSet: public Ui_ServerAddressSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERADDRESSSET_H
