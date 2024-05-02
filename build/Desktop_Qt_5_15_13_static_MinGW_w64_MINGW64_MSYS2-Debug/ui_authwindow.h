/********************************************************************************
** Form generated from reading UI file 'authwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHWINDOW_H
#define UI_AUTHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_authwindow
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *authwindow)
    {
        if (authwindow->objectName().isEmpty())
            authwindow->setObjectName(QString::fromUtf8("authwindow"));
        authwindow->resize(494, 347);
        pushButton = new QPushButton(authwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 250, 171, 51));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);

        retranslateUi(authwindow);

        QMetaObject::connectSlotsByName(authwindow);
    } // setupUi

    void retranslateUi(QDialog *authwindow)
    {
        authwindow->setWindowTitle(QCoreApplication::translate("authwindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("authwindow", "\320\220\321\203\320\275\321\202\320\265\321\202\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authwindow: public Ui_authwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHWINDOW_H
