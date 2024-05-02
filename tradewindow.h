#ifndef TRADEWINDOW_H
#define TRADEWINDOW_H

#include <QDialog>
#include <QMap>
#include <QListWidget>

namespace Ui {
class tradewindow;
}

class tradewindow : public QDialog
{
    Q_OBJECT

public:
    explicit tradewindow(QMap<QString, double> &balances, QMap<QString, QList<QString>> &transactionHistory, QListWidget *listWidget, QMap<QString, QString> &tokenAccount,QMap<QString, double> &creditLimit, QWidget *parent = nullptr);
    ~tradewindow();

private slots:
    void on_tradeButton_clicked();

signals:
    void balanceUpdatedSignal();

private:
    Ui::tradewindow *ui;
    QMap<QString, double> &balances;
    QMap<QString, QList<QString>> &transactionHistory;
    QListWidget *listWidget;
    QMap<QString, QString> &tokenAccount;
    QMap<QString, double> &creditLimit;
};

#endif // TRADEWINDOW_H
