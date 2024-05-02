/********************************************************************************
** Form generated from reading UI file 'atmwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATMWINDOW_H
#define UI_ATMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_atmwindow
{
public:
    QPushButton *creditButton;
    QPushButton *depositButton;
    QLineEdit *billLineEdit;
    QLineEdit *amountLineEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *atmwindow)
    {
        if (atmwindow->objectName().isEmpty())
            atmwindow->setObjectName(QString::fromUtf8("atmwindow"));
        atmwindow->resize(373, 266);
        creditButton = new QPushButton(atmwindow);
        creditButton->setObjectName(QString::fromUtf8("creditButton"));
        creditButton->setGeometry(QRect(10, 50, 141, 101));
        QFont font;
        font.setPointSize(12);
        creditButton->setFont(font);
        depositButton = new QPushButton(atmwindow);
        depositButton->setObjectName(QString::fromUtf8("depositButton"));
        depositButton->setGeometry(QRect(220, 50, 141, 101));
        depositButton->setFont(font);
        billLineEdit = new QLineEdit(atmwindow);
        billLineEdit->setObjectName(QString::fromUtf8("billLineEdit"));
        billLineEdit->setGeometry(QRect(72, 170, 281, 24));
        amountLineEdit = new QLineEdit(atmwindow);
        amountLineEdit->setObjectName(QString::fromUtf8("amountLineEdit"));
        amountLineEdit->setGeometry(QRect(70, 210, 281, 24));
        label = new QLabel(atmwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 170, 49, 16));
        label->setFont(font);
        label_2 = new QLabel(atmwindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 210, 49, 16));
        label_2->setFont(font);

        retranslateUi(atmwindow);

        QMetaObject::connectSlotsByName(atmwindow);
    } // setupUi

    void retranslateUi(QDialog *atmwindow)
    {
        atmwindow->setWindowTitle(QCoreApplication::translate("atmwindow", "Dialog", nullptr));
        creditButton->setText(QCoreApplication::translate("atmwindow", "\320\237\320\276\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \320\261\320\260\320\273\320\260\320\275\321\201", nullptr));
        depositButton->setText(QCoreApplication::translate("atmwindow", "\320\241\320\275\321\217\321\202\321\214 \321\201 \320\261\320\260\320\273\320\260\320\275\321\201\320\260", nullptr));
        label->setText(QCoreApplication::translate("atmwindow", "\320\241\321\207\320\265\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("atmwindow", "\320\241\321\203\320\274\320\274\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class atmwindow: public Ui_atmwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATMWINDOW_H
