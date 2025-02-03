#include "crloginpage.h"
#include "ui_crloginpage.h"
#include "crdash.h"
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
    QString selectedCR = ui->comboBoxSelect->currentText(); // Get selected CR
    QString inputPassword = ui->lineEditPassword->text();   // Get the entered password

    // Ensure that a CR is selected
    if (selectedCR.isEmpty()) {
        QMessageBox::warning(this, "Login Error", "Please select a CR.");
        return;
    }

    // Ensure that a password is entered
    if (inputPassword.isEmpty()) {
        QMessageBox::warning(this, "Login Error", "Password cannot be empty.");
        return;
    }

    // Connect to the database
    if (!connectToDatabase()) {
        QMessageBox::critical(this, "Database Error", "Failed to connect to the database!");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT password FROM cr_password WHERE cr_name = :cr_name");
    query.bindValue(":cr_name", selectedCR);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to retrieve password: " + query.lastError().text());
        return;
    }

    if (query.next()) {
        QString storedPassword = query.value(0).toString(); // Get the stored password

        // Compare input password with the stored password
        if (inputPassword == storedPassword) {
            QMessageBox::information(this, "Login Success", "You are now logged in!");

            crdash *dashboard = new crdash(); // Assuming crdash is the CR's dashboard
            dashboard->show();
            this->close();
        } else {
            QMessageBox::warning(this, "Login Failed", "Invalid password. Please try again.");
        }
    } else {
        QMessageBox::warning(this, "Login Failed", "No account found for the selected CR.");
    }
}

void crloginpage::on_pushButtonForgotpassword_clicked()
{
    QMessageBox::information(this, "Forgot Password?", "Please contact your coordinator to reset your password.");
}

void crloginpage::on_comboBoxSelect_activated(int index)
{
    QString selectedCR = ui->comboBoxSelect->itemText(index);
    qDebug() << "Selected CR: " << selectedCR; // Debugging output
}

