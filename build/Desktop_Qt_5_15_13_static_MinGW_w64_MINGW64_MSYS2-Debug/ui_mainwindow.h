/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *generationAccount;
    QPushButton *viewAccount;
    QListWidget *listWidget;
    QPushButton *atmButton;
    QPushButton *tradeButton;
    QPushButton *payServiceButton;
    QPushButton *balancedAccountButton;
    QPushButton *authButton;
    QPushButton *authButton_2;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuTranzCopy;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1176, 613);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        generationAccount = new QPushButton(centralwidget);
        generationAccount->setObjectName(QString::fromUtf8("generationAccount"));
        generationAccount->setGeometry(QRect(20, 20, 151, 61));
        QFont font;
        font.setPointSize(12);
        generationAccount->setFont(font);
        viewAccount = new QPushButton(centralwidget);
        viewAccount->setObjectName(QString::fromUtf8("viewAccount"));
        viewAccount->setGeometry(QRect(20, 100, 151, 61));
        viewAccount->setFont(font);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(305, 10, 761, 311));
        atmButton = new QPushButton(centralwidget);
        atmButton->setObjectName(QString::fromUtf8("atmButton"));
        atmButton->setGeometry(QRect(20, 180, 151, 61));
        atmButton->setFont(font);
        tradeButton = new QPushButton(centralwidget);
        tradeButton->setObjectName(QString::fromUtf8("tradeButton"));
        tradeButton->setGeometry(QRect(20, 260, 151, 61));
        tradeButton->setFont(font);
        payServiceButton = new QPushButton(centralwidget);
        payServiceButton->setObjectName(QString::fromUtf8("payServiceButton"));
        payServiceButton->setGeometry(QRect(20, 340, 151, 61));
        payServiceButton->setFont(font);
        balancedAccountButton = new QPushButton(centralwidget);
        balancedAccountButton->setObjectName(QString::fromUtf8("balancedAccountButton"));
        balancedAccountButton->setGeometry(QRect(20, 420, 151, 61));
        balancedAccountButton->setFont(font);
        authButton = new QPushButton(centralwidget);
        authButton->setObjectName(QString::fromUtf8("authButton"));
        authButton->setGeometry(QRect(20, 490, 151, 61));
        authButton->setFont(font);
        authButton_2 = new QPushButton(centralwidget);
        authButton_2->setObjectName(QString::fromUtf8("authButton_2"));
        authButton_2->setGeometry(QRect(220, 340, 151, 61));
        authButton_2->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1176, 26));
        menuTranzCopy = new QMenu(menubar);
        menuTranzCopy->setObjectName(QString::fromUtf8("menuTranzCopy"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuTranzCopy->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        generationAccount->setText(QCoreApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\201\321\207\320\265\321\202", nullptr));
        viewAccount->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \321\201\321\207\320\265\321\202\320\276\320\262", nullptr));
        atmButton->setText(QCoreApplication::translate("MainWindow", "\320\220\320\242\320\234 \321\202\320\265\321\200\320\274\320\270\320\275\320\260\320\273", nullptr));
        tradeButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\262\320\276\320\264 \n"
"\320\274\320\265\320\266\320\264\321\203 \321\201\321\207\320\265\321\202\320\260\320\274\320\270", nullptr));
        payServiceButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\273\320\260\321\202 \321\203\321\201\320\273\321\203\320\263", nullptr));
        balancedAccountButton->setText(QCoreApplication::translate("MainWindow", "\320\221\320\260\320\273\320\260\320\275\321\201\320\270\321\200\320\276\320\262\320\272\320\260\n"
" \321\201\321\207\320\265\321\202\320\260", nullptr));
        authButton->setText(QCoreApplication::translate("MainWindow", "\320\220\321\203\321\202\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217", nullptr));
        authButton_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214\n"
"\320\260\321\203\320\275\321\202\320\265\321\204\320\270\320\272\320\260\321\206\320\270\321\216", nullptr));
        menuTranzCopy->setTitle(QCoreApplication::translate("MainWindow", "TranzCopy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
