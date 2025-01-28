#include "crloginpage.h"
#include "ui_crloginpage.h"
#include"studentdash.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

crloginpage::crloginpage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::crloginpage)
{
    ui->setupUi(this);
}

crloginpage::~crloginpage()
{
    delete ui;
}

bool crloginpage::connectToDatabase()
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

void crloginpage::on_pushButtonLogin_clicked()
{
    QString inputPassword = ui->lineEditPassword->text(); // Get the password entered by the user

    // Connect to the database
    if (!connectToDatabase()) {
        QMessageBox::critical(this, "Database Error", "Failed to connect to the database!");
        return;
    }
    QSqlQuery query;
    query.prepare("SELECT password FROM cr_password LIMIT 1"); // Adjust the query if you need specific conditions

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to retrieve password from the database: " + query.lastError().text());
        return;
    }

    if (query.next()) {
        QString storedPassword = query.value(0).toString(); // Get the stored password

        // Compare the input password with the stored password
        if (inputPassword == storedPassword) {
            QMessageBox::information(this, "Login Success", "You are now logged in!");

            crdash *dashboard = new crdash(); // Create an instance of crdash
            dashboard->show();                // Show the CR dashboard
            this->close();
            // Proceed to the next window or dashboard
            accept(); // Close the login dialog
        } else {
            QMessageBox::warning(this, "Login Failed", "Invalid password. Please try again.");
        }
    } else {
        QMessageBox::warning(this, "Login Failed", "No password found in the database.");
    }
}



void crloginpage::on_pushButtonForgotpassword_clicked()
{
    QMessageBox::information(this,"can't remember your password?","please, contact your coordinator and request for password");
}

