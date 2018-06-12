/********************************************************************************
** Form generated from reading UI file 'MeetingRoomWordWdg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEETINGROOMWORDWDG_H
#define UI_MEETINGROOMWORDWDG_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeetingRoomWordWdg
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *leftLayout;
    QHBoxLayout *rightLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *roomWordLineEdit;
    QLabel *tipLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okBtn;
    QPushButton *cancelBtn;

    void setupUi(QWidget *MeetingRoomWordWdg)
    {
        if (MeetingRoomWordWdg->objectName().isEmpty())
            MeetingRoomWordWdg->setObjectName(QString::fromUtf8("MeetingRoomWordWdg"));
        MeetingRoomWordWdg->resize(405, 167);
        verticalLayout_2 = new QVBoxLayout(MeetingRoomWordWdg);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        leftLayout = new QHBoxLayout();
        leftLayout->setSpacing(6);
        leftLayout->setObjectName(QString::fromUtf8("leftLayout"));
        leftLayout->setContentsMargins(20, -1, -1, -1);

        horizontalLayout->addLayout(leftLayout);

        rightLayout = new QHBoxLayout();
        rightLayout->setSpacing(6);
        rightLayout->setObjectName(QString::fromUtf8("rightLayout"));
        rightLayout->setContentsMargins(-1, -1, 5, -1);

        horizontalLayout->addLayout(rightLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 10, 0);
        label = new QLabel(MeetingRoomWordWdg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 20));

        verticalLayout->addWidget(label);

        roomWordLineEdit = new QLineEdit(MeetingRoomWordWdg);
        roomWordLineEdit->setObjectName(QString::fromUtf8("roomWordLineEdit"));
        roomWordLineEdit->setMinimumSize(QSize(0, 30));
        roomWordLineEdit->setMaximumSize(QSize(16777215, 30));
        roomWordLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(roomWordLineEdit);

        tipLabel = new QLabel(MeetingRoomWordWdg);
        tipLabel->setObjectName(QString::fromUtf8("tipLabel"));
        tipLabel->setMinimumSize(QSize(0, 20));

        verticalLayout->addWidget(tipLabel);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, -1, 20, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okBtn = new QPushButton(MeetingRoomWordWdg);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));

        horizontalLayout_2->addWidget(okBtn);

        cancelBtn = new QPushButton(MeetingRoomWordWdg);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        horizontalLayout_2->addWidget(cancelBtn);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(MeetingRoomWordWdg);

        QMetaObject::connectSlotsByName(MeetingRoomWordWdg);
    } // setupUi

    void retranslateUi(QWidget *MeetingRoomWordWdg)
    {
        MeetingRoomWordWdg->setWindowTitle(QApplication::translate("MeetingRoomWordWdg", "MeetingRoomWordWdg", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MeetingRoomWordWdg", "\350\257\267\350\276\223\345\205\245\346\210\277\351\227\264\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        tipLabel->setText(QString());
        okBtn->setText(QApplication::translate("MeetingRoomWordWdg", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("MeetingRoomWordWdg", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MeetingRoomWordWdg: public Ui_MeetingRoomWordWdg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEETINGROOMWORDWDG_H
