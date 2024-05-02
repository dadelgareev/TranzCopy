#include "balancedwindow.h"
#include "ui_balancedwindow.h"
#include <QMessageBox>
#include <QMap>

balancedwindow::balancedwindow(QMap<QString, double> &balances, QMap<QString, QList<QString>> &transactionHistory, QListWidget *listWidget, QMap<QString, QString> &tokenAccount,QMap<QString, double> &creditLimit, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::balancedwindow),
    balances(balances),
    transactionHistory(transactionHistory),
    listWidget(listWidget),
    tokenAccount(tokenAccount),
    creditLimit(creditLimit)
{
    ui->setupUi(this);
    ui->comboBox->clear(); // Очищаем комбо-бокс перед заполнением

    // Проходимся по QMap с балансами и добавляем номера счетов в комбо-бокс
    for (auto it = balances.begin(); it != balances.end(); ++it) {
        ui->comboBox->addItem(it.key());
    }
}

balancedwindow::~balancedwindow()
{
    delete ui;
}

void balancedwindow::on_pushButton_clicked()
{
    QString bill = ui->comboBox->currentText();
    if (tokenAccount[bill] == "Кредитная пластиковая карта"){
        if (ui->lineEdit->text().toInt() >= 12){
            int count = ui->lineEdit->text().toInt() / 12;
            for (int i = 0; i < count; i++){
                double amount = creditLimit[bill] - balances[bill];
                amount = amount + (amount * 0.05);
                balances[bill] = creditLimit[bill] - amount;
            }
        }
    }

    if (tokenAccount[bill] == "Кредитный счет"){
        if (ui->lineEdit->text().toInt() >= 12){
            int count = ui->lineEdit->text().toInt() / 12;
            for (int i = 0; i < count; i++){
                double amount = creditLimit[bill] - balances[bill];
                amount = amount + (amount * 0.10);
                balances[bill] = creditLimit[bill] - amount;
            }
        }
    }

    if (tokenAccount[bill] == "Накопительный счет"){
        int count = ui->lineEdit->text().toInt();
        for (int i = 0; i < count; i++){
            double amount = balances[bill];
            amount = amount + (amount * 0.0016);
            balances[bill] = amount;
        }
    }

    emit balanceUpdatedSignal();

    // Обновляем интерфейс или выводим сообщение об успехе
    QMessageBox::information(this, "Успех", "Счет успешно прошел баланисровку.");
}

