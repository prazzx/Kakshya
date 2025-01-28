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
    QString password = ui->lineEditPassword->text();
    QString confirmPassword = ui->lineEditConfirmpassword->text();


    // Check if passwords match
    if (password != confirmPassword) {
        QMessageBox::warning(this, "Password Error", "Passwords do not match!");
        return;  // Exit the function if passwords don't match
    }
    // Connect to the database
    if (!connectToDatabase()) {
        QMessageBox::critical(this, "Database Error", "Failed to connect to the database!");
        return;  // Exit if database connection fails
    }
    QSqlQuery query;
    query.prepare("INSERT INTO cr_password (password) VALUES (:password)");
    query.bindValue(":password", password);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to insert the password into the database: " + query.lastError().text());
        return;
    }

    // Success message
    QMessageBox::information(this, "Success", "Password has been successfully saved!");

    // Clear the input fields
    ui->lineEditPassword->clear();
    ui->lineEditConfirmpassword->clear();

}

// {
//     QMessageBox::StandardButton reply = QMessageBox::question(
//         this,
//         "Password Confirmation",
//         "Are you sure you want to change the password?",
//         QMessageBox::Yes | QMessageBox::No
//         );

//     if (reply == QMessageBox::Yes) {

//     } else {

//     }
// }




