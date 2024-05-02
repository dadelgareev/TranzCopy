#ifndef RECOVERYWINDOW_H
#define RECOVERYWINDOW_H

#include <QDialog>

namespace Ui {
class recoverywindow;
}

class recoverywindow : public QDialog
{
    Q_OBJECT

public:
    explicit recoverywindow(QWidget *parent = nullptr);
    ~recoverywindow();

private slots:
    void on_recoveryButton_clicked();

private:
    Ui::recoverywindow *ui;
};

#endif // RECOVERYWINDOW_H
