#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QInputDialog>
#include "atmwindow.h"
#include "tradewindow.h"
#include "payservice.h"
#include "generatoraccount.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Определение слота для обновления QListWidget
void MainWindow::updateListWidget() {
    // Очищаем QListWidget
    ui->listWidget->clear();

    // Добавляем все счета с их балансами из QMap balances в QListWidget
    for (auto it = balances.begin(); it != balances.end(); ++it) {
        QString bill = it.key();
        QString type = tokenAccount.value(bill);
        double balance = it.value();

        QString itemText = "Тип счета: " + type + " Номер счета: " + bill + " - Баланс: " + QString::number(balances.value(bill));
        ui->listWidget->addItem(itemText);
    }
}

void MainWindow::on_generationAccount_clicked()
{
    generatorAccount generatoraccount(balances,transactionHistory ,ui->listWidget, tokenAccount);
    connect(&generatoraccount, &generatorAccount::balanceUpdatedSignal, this, &MainWindow::updateListWidget);
    generatoraccount.exec();
}


void MainWindow::on_viewAccount_clicked()
{
    QString allBills;
    for (int i = 0; i < ui->listWidget->count(); ++i) {
        QString bill = ui->listWidget->item(i)->text();
        allBills += bill + " - Баланс: " + QString::number(balances.value(bill)) + "\n";
        allBills += "История транзакций:\n";
        for (const QString &transaction : transactionHistory.value(bill)) {
            allBills += "- " + transaction + "\n";
        }
        allBills += "\n";
    }

    if (allBills.isEmpty()) {
        allBills = "Нет сгенерированных счетов.";
    }

    QMessageBox::information(this, "Сгенерированные счета", allBills);
}
void MainWindow::on_atmButton_clicked()
{
    atmwindow atmWindow(balances,transactionHistory ,ui->listWidget);
    connect(&atmWindow, &atmwindow::balanceUpdatedSignal, this, &MainWindow::updateListWidget);
    atmWindow.exec();
}



void MainWindow::on_tradeButton_clicked()
{
    tradewindow tradeWindow(balances,transactionHistory ,ui->listWidget);
    connect(&tradeWindow, &tradewindow::balanceUpdatedSignal, this, &MainWindow::updateListWidget);
    tradeWindow.exec();
}

void MainWindow::on_payServiceButton_clicked()
{
    payservice payServiceWindow(balances,transactionHistory ,ui->listWidget);
    connect(&payServiceWindow, &payservice::balanceUpdatedSignal, this, &MainWindow::updateListWidget);
    payServiceWindow.exec();
}

