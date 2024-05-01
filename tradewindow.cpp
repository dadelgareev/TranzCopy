#include "tradewindow.h"
#include "ui_tradewindow.h"
#include <QMessageBox>

tradewindow::tradewindow(QMap<QString, double> &balances, QMap<QString, QList<QString>> &transactionHistory, QListWidget *listWidget, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tradewindow),
    balances(balances),
    transactionHistory(transactionHistory),
    listWidget(listWidget)
{
    ui->setupUi(this);
    // Ваш код для заполнения комбо-бокса номерами счетов
    ui->senderAccountComboBox->clear(); // Очищаем комбо-бокс перед заполнением
    ui->getterAccountComboBox->clear();

    // Проходимся по QMap с балансами и добавляем номера счетов в комбо-бокс
    for (auto it = balances.begin(); it != balances.end(); ++it) {
        ui->senderAccountComboBox->addItem(it.key());
    }
    for (auto it = balances.begin(); it != balances.end(); ++it) {
        ui->getterAccountComboBox->addItem(it.key());
    }
}

tradewindow::~tradewindow()
{
    delete ui;
}

void tradewindow::on_tradeButton_clicked()
{
    // Получаем номера счетов и сумму из интерфейса
    QString senderBill = ui->senderAccountComboBox->currentText();
    QString getterBill = ui->getterAccountComboBox->currentText();
    double amount = ui->lineEdit->text().toDouble();

    // Проверяем, что оба счета существуют и сумма неотрицательна
    if (!balances.contains(senderBill) || !balances.contains(getterBill) || amount <= 0) {
        QMessageBox::warning(this, "Ошибка", "Проверьте правильность введенных данных.");
        return;
    }

    if (senderBill == getterBill) {
        QMessageBox::warning(this, "Ошибка", "Нельзя перевести средства на тот же счет.");
        return;
    }

    // Проверяем, достаточно ли средств на счете отправителя
    if (balances[senderBill] < amount) {
        QMessageBox::warning(this, "Ошибка", "На счете отправителя недостаточно средств.");
        return;
    }

    // Выполняем перевод между счетами
    balances[senderBill] -= amount;
    balances[getterBill] += amount;

    // Записываем транзакции в историю транзакций для обоих счетов
    QString transactionSender = "Перевод: -" + QString::number(amount) + " на счет " + getterBill;
    QString transactionGetter = "Перевод: +" + QString::number(amount) + " со счета " + senderBill;
    transactionHistory[senderBill].append(transactionSender);
    transactionHistory[getterBill].append(transactionGetter);

    emit balanceUpdatedSignal();

    // Обновляем интерфейс или выводим сообщение об успехе
    QMessageBox::information(this, "Успех", "Перевод успешно выполнен.");
}

