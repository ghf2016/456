/********************************************************************************
** Form generated from reading UI file 'SeanAnimation.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEANANIMATION_H
#define UI_SEANANIMATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeanAnimation
{
public:
    QLabel *animationLabel;
    QLabel *tipLabel;
    QLabel *warningLabel;

    void setupUi(QWidget *SeanAnimation)
    {
        if (SeanAnimation->objectName().isEmpty())
            SeanAnimation->setObjectName(QString::fromUtf8("SeanAnimation"));
        SeanAnimation->resize(300, 30);
        animationLabel = new QLabel(SeanAnimation);
        animationLabel->setObjectName(QString::fromUtf8("animationLabel"));
        animationLabel->setGeometry(QRect(0, 0, 300, 30));
        tipLabel = new QLabel(SeanAnimation);
        tipLabel->setObjectName(QString::fromUtf8("tipLabel"));
        tipLabel->setGeometry(QRect(30, 5, 250, 17));
        tipLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tipLabel->setWordWrap(true);
        warningLabel = new QLabel(SeanAnimation);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        warningLabel->setGeometry(QRect(5, 8, 16, 16));

        retranslateUi(SeanAnimation);

        QMetaObject::connectSlotsByName(SeanAnimation);
    } // setupUi

    void retranslateUi(QWidget *SeanAnimation)
    {
        SeanAnimation->setWindowTitle(QApplication::translate("SeanAnimation", "SeanAnimation", 0, QApplication::UnicodeUTF8));
        animationLabel->setText(QString());
        tipLabel->setText(QString());
        warningLabel->setText(QApplication::translate("SeanAnimation", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SeanAnimation: public Ui_SeanAnimation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEANANIMATION_H
