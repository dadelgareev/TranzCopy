/********************************************************************************
** Form generated from reading UI file 'tradewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADEWINDOW_H
#define UI_TRADEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tradewindow
{
public:
    QComboBox *senderAccountComboBox;
    QPushButton *tradeButton;
    QComboBox *getterAccountComboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;

    void setupUi(QDialog *tradewindow)
    {
        if (tradewindow->objectName().isEmpty())
            tradewindow->setObjectName(QString::fromUtf8("tradewindow"));
        tradewindow->resize(400, 300);
        senderAccountComboBox = new QComboBox(tradewindow);
        senderAccountComboBox->setObjectName(QString::fromUtf8("senderAccountComboBox"));
        senderAccountComboBox->setGeometry(QRect(10, 50, 161, 31));
        tradeButton = new QPushButton(tradewindow);
        tradeButton->setObjectName(QString::fromUtf8("tradeButton"));
        tradeButton->setGeometry(QRect(110, 200, 171, 71));
        QFont font;
        font.setPointSize(12);
        tradeButton->setFont(font);
        getterAccountComboBox = new QComboBox(tradewindow);
        getterAccountComboBox->setObjectName(QString::fromUtf8("getterAccountComboBox"));
        getterAccountComboBox->setGeometry(QRect(220, 50, 161, 31));
        label = new QLabel(tradewindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 151, 16));
        label->setFont(font);
        label_2 = new QLabel(tradewindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 20, 151, 16));
        label_2->setFont(font);
        label_3 = new QLabel(tradewindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 131, 21));
        label_3->setFont(font);
        lineEdit = new QLineEdit(tradewindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 110, 241, 24));

        retranslateUi(tradewindow);

        QMetaObject::connectSlotsByName(tradewindow);
    } // setupUi

    void retranslateUi(QDialog *tradewindow)
    {
        tradewindow->setWindowTitle(QCoreApplication::translate("tradewindow", "Dialog", nullptr));
        tradeButton->setText(QCoreApplication::translate("tradewindow", "\320\237\320\265\321\200\320\265\320\262\320\265\321\201\321\202\320\270 \321\201\321\200\320\265\320\264\321\201\321\202\320\262\320\260", nullptr));
        label->setText(QCoreApplication::translate("tradewindow", "\320\241\321\207\320\265\321\202 \320\276\321\202\320\277\321\200\320\260\320\262\320\270\321\202\320\265\320\273\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("tradewindow", "\320\241\321\207\320\265\321\202 \320\277\320\276\320\273\321\203\321\207\320\260\321\202\320\265\320\273\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("tradewindow", "\320\241\321\203\320\274\320\274\320\260 \320\277\320\265\321\200\320\265\320\262\320\276\320\264\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tradewindow: public Ui_tradewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADEWINDOW_H
