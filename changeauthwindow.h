#ifndef CHANGEAUTHWINDOW_H
#define CHANGEAUTHWINDOW_H

#include <QDialog>

namespace Ui {
class changeauthwindow;
}

class changeauthwindow : public QDialog
{
    Q_OBJECT

public:
    explicit changeauthwindow(QWidget *parent = nullptr);
    ~changeauthwindow();

private slots:
    void on_changeAuthButton_clicked();

private:
    Ui::changeauthwindow *ui;
};

#endif // CHANGEAUTHWINDOW_H
