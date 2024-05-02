#ifndef AUTHWINDOW_H
#define AUTHWINDOW_H

#include <QDialog>

namespace Ui {
class authwindow;
}

class authwindow : public QDialog
{
    Q_OBJECT

public:
    explicit authwindow(QWidget *parent = nullptr);
    ~authwindow();

private slots:
    void on_authButton_clicked();

    void on_recoveryButton_clicked();

private:
    Ui::authwindow *ui;
    QString login;
    QString password;
    QString controlQuestion1;
    QString controlQuestion2;
    QString controlQuestion3;
};

#endif // AUTHWINDOW_H
