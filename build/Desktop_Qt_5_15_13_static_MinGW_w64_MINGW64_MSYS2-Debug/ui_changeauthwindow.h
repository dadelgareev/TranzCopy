/********************************************************************************
** Form generated from reading UI file 'changeauthwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEAUTHWINDOW_H
#define UI_CHANGEAUTHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_changeauthwindow
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_2;

    void setupUi(QDialog *changeauthwindow)
    {
        if (changeauthwindow->objectName().isEmpty())
            changeauthwindow->setObjectName(QString::fromUtf8("changeauthwindow"));
        changeauthwindow->resize(511, 340);
        label = new QLabel(changeauthwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 171, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        pushButton = new QPushButton(changeauthwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 230, 161, 91));
        pushButton->setFont(font);
        label_3 = new QLabel(changeauthwindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 180, 251, 41));
        label_3->setFont(font);
        lineEdit_2 = new QLineEdit(changeauthwindow);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 140, 191, 31));
        lineEdit = new QLineEdit(changeauthwindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 50, 191, 31));
        lineEdit_3 = new QLineEdit(changeauthwindow);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(0, 230, 191, 31));
        label_2 = new QLabel(changeauthwindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 90, 251, 41));
        label_2->setFont(font);

        retranslateUi(changeauthwindow);

        QMetaObject::connectSlotsByName(changeauthwindow);
    } // setupUi

    void retranslateUi(QDialog *changeauthwindow)
    {
        changeauthwindow->setWindowTitle(QCoreApplication::translate("changeauthwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("changeauthwindow", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("changeauthwindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214\n"
" \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("changeauthwindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\320\276\320\273\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("changeauthwindow", "\320\235\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changeauthwindow: public Ui_changeauthwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEAUTHWINDOW_H
