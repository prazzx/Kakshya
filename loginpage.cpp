#include "loginpage.h"
#include "qsqldatabase.h"
#include "signupdialog.h"
#include "ui_loginpage.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
LoginPage::LoginPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_pushButtonSignup_clicked()
{
    signupDialog = new SignupDialog(this);
    signupDialog->showMaximized();
}

bool LoginPage::connectToDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("kakshya");
    db.setUserName("root");
    db.setPassword("root");

    if (!db.open()) {
        ui->labelMessage->setText("Database connection failed: " + db.lastError().text());
        return false;
    }
    return true;
}

void LoginPage::on_pushButtonLogin_clicked()
{
    if (!connectToDatabase())
        return;

    QString email = ui->lineEditEmail->text();
    QString password = ui->lineEditPassword->text();

    if (email.isEmpty() || password.isEmpty()) {
        ui->labelMessage->setText("Please fill in both fields.");
        return;
    }

    QString tableName;
    if (ui->radioButtonTeacher->isChecked()) {
        tableName = "teacher";
    } else if (ui->radioButtonCoordinator->isChecked()) {
        tableName = "coordinator";
    } else if (ui->radioButtonCr->isChecked()) {
        tableName = "cr";
    } else {
        ui->labelMessage->setText("Please select a role.");
        return;
    }

    QSqlQuery query;
    query.prepare(QString("SELECT password FROM %1 WHERE email = :email").arg(tableName));
    query.bindValue(":email", email);

    if (query.exec() && query.next()) {

        QString storedPassword = query.value(0).toString();

        if (storedPassword != password) {
            ui->labelMessage->setText("Invalid password.");
        } else {
            ui->labelMessage->setText("Logged in successfully.");

            ui->lineEditEmail->clear();
            ui->lineEditPassword->clear();



        }
    } else {

        ui->labelMessage->setText("Invalid email.");
    }
}



void LoginPage::on_pushButtonForgotpassword_clicked()
{
    ui->lineEditEmail->clear();
    ui->lineEditPassword->clear();
    ui->labelMessage->clear();
    forgotpassword = new Forgotpassword(this);
    forgotpassword->show();
}

