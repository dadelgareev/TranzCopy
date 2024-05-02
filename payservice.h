#ifndef PAYSERVICE_H
#define PAYSERVICE_H

#include <QDialog>
#include <QMap>
#include <QListWidget>
#include <QVector>
#include <QString>

namespace Ui {
class payservice;
}

class payservice : public QDialog
{
    Q_OBJECT

public:
    explicit payservice(QMap<QString, double> &balances, QMap<QString, QList<QString>> &transactionHistory, QListWidget *listWidget, QMap<QString, QString> &tokenAccount,QMap<QString, double> &creditLimit, QWidget *parent = nullptr);
    QVector<QString> arrayService;
    ~payservice();

private slots:
    void on_pushButton_clicked();

signals:
    void balanceUpdatedSignal();

private:
    Ui::payservice *ui;
    QMap<QString, double> &balances;
    QMap<QString, QList<QString>> &transactionHistory;
    QListWidget *listWidget;
    QMap<QString, QString> &tokenAccount;
    QMap<QString, double> &creditLimit;
};

#endif // PAYSERVICE_H
