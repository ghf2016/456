/********************************************************************************
** Form generated from reading UI file 'VoiceTestWdg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOICETESTWDG_H
#define UI_VOICETESTWDG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VoiceTestWdg
{
public:
    QLabel *backLabel;
    QLabel *titleLabel;
    QLabel *downLabel;
    QWidget *contentWidget;
    QPushButton *closeBtn;
    QPushButton *nextBtn;
    QPushButton *cancelBtn;

    void setupUi(QWidget *VoiceTestWdg)
    {
        if (VoiceTestWdg->objectName().isEmpty())
            VoiceTestWdg->setObjectName(QString::fromUtf8("VoiceTestWdg"));
        VoiceTestWdg->resize(450, 380);
        backLabel = new QLabel(VoiceTestWdg);
        backLabel->setObjectName(QString::fromUtf8("backLabel"));
        backLabel->setGeometry(QRect(0, 0, 450, 380));
        titleLabel = new QLabel(VoiceTestWdg);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(10, 10, 171, 21));
        downLabel = new QLabel(VoiceTestWdg);
        downLabel->setObjectName(QString::fromUtf8("downLabel"));
        downLabel->setGeometry(QRect(0, 329, 450, 50));
        contentWidget = new QWidget(VoiceTestWdg);
        contentWidget->setObjectName(QString::fromUtf8("contentWidget"));
        contentWidget->setGeometry(QRect(4, 39, 442, 291));
        closeBtn = new QPushButton(VoiceTestWdg);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(414, 10, 17, 16));
        nextBtn = new QPushButton(VoiceTestWdg);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));
        nextBtn->setGeometry(QRect(250, 340, 75, 23));
        cancelBtn = new QPushButton(VoiceTestWdg);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setGeometry(QRect(350, 340, 75, 23));

        retranslateUi(VoiceTestWdg);

        QMetaObject::connectSlotsByName(VoiceTestWdg);
    } // setupUi

    void retranslateUi(QWidget *VoiceTestWdg)
    {
        VoiceTestWdg->setWindowTitle(QApplication::translate("VoiceTestWdg", "VoiceTestWdg", 0, QApplication::UnicodeUTF8));
        backLabel->setText(QString());
        titleLabel->setText(QApplication::translate("VoiceTestWdg", "\346\231\272\346\205\247\344\272\221\350\247\206\351\242\221\350\257\255\351\237\263\346\265\213\350\257\225\345\220\221\345\257\274", 0, QApplication::UnicodeUTF8));
        downLabel->setText(QString());
        closeBtn->setText(QString());
        nextBtn->setText(QApplication::translate("VoiceTestWdg", "\344\270\213\344\270\200\346\255\245", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("VoiceTestWdg", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VoiceTestWdg: public Ui_VoiceTestWdg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOICETESTWDG_H
