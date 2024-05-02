#include "authwindow.h"
#include "ui_authwindow.h"
#include "mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include "recoverywindow.h"


authwindow::authwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::authwindow)
{
    ui->setupUi(this);
}

authwindow::~authwindow()
{
    delete ui;
}

void authwindow::on_authButton_clicked()
{
    QString usernameUI = ui->usernameLineEdit->text();
    QString passwordUI = ui->passwordLineEdit->text();

    QString filePath = "C:\\Users\\Adel\\Documents\\TranzCopy\\users.txt";

    // Чтение данных из файла
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Unable to open users file.");
        return;
    }

    QTextStream in(&file);
    bool authenticated = false;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        if (fields.size() == 2 && fields[0] == usernameUI && fields[1] == passwordUI) {
            authenticated = true;
            break;
        }
    }
    file.close();

    if (authenticated) {
        MainWindow *mainWindow = new MainWindow;
        mainWindow->show();
        this->close();
    } else {
        QMessageBox::critical(this, "Error", "Invalid username or password.");
    }
}


void authwindow::on_recoveryButton_clicked()
{
    recoverywindow recoveryWindow;
    recoveryWindow.exec();
}

