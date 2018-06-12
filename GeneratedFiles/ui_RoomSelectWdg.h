/********************************************************************************
** Form generated from reading UI file 'RoomSelectWdg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMSELECTWDG_H
#define UI_ROOMSELECTWDG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomSelectWdg
{
public:

    void setupUi(QWidget *RoomSelectWdg)
    {
        if (RoomSelectWdg->objectName().isEmpty())
            RoomSelectWdg->setObjectName(QString::fromUtf8("RoomSelectWdg"));
        RoomSelectWdg->resize(400, 300);

        retranslateUi(RoomSelectWdg);

        QMetaObject::connectSlotsByName(RoomSelectWdg);
    } // setupUi

    void retranslateUi(QWidget *RoomSelectWdg)
    {
        RoomSelectWdg->setWindowTitle(QApplication::translate("RoomSelectWdg", "RoomSelectWdg", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RoomSelectWdg: public Ui_RoomSelectWdg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMSELECTWDG_H
