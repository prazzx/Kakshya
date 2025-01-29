#include "selectcr.h"
#include "ui_selectcr.h"
#include"coordinatordash.h"
#include<QMessageBox>
#include <QDateTime>
#include<QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

selectcr::selectcr(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::selectcr)
    , codash(nullptr) // Initialize the pointer to nullptr
{
    ui->setupUi(this);

      codash = new coordinatordash(this);// Create the CoordinatorDash window
}


selectcr::~selectcr()
{
    delete ui;
}
bool selectcr::connectToDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("kakshya");
    db.setUserName("root");
    db.setPassword("root");

    if (!db.open()) {
        return false;
    }
    return true;
}

void selectcr::on_pushButton_clicked()
{
    codash->show();
    this ->hide();
}
void selectcr::on_pushButtonSignUp_clicked()
{
    QString selectedCR = ui->comboBoxSelect->currentText(); // Get selected CR
    QString password = ui->lineEditPassword->text();
    QString confirmPassword = ui->lineEditConfirmpassword->text();

    if (password.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Password fields cannot be empty!");
        return;
    }

    if (password != confirmPassword) {
        QMessageBox::warning(this, "Password Error", "Passwords do not match!");
        return;
    }

    if (!connectToDatabase()) {
        QMessageBox::critical(this, "Database Error", "Database connection failed!");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT password FROM cr_password WHERE cr_name = :cr_name");
    query.bindValue(":cr_name", selectedCR);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to check existing password: " + query.lastError().text());
        qDebug() << "SQL Error: " << query.lastError().text(); // Debugging
        return;
    }

    if (query.next()) {
        query.prepare("UPDATE cr_password SET password = :password WHERE cr_name = :cr_name");
    } else {
        query.prepare("INSERT INTO cr_password (cr_name, password) VALUES (:cr_name, :password)");
    }

    query.bindValue(":cr_name", selectedCR);
    query.bindValue(":password", password);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to save password: " + query.lastError().text());
        qDebug() << "SQL Error: " << query.lastError().text(); // Debugging
        return;
    }

    QMessageBox::information(this, "Success", "Password has been successfully saved!");

    ui->lineEditPassword->clear();
    ui->lineEditConfirmpassword->clear();
}

void selectcr::on_comboBoxSelect_activated(int index)
{
    QString selectedCR = ui->comboBoxSelect->itemText(index); // Get selected item text
    qDebug() << "Selected CR: " << selectedCR; // Debugging output
}
