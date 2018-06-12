/********************************************************************************
** Form generated from reading UI file 'AboutWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWIDGET_H
#define UI_ABOUTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWidget
{
public:
    QLabel *backLabel;
    QLabel *label_2;
    QPushButton *closeBtn;
    QLabel *explainLabel;
    QLabel *lblVersion;

    void setupUi(QWidget *AboutWidget)
    {
        if (AboutWidget->objectName().isEmpty())
            AboutWidget->setObjectName(QString::fromUtf8("AboutWidget"));
        AboutWidget->resize(400, 284);
        backLabel = new QLabel(AboutWidget);
        backLabel->setObjectName(QString::fromUtf8("backLabel"));
        backLabel->setGeometry(QRect(0, 0, 400, 300));
        label_2 = new QLabel(AboutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 30, 242, 46));
        label_2->setPixmap(QPixmap(QString::fromUtf8("Resources/window/logo.png")));
        closeBtn = new QPushButton(AboutWidget);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(370, 10, 17, 16));
        explainLabel = new QLabel(AboutWidget);
        explainLabel->setObjectName(QString::fromUtf8("explainLabel"));
        explainLabel->setGeometry(QRect(40, 70, 321, 111));
        explainLabel->setTextFormat(Qt::AutoText);
        explainLabel->setScaledContents(false);
        explainLabel->setWordWrap(true);
        lblVersion = new QLabel(AboutWidget);
        lblVersion->setObjectName(QString::fromUtf8("lblVersion"));
        lblVersion->setGeometry(QRect(40, 180, 311, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        lblVersion->setFont(font);
        lblVersion->setScaledContents(true);
        lblVersion->setAlignment(Qt::AlignCenter);

        retranslateUi(AboutWidget);

        QMetaObject::connectSlotsByName(AboutWidget);
    } // setupUi

    void retranslateUi(QWidget *AboutWidget)
    {
        AboutWidget->setWindowTitle(QApplication::translate("AboutWidget", "AboutWidget", 0, QApplication::UnicodeUTF8));
        backLabel->setText(QString());
        label_2->setText(QString());
        closeBtn->setText(QString());
        explainLabel->setText(QApplication::translate("AboutWidget", "<html><head/><body><p>\346\231\272\346\205\247\344\272\221\350\247\206\351\242\221\344\274\232\350\256\256\350\275\257\344\273\266\346\230\257\344\270\200\346\254\276\347\224\250\344\272\216\350\277\234\347\250\213\350\247\206\351\242\221\344\274\232\350\256\256\347\232\204\344\274\232\350\256\256\345\272\224\347\224\250\350\275\257\344\273\266\343\200\202\345\256\203\345\214\205\346\213\254\345\234\250\347\272\277\344\274\232\350\256\256\343\200\201PPT\346\222\255\346\224\276\343\200\201\345\234\250\347\272\277\346\226\207\345\255\227\350\201\212\345\244\251\347\255\211\345\212\237\350\203\275\343\200\202\350\277\231\346\254\276\345\272\224\347\224\250\345\270\256\345\212\251\344\274\201\344\270\232\350\275\273\346\235\276\345\256\236\347\216\260\344\270\215\345\220\214\351\203\250\351\227\250\343\200\201\344\270\215\345\220\214\345\234\260\347\202\271\344\271\213\351\227\264\345\234\250\347\272\277\346\262\237\351\200\232\344\272\244\346\265\201\345\212\237\350\203\275\343\200\202</p></body></html>", 0, QApplication::UnicodeUTF8));
        lblVersion->setText(QApplication::translate("AboutWidget", "<span style=\" color:#ffffff;\">\347\211\210\346\234\254\345\217\267\357\274\23220</span>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutWidget: public Ui_AboutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWIDGET_H
