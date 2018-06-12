/********************************************************************************
** Form generated from reading UI file 'MicTestWdg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MICTESTWDG_H
#define UI_MICTESTWDG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MicTestWdg
{
public:
    QLabel *backLabel;
    QLabel *label_2;
    QComboBox *cmbMicList;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *navLabel;

    void setupUi(QWidget *MicTestWdg)
    {
        if (MicTestWdg->objectName().isEmpty())
            MicTestWdg->setObjectName(QString::fromUtf8("MicTestWdg"));
        MicTestWdg->resize(442, 300);
        backLabel = new QLabel(MicTestWdg);
        backLabel->setObjectName(QString::fromUtf8("backLabel"));
        backLabel->setGeometry(QRect(0, 0, 442, 300));
        label_2 = new QLabel(MicTestWdg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 401, 20));
        cmbMicList = new QComboBox(MicTestWdg);
        cmbMicList->setObjectName(QString::fromUtf8("cmbMicList"));
        cmbMicList->setGeometry(QRect(20, 80, 320, 25));
        label_3 = new QLabel(MicTestWdg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 401, 21));
        label_5 = new QLabel(MicTestWdg);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 160, 371, 21));
        navLabel = new QLabel(MicTestWdg);
        navLabel->setObjectName(QString::fromUtf8("navLabel"));
        navLabel->setGeometry(QRect(0, 1, 442, 50));

        retranslateUi(MicTestWdg);

        QMetaObject::connectSlotsByName(MicTestWdg);
    } // setupUi

    void retranslateUi(QWidget *MicTestWdg)
    {
        MicTestWdg->setWindowTitle(QApplication::translate("MicTestWdg", "MicTestWdg", 0, QApplication::UnicodeUTF8));
        backLabel->setText(QString());
        label_2->setText(QApplication::translate("MicTestWdg", "\344\275\240\346\255\243\345\234\250\344\275\277\347\224\250\347\232\204\345\243\260\351\237\263\350\276\223\345\205\245\350\256\276\345\244\207\346\230\257\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MicTestWdg", "\350\257\267\345\257\271\344\275\240\347\235\200\351\272\246\345\205\213\351\243\216\350\256\262\350\257\235\357\274\214\344\273\245\344\276\277\345\274\200\345\247\213\346\243\200\346\265\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MicTestWdg", "\347\263\273\347\273\237\346\210\220\345\212\237\346\243\200\346\265\213\345\210\260\345\243\260\351\237\263\350\276\223\345\205\245\357\274\214\344\275\240\345\217\257\344\273\245\346\255\243\345\270\270\350\257\255\351\237\263\343\200\202", 0, QApplication::UnicodeUTF8));
        navLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MicTestWdg: public Ui_MicTestWdg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MICTESTWDG_H
