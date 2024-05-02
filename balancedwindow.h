#ifndef BALANCEDWINDOW_H
#define BALANCEDWINDOW_H

#include <QDialog>
#include <QMap>
#include <QListWidget>
#include <QString>
#include <QMessageBox>

namespace Ui {
class balancedwindow;
}

class balancedwindow : public QDialog
{
    Q_OBJECT

public:
    explicit balancedwindow(QMap<QString, double> &balances, QMap<QString, QList<QString>> &transactionHistory, QListWidget *listWidget, QMap<QString, QString> &tokenAccount,QMap<QString, double> &creditLimit ,QWidget *parent = nullptr);
    ~balancedwindow();

private slots:
    void on_pushButton_clicked();

signals:
    void balanceUpdatedSignal();

private:
    Ui::balancedwindow *ui;
    QMap<QString, double> &balances;
    QMap<QString, QList<QString>> &transactionHistory;
    QListWidget *listWidget;
    QMap<QString, QString> &tokenAccount;
    QMap<QString, double> &creditLimit;
};

#endif // BALANCEDWINDOW_H
