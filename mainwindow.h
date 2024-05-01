#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    // Определение слота для обновления QListWidget
    void updateListWidget();

private slots:
    void on_generationAccount_clicked();

    void on_viewAccount_clicked();

    void on_atmButton_clicked();

    void on_tradeButton_clicked();

    void on_payServiceButton_clicked();

private:
    Ui::MainWindow *ui;
    QMap<QString, double> balances;
    QMap<QString, QList<QString>> transactionHistory;
    QMap<QString, QString> tokenAccount;



};
#endif // MAINWINDOW_H
