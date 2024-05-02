/********************************************************************************
** Form generated from reading UI file 'balancedwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCEDWINDOW_H
#define UI_BALANCEDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_balancedwindow
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;

    void setupUi(QDialog *balancedwindow)
    {
        if (balancedwindow->objectName().isEmpty())
            balancedwindow->setObjectName(QString::fromUtf8("balancedwindow"));
        balancedwindow->resize(400, 300);
        pushButton = new QPushButton(balancedwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 190, 171, 71));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        lineEdit = new QLineEdit(balancedwindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 130, 221, 41));
        label = new QLabel(balancedwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 89, 291, 31));
        label->setFont(font);
        comboBox = new QComboBox(balancedwindow);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(0, 40, 221, 41));
        label_2 = new QLabel(balancedwindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 0, 201, 31));
        label_2->setFont(font);

        retranslateUi(balancedwindow);

        QMetaObject::connectSlotsByName(balancedwindow);
    } // setupUi

    void retranslateUi(QDialog *balancedwindow)
    {
        balancedwindow->setWindowTitle(QCoreApplication::translate("balancedwindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("balancedwindow", "\320\221\320\260\320\273\320\260\320\275\321\201\320\270\321\200\320\276\320\262\320\272\320\260\n"
"\321\201\321\207\320\265\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("balancedwindow", "\320\241\321\200\320\276\320\272 \320\261\320\260\320\273\320\260\320\275\321\201\320\270\321\200\320\276\320\262\320\272\320\270 \320\262 \320\274\320\265\321\201\321\217\321\206\320\260\321\205 ", nullptr));
        label_2->setText(QCoreApplication::translate("balancedwindow", "\320\235\320\276\320\274\320\265\321\200 \321\201\321\207\320\265\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class balancedwindow: public Ui_balancedwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCEDWINDOW_H
