/********************************************************************************
** Form generated from reading UI file 'generatoraccount.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATORACCOUNT_H
#define UI_GENERATORACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_generatorAccount
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *generatorAccount)
    {
        if (generatorAccount->objectName().isEmpty())
            generatorAccount->setObjectName(QString::fromUtf8("generatorAccount"));
        generatorAccount->resize(400, 300);
        comboBox = new QComboBox(generatorAccount);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 40, 181, 31));
        label = new QLabel(generatorAccount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 101, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(generatorAccount);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 381, 51));
        label_2->setFont(font);
        pushButton = new QPushButton(generatorAccount);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 230, 161, 61));
        pushButton->setFont(font);
        lineEdit = new QLineEdit(generatorAccount);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 160, 211, 26));
        pushButton->raise();
        comboBox->raise();
        label->raise();
        label_2->raise();
        lineEdit->raise();

        retranslateUi(generatorAccount);

        QMetaObject::connectSlotsByName(generatorAccount);
    } // setupUi

    void retranslateUi(QDialog *generatorAccount)
    {
        generatorAccount->setWindowTitle(QCoreApplication::translate("generatorAccount", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("generatorAccount", "\320\242\320\270\320\277 \321\201\321\207\320\265\321\202\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("generatorAccount", "\320\241\321\202\320\260\321\200\321\202\320\276\320\262\321\213\320\271 \320\261\320\260\320\273\320\260\320\275\321\201 \321\201\321\207\320\265\321\202\320\260/\n"
"\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\273\320\270\320\274\320\270\321\202:", nullptr));
        pushButton->setText(QCoreApplication::translate("generatorAccount", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\201\321\207\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class generatorAccount: public Ui_generatorAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATORACCOUNT_H
