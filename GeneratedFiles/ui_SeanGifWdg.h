/********************************************************************************
** Form generated from reading UI file 'SeanGifWdg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEANGIFWDG_H
#define UI_SEANGIFWDG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeanGifWdg
{
public:
    QLabel *backLabel;

    void setupUi(QWidget *SeanGifWdg)
    {
        if (SeanGifWdg->objectName().isEmpty())
            SeanGifWdg->setObjectName(QString::fromUtf8("SeanGifWdg"));
        SeanGifWdg->resize(400, 300);
        backLabel = new QLabel(SeanGifWdg);
        backLabel->setObjectName(QString::fromUtf8("backLabel"));
        backLabel->setGeometry(QRect(0, 0, 401, 301));
        backLabel->setAutoFillBackground(true);

        retranslateUi(SeanGifWdg);

        QMetaObject::connectSlotsByName(SeanGifWdg);
    } // setupUi

    void retranslateUi(QWidget *SeanGifWdg)
    {
        SeanGifWdg->setWindowTitle(QApplication::translate("SeanGifWdg", "SeanGifWdg", 0, QApplication::UnicodeUTF8));
        backLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SeanGifWdg: public Ui_SeanGifWdg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEANGIFWDG_H
