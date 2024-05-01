// atmwindow.h
#ifndef ATMWINDOW_H
#define ATMWINDOW_H

#include <QDialog>
#include <QMap>
#include <QListWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class atmwindow; }
QT_END_NAMESPACE

class atmwindow : public QDialog
{
    Q_OBJECT

public:
    explicit atmwindow(QMap<QString, double> &balances, QMap<QString, QList<QString>> &transactionHistory, QListWidget *listWidget, QWidget *parent = nullptr);
    ~atmwindow();

private slots:
    void on_depositButton_clicked();
    void on_creditButton_clicked();

signals:
    void balanceUpdatedSignal();

private:
    Ui::atmwindow *ui;
    QMap<QString, double> &balances;
    QMap<QString, QList<QString>> &transactionHistory;
    QListWidget *listWidget;
};

#endif // ATMWINDOW_H
