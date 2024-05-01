// atmwindow.cpp
#include "atmwindow.h"
#include "ui_atmwindow.h"
#include <QMessageBox>
#include <QMap>

atmwindow::atmwindow(QMap<QString, double> &balances, QMap<QString, QList<QString>> &transactionHistory, QListWidget *listWidget, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::atmwindow),
    balances(balances),
    transactionHistory(transactionHistory),
    listWidget(listWidget)
{
    ui->setupUi(this);
}

atmwindow::~atmwindow()
{
    delete ui;
}

void atmwindow::on_creditButton_clicked()
{
    // Получаем номер счета и сумму из полей ввода
    QString bill = ui->billLineEdit->text();
    double amount = ui->amountLineEdit->text().toDouble();

    // Проверяем, что номер счета не пуст и счет с таким номером существует
    if (bill.isEmpty() || !balances.contains(bill)) {
        QMessageBox::warning(this, "Ошибка", "Счет не найден.");
        return;
    }

    // Добавляем транзакцию в историю транзакций
    QString transaction = "Пополнение: " + QString::number(amount);
    transactionHistory[bill].append(transaction);

    // Увеличиваем баланс на указанную сумму
    balances[bill] += amount;

    // Отображаем транзакцию в списке счетов
    //listWidget->addItem(transaction);

    emit balanceUpdatedSignal();

    // Выводим информационное сообщение об успешном пополнении баланса
    QMessageBox::information(this, "Успех", "Баланс успешно пополнен.");

}

void atmwindow::on_depositButton_clicked()
{
    // Implement withdraw functionality here
    //QMessageBox::information(this, "Снятие с баланса", "Функция снятия с баланса еще не реализована.");
    // Получаем номер счета и сумму из полей ввода
    QString bill = ui->billLineEdit->text();
    double amount = ui->amountLineEdit->text().toDouble();

    // Проверяем, что номер счета не пуст и счет с таким номером существует
    if (bill.isEmpty() || !balances.contains(bill)) {
        QMessageBox::warning(this, "Ошибка", "Счет не найден.");
        return;
    }

    if (amount > balances[bill])
    {
        QMessageBox::warning(this, "Ошибка", "Недостаточно средств.");
        return;
    }

    // Добавляем транзакцию в историю транзакций
    QString transaction = "Снятие: " + QString::number(amount);
    transactionHistory[bill].append(transaction);

    // Уменьшаем баланс на указанную сумму
    balances[bill] -= amount;

    emit balanceUpdatedSignal();

    // Выводим информационное сообщение об успешном пополнении баланса
    QMessageBox::information(this, "Успех", "Баланс успешно снят.");
}
