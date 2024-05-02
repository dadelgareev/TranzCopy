/********************************************************************************
** Form generated from reading UI file 'payservice.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYSERVICE_H
#define UI_PAYSERVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_payservice
{
public:
    QComboBox *accountComboBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *serviceComboBox;
    QPushButton *pushButton;
    QLineEdit *amountEdit;

    void setupUi(QDialog *payservice)
    {
        if (payservice->objectName().isEmpty())
            payservice->setObjectName(QString::fromUtf8("payservice"));
        payservice->resize(400, 300);
        accountComboBox = new QComboBox(payservice);
        accountComboBox->setObjectName(QString::fromUtf8("accountComboBox"));
        accountComboBox->setGeometry(QRect(10, 40, 191, 31));
        label = new QLabel(payservice);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 49, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(payservice);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 91, 21));
        label_2->setFont(font);
        serviceComboBox = new QComboBox(payservice);
        serviceComboBox->setObjectName(QString::fromUtf8("serviceComboBox"));
        serviceComboBox->setGeometry(QRect(10, 110, 191, 31));
        pushButton = new QPushButton(payservice);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 210, 151, 71));
        pushButton->setFont(font);
        amountEdit = new QLineEdit(payservice);
        amountEdit->setObjectName(QString::fromUtf8("amountEdit"));
        amountEdit->setGeometry(QRect(10, 160, 241, 24));

        retranslateUi(payservice);

        QMetaObject::connectSlotsByName(payservice);
    } // setupUi

    void retranslateUi(QDialog *payservice)
    {
        payservice->setWindowTitle(QCoreApplication::translate("payservice", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("payservice", "\320\241\321\207\320\265\321\202:", nullptr));
        label_2->setText(QCoreApplication::translate("payservice", "\320\242\320\270\320\277 \321\203\321\201\320\273\321\203\320\263\320\270:", nullptr));
        pushButton->setText(QCoreApplication::translate("payservice", "\320\236\320\277\320\273\320\260\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class payservice: public Ui_payservice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYSERVICE_H
