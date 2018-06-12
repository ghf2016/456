/********************************************************************************
** Form generated from reading UI file 'videomonitormain.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOMONITORMAIN_H
#define UI_VIDEOMONITORMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoMonitorMain
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layoutToolBar;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QPushButton *btnPrev;
    QPushButton *btnNext;
    QLabel *lblPage;
    QLabel *lblVideoNumber;
    QComboBox *cmbVideoNumber;
    QCheckBox *chkAutoPage;
    QSpacerItem *horizontalSpacer_2;
    QWidget *wdgVideoContainer;

    void setupUi(QWidget *VideoMonitorMain)
    {
        if (VideoMonitorMain->objectName().isEmpty())
            VideoMonitorMain->setObjectName(QString::fromUtf8("VideoMonitorMain"));
        VideoMonitorMain->resize(780, 600);
        VideoMonitorMain->setMinimumSize(QSize(640, 480));
        verticalLayout = new QVBoxLayout(VideoMonitorMain);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layoutToolBar = new QHBoxLayout();
        layoutToolBar->setSpacing(2);
        layoutToolBar->setObjectName(QString::fromUtf8("layoutToolBar"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutToolBar->addItem(horizontalSpacer);

        btnStart = new QPushButton(VideoMonitorMain);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));

        layoutToolBar->addWidget(btnStart);

        btnStop = new QPushButton(VideoMonitorMain);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));

        layoutToolBar->addWidget(btnStop);

        btnPrev = new QPushButton(VideoMonitorMain);
        btnPrev->setObjectName(QString::fromUtf8("btnPrev"));

        layoutToolBar->addWidget(btnPrev);

        btnNext = new QPushButton(VideoMonitorMain);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));

        layoutToolBar->addWidget(btnNext);

        lblPage = new QLabel(VideoMonitorMain);
        lblPage->setObjectName(QString::fromUtf8("lblPage"));
        lblPage->setMinimumSize(QSize(40, 0));

        layoutToolBar->addWidget(lblPage);

        lblVideoNumber = new QLabel(VideoMonitorMain);
        lblVideoNumber->setObjectName(QString::fromUtf8("lblVideoNumber"));

        layoutToolBar->addWidget(lblVideoNumber);

        cmbVideoNumber = new QComboBox(VideoMonitorMain);
        cmbVideoNumber->setObjectName(QString::fromUtf8("cmbVideoNumber"));
        cmbVideoNumber->setMinimumSize(QSize(70, 0));

        layoutToolBar->addWidget(cmbVideoNumber);

        chkAutoPage = new QCheckBox(VideoMonitorMain);
        chkAutoPage->setObjectName(QString::fromUtf8("chkAutoPage"));

        layoutToolBar->addWidget(chkAutoPage);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutToolBar->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(layoutToolBar);

        wdgVideoContainer = new QWidget(VideoMonitorMain);
        wdgVideoContainer->setObjectName(QString::fromUtf8("wdgVideoContainer"));

        verticalLayout->addWidget(wdgVideoContainer);

        verticalLayout->setStretch(1, 1);

        retranslateUi(VideoMonitorMain);

        QMetaObject::connectSlotsByName(VideoMonitorMain);
    } // setupUi

    void retranslateUi(QWidget *VideoMonitorMain)
    {
        VideoMonitorMain->setWindowTitle(QApplication::translate("VideoMonitorMain", "\344\274\232\345\234\272\345\267\241\350\247\206\344\270\273\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        btnStart->setText(QApplication::translate("VideoMonitorMain", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        btnStop->setText(QApplication::translate("VideoMonitorMain", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
        btnPrev->setText(QApplication::translate("VideoMonitorMain", "\344\270\212\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        btnNext->setText(QApplication::translate("VideoMonitorMain", "\344\270\213\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        lblPage->setText(QApplication::translate("VideoMonitorMain", "1/1", 0, QApplication::UnicodeUTF8));
        lblVideoNumber->setText(QApplication::translate("VideoMonitorMain", "<html><head/><body><p>\346\257\217\351\241\265\346\230\276\347\244\272\350\247\206\351\242\221\346\225\260:</p></body></html>", 0, QApplication::UnicodeUTF8));
        chkAutoPage->setText(QApplication::translate("VideoMonitorMain", "\350\207\252\345\212\250\347\277\273\351\241\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VideoMonitorMain: public Ui_VideoMonitorMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOMONITORMAIN_H
