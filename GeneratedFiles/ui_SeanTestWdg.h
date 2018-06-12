/********************************************************************************
** Form generated from reading UI file 'SeanTestWdg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEANTESTWDG_H
#define UI_SEANTESTWDG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeanTestWdg
{
public:
    QWidget *contentWdg;
    QPushButton *penBtn;
    QPushButton *lastBtn;
    QPushButton *nextBtn;
    QPushButton *powerBtn;
    QLabel *pageLabel;

    void setupUi(QWidget *SeanTestWdg)
    {
        if (SeanTestWdg->objectName().isEmpty())
            SeanTestWdg->setObjectName(QString::fromUtf8("SeanTestWdg"));
        SeanTestWdg->resize(241, 31);
        SeanTestWdg->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        contentWdg = new QWidget(SeanTestWdg);
        contentWdg->setObjectName(QString::fromUtf8("contentWdg"));
        contentWdg->setGeometry(QRect(0, 0, 241, 30));
        contentWdg->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        penBtn = new QPushButton(contentWdg);
        penBtn->setObjectName(QString::fromUtf8("penBtn"));
        penBtn->setGeometry(QRect(10, 2, 26, 26));
        penBtn->setStyleSheet(QString::fromUtf8(""));
        penBtn->setCheckable(true);
        penBtn->setChecked(true);
        lastBtn = new QPushButton(contentWdg);
        lastBtn->setObjectName(QString::fromUtf8("lastBtn"));
        lastBtn->setGeometry(QRect(50, 2, 26, 26));
        lastBtn->setStyleSheet(QString::fromUtf8(""));
        nextBtn = new QPushButton(contentWdg);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));
        nextBtn->setGeometry(QRect(164, 2, 26, 26));
        nextBtn->setStyleSheet(QString::fromUtf8(""));
        powerBtn = new QPushButton(contentWdg);
        powerBtn->setObjectName(QString::fromUtf8("powerBtn"));
        powerBtn->setGeometry(QRect(205, 2, 26, 26));
        powerBtn->setStyleSheet(QString::fromUtf8(""));
        pageLabel = new QLabel(contentWdg);
        pageLabel->setObjectName(QString::fromUtf8("pageLabel"));
        pageLabel->setGeometry(QRect(90, 5, 61, 20));
        pageLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(SeanTestWdg);

        QMetaObject::connectSlotsByName(SeanTestWdg);
    } // setupUi

    void retranslateUi(QWidget *SeanTestWdg)
    {
        SeanTestWdg->setWindowTitle(QApplication::translate("SeanTestWdg", "SeanTestWdg", 0, QApplication::UnicodeUTF8));
        penBtn->setText(QString());
        lastBtn->setText(QString());
        nextBtn->setText(QString());
        powerBtn->setText(QString());
        pageLabel->setText(QApplication::translate("SeanTestWdg", "1/50", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SeanTestWdg: public Ui_SeanTestWdg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEANTESTWDG_H
