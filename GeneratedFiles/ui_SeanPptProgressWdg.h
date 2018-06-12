/********************************************************************************
** Form generated from reading UI file 'SeanPptProgressWdg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEANPPTPROGRESSWDG_H
#define UI_SEANPPTPROGRESSWDG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeanPptProgressWdg
{
public:
    QLabel *loadLabel;
    QPushButton *closeBtn;
    QLabel *imageLabel;
    QLabel *progressLabel;
    QLabel *pptBackLabel;

    void setupUi(QWidget *SeanPptProgressWdg)
    {
        if (SeanPptProgressWdg->objectName().isEmpty())
            SeanPptProgressWdg->setObjectName(QString::fromUtf8("SeanPptProgressWdg"));
        SeanPptProgressWdg->resize(440, 370);
        SeanPptProgressWdg->setLayoutDirection(Qt::LeftToRight);
        SeanPptProgressWdg->setStyleSheet(QString::fromUtf8("border-width: 10px 10px 10px 10px;\n"
" border-image: url(:/setting/setting/whiteImage.png) 10 10 10 10;\n"
""));
        loadLabel = new QLabel(SeanPptProgressWdg);
        loadLabel->setObjectName(QString::fromUtf8("loadLabel"));
        loadLabel->setGeometry(QRect(120, 110, 200, 150));
        loadLabel->setStyleSheet(QString::fromUtf8(""));
        closeBtn = new QPushButton(SeanPptProgressWdg);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(296, 115, 16, 16));
        imageLabel = new QLabel(SeanPptProgressWdg);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(174, 130, 89, 92));
        imageLabel->setStyleSheet(QString::fromUtf8(""));
        progressLabel = new QLabel(SeanPptProgressWdg);
        progressLabel->setObjectName(QString::fromUtf8("progressLabel"));
        progressLabel->setGeometry(QRect(150, 230, 141, 20));
        progressLabel->setStyleSheet(QString::fromUtf8(""));
        progressLabel->setAlignment(Qt::AlignCenter);
        pptBackLabel = new QLabel(SeanPptProgressWdg);
        pptBackLabel->setObjectName(QString::fromUtf8("pptBackLabel"));
        pptBackLabel->setGeometry(QRect(0, 0, 440, 370));
        pptBackLabel->raise();
        loadLabel->raise();
        closeBtn->raise();
        imageLabel->raise();
        progressLabel->raise();

        retranslateUi(SeanPptProgressWdg);

        QMetaObject::connectSlotsByName(SeanPptProgressWdg);
    } // setupUi

    void retranslateUi(QWidget *SeanPptProgressWdg)
    {
        SeanPptProgressWdg->setWindowTitle(QApplication::translate("SeanPptProgressWdg", "SeanPptProgressWdg", 0, QApplication::UnicodeUTF8));
        loadLabel->setText(QString());
        closeBtn->setText(QString());
        imageLabel->setText(QString());
        progressLabel->setText(QApplication::translate("SeanPptProgressWdg", "\346\255\243\345\234\250\344\270\212\344\274\240\357\274\2103%\357\274\211", 0, QApplication::UnicodeUTF8));
        pptBackLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SeanPptProgressWdg: public Ui_SeanPptProgressWdg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEANPPTPROGRESSWDG_H
