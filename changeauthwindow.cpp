#include "changeauthwindow.h"
#include "ui_changeauthwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QRegularExpression>


changeauthwindow::changeauthwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changeauthwindow)
{
    ui->setupUi(this);
}

changeauthwindow::~changeauthwindow()
{
    delete ui;
}

void changeauthwindow::on_changeAuthButton_clicked()
{
    QString currentPasswordUI = ui->currentPasswordEditLine->text();
    QString newPasswordUI = ui->newPasswordEditLine->text();
    QString confirmedPasswordUI = ui->confirmedPasswordEditLine->text();

    QString filePath = "C:\\Users\\Adel\\Documents\\TranzCopy\\users.txt";

    // Чтение данных из файла
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Unable to open users file.");
        return;
    }

    QTextStream in(&file);
    QStringList fields; // Объявляем переменную fields здесь, за пределами цикла while
    bool authenticated = false;
    while (!in.atEnd()) {
        QString line = in.readLine();
        fields = line.split(","); // Присваиваем значения fields внутри цикла
        if (fields.size() == 2 && fields[1] == currentPasswordUI) {
            authenticated = true;
            break;
        }
    }

    file.close();

    if (authenticated) {
        if (newPasswordUI != confirmedPasswordUI){
            QMessageBox::critical(this, "Error", "Подтвержденный пароль и новый пароль не соотвествуют друг другу.");
            return;
        }

        // Проверка длины пароля
        if (newPasswordUI.length() < 8) {
            QMessageBox::critical(this, "Error", "Пароль должен содержать как минимум 8 символов.");
            return;
        }

        // Проверка наличия заглавной буквы
        if (!newPasswordUI.contains(QRegularExpression("[A-Z]"))) {
            QMessageBox::critical(this, "Error", "Пароль должен содержать как минимум одну заглавную букву.");
            return;
        }

        // Проверка наличия цифры
        if (!newPasswordUI.contains(QRegularExpression("[0-9]"))) {
            QMessageBox::critical(this, "Error", "Пароль должен содержать как минимум одну цифру.");
            return;
        }

        // Проверка наличия специального символа
        if (!newPasswordUI.contains(QRegularExpression("[!@#$%^&*()_+{}|\":<>?~]"))) {
            QMessageBox::critical(this, "Error", "Пароль должен содержать как минимум один специальный символ.");
            return;
        }

        // Обновляем пароль в списке полей
        fields[1] = confirmedPasswordUI;

        // Записываем новые данные в файл
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QMessageBox::critical(this, "Error", "Unable to open users file for writing.");
            return;
        }

        QTextStream out(&file);
        QString newLine = fields.join(","); // Склеиваем элементы списка через запятую
        out << newLine << endl;

        QMessageBox::information(this, "Success", "Password successfully changed.");
    } else {
        QMessageBox::critical(this, "Error", "Invalid username or password.");
    }
    file.close(); // Закрываем файл после записи
}


