#include "payservice.h"
#include "ui_payservice.h"
#include <QMessageBox>

payservice::payservice(QMap<QString, double> &balances, QMap<QString, QList<QString>> &transactionHistory, QListWidget *listWidget, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payservice),
    balances(balances),
    transactionHistory(transactionHistory),
    listWidget(listWidget)
{
    ui->setupUi(this);


    arrayService = {"ЖКХ", "Интернет", "Телевиденье", "Яндекс-музыка", "Ипотека"};
    ui->serviceComboBox->clear(); // Очищаем комбо-бокс перед заполнением
    ui->accountComboBox->clear(); // Очищаем комбо-бокс перед заполнением

    // Проходимся по QMap с балансами и добавляем номера счетов в комбо-бокс
    for (auto it = balances.begin(); it != balances.end(); ++it) {
        ui->accountComboBox->addItem(it.key());
    }
    // Добавляем элементы из массива expenses в QComboBox
    for (const QString &expense : arrayService) {
        ui->serviceComboBox->addItem(expense);
    }

}

payservice::~payservice()
{
    delete ui;
}

void payservice::on_pushButton_clicked()
{
    // Получаем номера счетов и сумму из интерфейса
    QString bill = ui->accountComboBox->currentText();
    QString service = ui->serviceComboBox->currentText();
    double amount = ui->amountEdit->text().toDouble();

    // Проверяем, достаточно ли средств на счете
    if (balances[bill] < amount) {
        QMessageBox::warning(this, "Ошибка", "На счете недостаточно средств.");
        return;
    }

    balances[bill] -= amount;

    // Записываем транзакции в историю транзакций
    QString transaction = "Оплата услуги: -" + QString::number(amount) + " Тип услуги: " + service;

    transactionHistory[bill].append(transaction);

    emit balanceUpdatedSignal();

    // Обновляем интерфейс или выводим сообщение об успехе
    QMessageBox::information(this, "Успех", "Услуга оплачена");



}

