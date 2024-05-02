#include "recoverywindow.h"
#include "ui_recoverywindow.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QRegularExpression>

recoverywindow::recoverywindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::recoverywindow)
{
    ui->setupUi(this);
}

recoverywindow::~recoverywindow()
{
    delete ui;
}

void recoverywindow::on_recoveryButton_clicked()
{
    QString passwordUI = ui->passwordUI->text();
    QString confimedPasswordUI = ui->confirmedPasswordUI->text();

    QString controlQuestuion1 = ui->controlQuestionLineEdit_1->text();
    QString controlQuestuion2 = ui->controlQuestionLineEdit_2->text();
    QString controlQuestuion3 = ui->controlQuestionLineEdit_3->text();

    QString filePath = "C:\\Users\\Adel\\Documents\\TranzCopy\\controlQuestions.txt";
    QString filePath2 = "C:\\Users\\Adel\\Documents\\TranzCopy\\users.txt";

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
        if (fields.size() == 3 && fields[0] == controlQuestuion1 && fields[1] == controlQuestuion2 && fields[2] == controlQuestuion3) {
            authenticated = true;
            break;
        }
    }
    file.close();

    if (authenticated) {

        if (passwordUI != confimedPasswordUI){
            QMessageBox::critical(this, "Error", "Подтвержденный пароль и новый пароль не соотвествуют друг другу.");
            return;
        }

        // Проверка длины пароля
        if (passwordUI.length() < 8) {
            QMessageBox::critical(this, "Error", "Пароль должен содержать как минимум 8 символов.");
            return;
        }

        // Проверка наличия заглавной буквы
        if (!passwordUI.contains(QRegularExpression("[A-Z]"))) {
            QMessageBox::critical(this, "Error", "Пароль должен содержать как минимум одну заглавную букву.");
            return;
        }

        // Проверка наличия цифры
        if (!passwordUI.contains(QRegularExpression("[0-9]"))) {
            QMessageBox::critical(this, "Error", "Пароль должен содержать как минимум одну цифру.");
            return;
        }

        // Проверка наличия специального символа
        if (!passwordUI.contains(QRegularExpression("[!@#$%^&*()_+{}|\":<>?~]"))) {
            QMessageBox::critical(this, "Error", "Пароль должен содержать как минимум один специальный символ.");
            return;
        }

        QFile file2(filePath2);
        if (!file2.open(QIODevice::ReadWrite | QIODevice::Text))
        {
            QMessageBox::critical(this, "Ошибка", "Невозможно открыть файл.");
            return;
        }
        QTextStream in2(&file2); // Создаем новый QTextStream для файла users.txt
        QString line = in2.readLine();
        QStringList fields = line.split(",");
        fields[1] = confimedPasswordUI;

        // Переходим в начало файла и записываем новое содержимое
        file2.seek(0);
        QTextStream out(&file2);
        QString newLine = fields.join(","); // Склеиваем элементы списка через запятую
        out << newLine << endl;


        file2.close();

        QMessageBox::information(this, "Успех", "Пароль успешно изменен");

    } else {
        QMessageBox::critical(this, "Error", "Invalid control questions.");
    }
}

