#include "signupdialog.h"
#include "ui_signupdialog.h"
#include "signupsuccessful.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

SignupDialog::SignupDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignupDialog)
{
    ui->setupUi(this);
}

SignupDialog::~SignupDialog()
{
    delete ui;
}

bool SignupDialog::connectToDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("kakshya");
    db.setUserName("root");
    db.setPassword("root");

    if (!db.open()) {
        ui->labelMessage->setText("Failed to connect to database: " + db.lastError().text());
        return false;
    }
    return true;
}

void SignupDialog::on_pushButtonSignUp_clicked()
{
    if (!connectToDatabase())
        return;

    QString name = ui->lineEditName->text();
    QString phone = ui->lineEditPhone->text();
    QString email = ui->lineEditEmail->text();
    QString password = ui->lineEditPassword->text();
    QString cpassword = ui->lineEditConfirmpassword->text();

    QSqlQuery checkUsernameQuery;
    checkUsernameQuery.prepare("SELECT COUNT(*) FROM users WHERE username = :username");
    checkUsernameQuery.bindValue(":username", name);
    if (checkUsernameQuery.exec() && checkUsernameQuery.next()) {
        int count = checkUsernameQuery.value(0).toInt();
        if (count > 0) {
            ui->labelMessage->setText("Username already exists.");
            return;
        }


    QSqlQuery checkEmailQuery;
    checkEmailQuery.prepare("SELECT COUNT(*) FROM users WHERE email = :email");
    checkEmailQuery.bindValue(":email", email);
    if (checkEmailQuery.exec() && checkEmailQuery.next()) {
        int count = checkEmailQuery.value(0).toInt();
        if (count > 0) {
            ui->labelMessage->setText("Email already exists.");
            return;
        }


    if ( name.isEmpty() || phone.isEmpty() || email.isEmpty() || password.isEmpty() || cpassword.isEmpty()) {
        ui->labelMessage->setText("All fields are required.");
        return;
    }
    if(password!=cpassword){
        ui->labelMessage->setText("Passwords do not match");
        return;
    }


    QSqlQuery query;
    query.prepare("INSERT INTO users (username, email, password, phone_number) "
                  "VALUES (:username, :email, :password, :phone_number)");

    query.bindValue(":username", name);
    query.bindValue(":email", email);
    query.bindValue(":password", password);
    query.bindValue(":phone_number", phone);



    if (query.exec()) {
        signupSuccessful = new Signupsuccessful(this);
        signupSuccessful ->show();
        ui->lineEditName->clear();
        ui->lineEditPhone->clear();
        ui->lineEditEmail->clear();
        ui->lineEditPassword->clear();
        ui->lineEditConfirmpassword->clear();

    } else {
        ui->labelMessage->setText ("Error signing up");
    }
    }
    }
}

