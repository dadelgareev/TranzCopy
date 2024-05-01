#include "generatoraccount.h"
#include "ui_generatoraccount.h"

generatorAccount::generatorAccount(QMap<QString, double> &balances, QMap<QString, QList<QString>> &transactionHistory, QListWidget *listWidget, QMap<QString, QString> &tokenAccount, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::generatorAccount),
    balances(balances),
    transactionHistory(transactionHistory),
    listWidget(listWidget),
    tokenAccount(tokenAccount)
{
    ui->setupUi(this);
    classAccount = { "Дебетовая пластиковая карта", "Кредитная пластиковая карта", "Счет до востребования", "Накопительный счет", "Кредитный счет"};
    ui->comboBox->clear(); // Очищаем комбо-бокс перед заполнением

    // Добавляем элементы из массива expenses в QComboBox
    for (const QString &expense : classAccount) {
        ui->comboBox->addItem(expense);
    }
}

generatorAccount::~generatorAccount()
{
    delete ui;
}

void generatorAccount::on_pushButton_clicked()
{
    QString bill = "Счет #" + QString::number(listWidget->count() + 1);
    balances.insert(bill, 0.0);
    transactionHistory.insert(bill, QList<QString>());

    tokenAccount.insert(bill, QString(ui->comboBox->currentText()));
    QString type = tokenAccount.value(bill);

    //QString itemText ="Тип счета: " + type + " Номер счета: " + bill + " - Баланс: " + QString::number(balances.value(bill));
    //listWidget->addItem(itemText);

    emit balanceUpdatedSignal();

    // Обновляем интерфейс или выводим сообщение об успехе
    QMessageBox::information(this, "Успех", "Счет успешно создан.");
}

