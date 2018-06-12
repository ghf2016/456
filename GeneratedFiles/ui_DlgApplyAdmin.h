/********************************************************************************
** Form generated from reading UI file 'DlgApplyAdmin.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGAPPLYADMIN_H
#define UI_DLGAPPLYADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgApplyAdmin
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hBoxTop;
    QHBoxLayout *hBoxTitle;
    QHBoxLayout *hBoxSysBtn;
    QVBoxLayout *vBoxClient;
    QLabel *lblPwd;
    QLineEdit *editPassword;
    QLabel *lblTip;
    QHBoxLayout *hBoxBottom;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QWidget *DlgApplyAdmin)
    {
        if (DlgApplyAdmin->objectName().isEmpty())
            DlgApplyAdmin->setObjectName(QString::fromUtf8("DlgApplyAdmin"));
        DlgApplyAdmin->resize(403, 165);
        verticalLayout = new QVBoxLayout(DlgApplyAdmin);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hBoxTop = new QHBoxLayout();
        hBoxTop->setSpacing(0);
        hBoxTop->setObjectName(QString::fromUtf8("hBoxTop"));
        hBoxTop->setSizeConstraint(QLayout::SetDefaultConstraint);
        hBoxTitle = new QHBoxLayout();
        hBoxTitle->setSpacing(0);
        hBoxTitle->setObjectName(QString::fromUtf8("hBoxTitle"));
        hBoxTitle->setContentsMargins(10, 0, -1, -1);

        hBoxTop->addLayout(hBoxTitle);

        hBoxSysBtn = new QHBoxLayout();
        hBoxSysBtn->setSpacing(0);
        hBoxSysBtn->setObjectName(QString::fromUtf8("hBoxSysBtn"));
        hBoxSysBtn->setContentsMargins(-1, 0, 2, -1);

        hBoxTop->addLayout(hBoxSysBtn);


        verticalLayout->addLayout(hBoxTop);

        vBoxClient = new QVBoxLayout();
        vBoxClient->setSpacing(4);
        vBoxClient->setObjectName(QString::fromUtf8("vBoxClient"));
        vBoxClient->setSizeConstraint(QLayout::SetDefaultConstraint);
        vBoxClient->setContentsMargins(10, 5, 10, -1);
        lblPwd = new QLabel(DlgApplyAdmin);
        lblPwd->setObjectName(QString::fromUtf8("lblPwd"));

        vBoxClient->addWidget(lblPwd);

        editPassword = new QLineEdit(DlgApplyAdmin);
        editPassword->setObjectName(QString::fromUtf8("editPassword"));
        editPassword->setMinimumSize(QSize(0, 30));
        editPassword->setEchoMode(QLineEdit::Password);

        vBoxClient->addWidget(editPassword);

        lblTip = new QLabel(DlgApplyAdmin);
        lblTip->setObjectName(QString::fromUtf8("lblTip"));

        vBoxClient->addWidget(lblTip);


        verticalLayout->addLayout(vBoxClient);

        hBoxBottom = new QHBoxLayout();
        hBoxBottom->setSpacing(12);
        hBoxBottom->setObjectName(QString::fromUtf8("hBoxBottom"));
        hBoxBottom->setSizeConstraint(QLayout::SetDefaultConstraint);
        hBoxBottom->setContentsMargins(10, 2, 10, 4);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hBoxBottom->addItem(horizontalSpacer);

        btnOK = new QPushButton(DlgApplyAdmin);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnOK->sizePolicy().hasHeightForWidth());
        btnOK->setSizePolicy(sizePolicy);

        hBoxBottom->addWidget(btnOK);

        btnCancel = new QPushButton(DlgApplyAdmin);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);

        hBoxBottom->addWidget(btnCancel);


        verticalLayout->addLayout(hBoxBottom);

        verticalLayout->setStretch(1, 1);

        retranslateUi(DlgApplyAdmin);

        QMetaObject::connectSlotsByName(DlgApplyAdmin);
    } // setupUi

    void retranslateUi(QWidget *DlgApplyAdmin)
    {
        DlgApplyAdmin->setWindowTitle(QApplication::translate("DlgApplyAdmin", "\347\224\263\350\257\267\344\270\273\346\214\201\344\272\272", 0, QApplication::UnicodeUTF8));
        lblPwd->setText(QApplication::translate("DlgApplyAdmin", "\350\257\267\350\276\223\345\205\245\344\270\273\346\214\201\344\272\272\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        lblTip->setText(QString());
        btnOK->setText(QApplication::translate("DlgApplyAdmin", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("DlgApplyAdmin", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DlgApplyAdmin: public Ui_DlgApplyAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGAPPLYADMIN_H
