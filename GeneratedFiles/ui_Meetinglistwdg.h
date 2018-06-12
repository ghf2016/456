/********************************************************************************
** Form generated from reading UI file 'Meetinglistwdg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEETINGLISTWDG_H
#define UI_MEETINGLISTWDG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeetingListWdg
{
public:
    QLabel *backLabel;
    QPushButton *closeBtn;
    QLabel *logoLabel;
    QLabel *tBackImage;
    QTableView *myTableView;

    void setupUi(QWidget *MeetingListWdg)
    {
        if (MeetingListWdg->objectName().isEmpty())
            MeetingListWdg->setObjectName(QString::fromUtf8("MeetingListWdg"));
        MeetingListWdg->resize(450, 380);
        backLabel = new QLabel(MeetingListWdg);
        backLabel->setObjectName(QString::fromUtf8("backLabel"));
        backLabel->setGeometry(QRect(0, 0, 450, 380));
        closeBtn = new QPushButton(MeetingListWdg);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(415, 15, 17, 16));
        logoLabel = new QLabel(MeetingListWdg);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(0, 20, 411, 46));
        logoLabel->setPixmap(QPixmap(QString::fromUtf8(":/login/login/logo4.png")));
        tBackImage = new QLabel(MeetingListWdg);
        tBackImage->setObjectName(QString::fromUtf8("tBackImage"));
        tBackImage->setGeometry(QRect(4, 85, 442, 250));
        myTableView = new QTableView(MeetingListWdg);
        myTableView->setObjectName(QString::fromUtf8("myTableView"));
        myTableView->setGeometry(QRect(4, 85, 442, 250));
        myTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        retranslateUi(MeetingListWdg);

        QMetaObject::connectSlotsByName(MeetingListWdg);
    } // setupUi

    void retranslateUi(QWidget *MeetingListWdg)
    {
        MeetingListWdg->setWindowTitle(QApplication::translate("MeetingListWdg", "MeetingListWdg", 0, QApplication::UnicodeUTF8));
        backLabel->setText(QString());
        closeBtn->setText(QString());
        logoLabel->setText(QString());
        tBackImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MeetingListWdg: public Ui_MeetingListWdg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEETINGLISTWDG_H
