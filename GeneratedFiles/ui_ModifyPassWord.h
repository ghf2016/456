/********************************************************************************
** Form generated from reading UI file 'ModifyPassWord.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYPASSWORD_H
#define UI_MODIFYPASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "ccommonwidget.h"

QT_BEGIN_NAMESPACE

class Ui_ModifyPassWord
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *hBoxTitle;
    QHBoxLayout *hBoxSysBtn;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lastPassword;
    QLabel *label;
    QLineEdit *newPassword;
    QLabel *label_3;
    QLineEdit *againPassword;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(CCommonWidget *ModifyPassWord)
    {
        if (ModifyPassWord->objectName().isEmpty())
            ModifyPassWord->setObjectName(QString::fromUtf8("ModifyPassWord"));
        ModifyPassWord->resize(400, 286);
        verticalLayout_2 = new QVBoxLayout(ModifyPassWord);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, -1, 3, 0);
        hBoxTitle = new QHBoxLayout();
        hBoxTitle->setSpacing(10);
        hBoxTitle->setObjectName(QString::fromUtf8("hBoxTitle"));
        hBoxTitle->setContentsMargins(10, -1, 10, 0);

        horizontalLayout->addLayout(hBoxTitle);

        hBoxSysBtn = new QHBoxLayout();
        hBoxSysBtn->setSpacing(0);
        hBoxSysBtn->setObjectName(QString::fromUtf8("hBoxSysBtn"));
        hBoxSysBtn->setContentsMargins(6, -1, 6, 6);

        horizontalLayout->addLayout(hBoxSysBtn);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 2, 10, 4);
        label_2 = new QLabel(ModifyPassWord);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        lastPassword = new QLineEdit(ModifyPassWord);
        lastPassword->setObjectName(QString::fromUtf8("lastPassword"));
        lastPassword->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(lastPassword);

        label = new QLabel(ModifyPassWord);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        newPassword = new QLineEdit(ModifyPassWord);
        newPassword->setObjectName(QString::fromUtf8("newPassword"));
        newPassword->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(newPassword);

        label_3 = new QLabel(ModifyPassWord);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        againPassword = new QLineEdit(ModifyPassWord);
        againPassword->setObjectName(QString::fromUtf8("againPassword"));
        againPassword->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(againPassword);

        label_4 = new QLabel(ModifyPassWord);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 2, 14, 4);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnOk = new QPushButton(ModifyPassWord);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout_2->addWidget(btnOk);

        btnCancel = new QPushButton(ModifyPassWord);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_2->addWidget(btnCancel);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(1, 1);

        retranslateUi(ModifyPassWord);

        QMetaObject::connectSlotsByName(ModifyPassWord);
    } // setupUi

    void retranslateUi(CCommonWidget *ModifyPassWord)
    {
        ModifyPassWord->setWindowTitle(QApplication::translate("ModifyPassWord", "ModifyPassWord", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ModifyPassWord", "\350\257\267\350\276\223\345\205\245\346\227\247\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ModifyPassWord", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ModifyPassWord", "\350\257\267\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        btnOk->setText(QApplication::translate("ModifyPassWord", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("ModifyPassWord", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModifyPassWord: public Ui_ModifyPassWord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYPASSWORD_H
