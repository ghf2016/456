/********************************************************************************
** Form generated from reading UI file 'SpekerTestWdg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEKERTESTWDG_H
#define UI_SPEKERTESTWDG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpekerTestWdg
{
public:
    QLabel *backLabel;
    QLabel *label;
    QComboBox *cmbSpeakerList;
    QLabel *label_2;
    QPushButton *btnStartTest;
    QWidget *widget;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *navLabel;

    void setupUi(QWidget *SpekerTestWdg)
    {
        if (SpekerTestWdg->objectName().isEmpty())
            SpekerTestWdg->setObjectName(QString::fromUtf8("SpekerTestWdg"));
        SpekerTestWdg->resize(442, 300);
        backLabel = new QLabel(SpekerTestWdg);
        backLabel->setObjectName(QString::fromUtf8("backLabel"));
        backLabel->setGeometry(QRect(0, 0, 442, 300));
        label = new QLabel(SpekerTestWdg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 400, 20));
        cmbSpeakerList = new QComboBox(SpekerTestWdg);
        cmbSpeakerList->setObjectName(QString::fromUtf8("cmbSpeakerList"));
        cmbSpeakerList->setGeometry(QRect(20, 80, 320, 25));
        label_2 = new QLabel(SpekerTestWdg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 110, 331, 20));
        btnStartTest = new QPushButton(SpekerTestWdg);
        btnStartTest->setObjectName(QString::fromUtf8("btnStartTest"));
        btnStartTest->setGeometry(QRect(20, 130, 71, 23));
        widget = new QWidget(SpekerTestWdg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 170, 341, 101));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 311, 21));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 20, 281, 16));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 40, 291, 16));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 60, 261, 16));
        navLabel = new QLabel(SpekerTestWdg);
        navLabel->setObjectName(QString::fromUtf8("navLabel"));
        navLabel->setGeometry(QRect(0, 1, 442, 50));

        retranslateUi(SpekerTestWdg);

        QMetaObject::connectSlotsByName(SpekerTestWdg);
    } // setupUi

    void retranslateUi(QWidget *SpekerTestWdg)
    {
        SpekerTestWdg->setWindowTitle(QApplication::translate("SpekerTestWdg", "SpekerTestWdg", 0, QApplication::UnicodeUTF8));
        backLabel->setText(QString());
        label->setText(QApplication::translate("SpekerTestWdg", "\344\275\240\346\255\243\345\234\250\344\275\277\347\224\250\347\232\204\345\243\260\351\237\263\350\276\223\345\207\272\350\256\276\345\244\207\346\230\257\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SpekerTestWdg", "\350\257\267\347\202\271\345\207\273\"\346\222\255\346\224\276\346\265\213\350\257\225\351\237\263\"\346\214\211\351\222\256\350\257\225\345\220\254\357\274\232", 0, QApplication::UnicodeUTF8));
        btnStartTest->setText(QApplication::translate("SpekerTestWdg", "\346\222\255\346\224\276\346\265\213\350\257\225\351\237\263", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SpekerTestWdg", "\345\246\202\346\236\234\344\275\240\346\234\252\345\220\254\345\210\260\345\243\260\351\237\263\357\274\214\345\217\257\350\203\275\345\255\230\345\234\250\344\273\245\344\270\213\345\216\237\345\233\240\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SpekerTestWdg", "1\343\200\201\346\211\254\345\243\260\345\231\250\346\210\226\350\200\263\346\234\272\346\234\252\346\217\222\345\245\275\343\200\202", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SpekerTestWdg", "2\343\200\201\351\200\211\346\213\251\344\272\206\351\224\231\350\257\257\347\232\204\346\211\254\345\243\260\345\231\250\346\217\222\345\255\224\357\274\214\346\211\254\345\243\260\345\231\250\346\217\222\345\255\224\351\200\232\345\270\270\344\270\272\347\273\277\350\211\262\343\200\202", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SpekerTestWdg", "3\343\200\201\346\211\254\345\243\260\345\231\250\346\234\252\346\211\223\345\274\200\357\274\214\346\210\226\351\237\263\351\207\217\350\260\203\350\212\202\350\277\207\345\260\217", 0, QApplication::UnicodeUTF8));
        navLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SpekerTestWdg: public Ui_SpekerTestWdg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEKERTESTWDG_H
