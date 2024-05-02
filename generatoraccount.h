#ifndef GENERATORACCOUNT_H
#define GENERATORACCOUNT_H

#include <QDialog>
#include <QMap>
#include <QListWidget>
#include <QString>
#include <QMessageBox>

namespace Ui {
class generatorAccount;
}

class generatorAccount : public QDialog
{
    Q_OBJECT

public:
    explicit generatorAccount(QMap<QString, double> &balances, QMap<QString, QList<QString>> &transactionHistory, QListWidget *listWidget, QMap<QString, QString> &tokenAccount,QMap<QString, double> &creditLimit ,QWidget *parent = nullptr);
    ~generatorAccount();

private slots:
    void on_pushButton_clicked();

signals:
    void balanceUpdatedSignal();

private:
    Ui::generatorAccount *ui;
    QMap<QString, double> &balances;
    QMap<QString, QList<QString>> &transactionHistory;
    QListWidget *listWidget;
    QVector<QString> classAccount;
    QMap<QString, QString> &tokenAccount;
    QMap<QString, double> &creditLimit;

};

#endif // GENERATORACCOUNT_H
