/********************************************************************************
** Form generated from reading UI file 'autoupdate.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOUPDATE_H
#define UI_AUTOUPDATE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AutoUpdateClass
{
public:
    QPushButton *btnCancel;
    QProgressBar *progressBarDownload;

    void setupUi(QDialog *AutoUpdateClass)
    {
        if (AutoUpdateClass->objectName().isEmpty())
            AutoUpdateClass->setObjectName(QString::fromUtf8("AutoUpdateClass"));
        AutoUpdateClass->resize(563, 139);
        btnCancel = new QPushButton(AutoUpdateClass);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(220, 80, 101, 41));
        progressBarDownload = new QProgressBar(AutoUpdateClass);
        progressBarDownload->setObjectName(QString::fromUtf8("progressBarDownload"));
        progressBarDownload->setGeometry(QRect(30, 40, 531, 23));
        progressBarDownload->setValue(0);

        retranslateUi(AutoUpdateClass);

        QMetaObject::connectSlotsByName(AutoUpdateClass);
    } // setupUi

    void retranslateUi(QDialog *AutoUpdateClass)
    {
        AutoUpdateClass->setWindowTitle(QApplication::translate("AutoUpdateClass", "\350\207\252\345\212\250\346\233\264\346\226\260", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("AutoUpdateClass", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AutoUpdateClass: public Ui_AutoUpdateClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOUPDATE_H
