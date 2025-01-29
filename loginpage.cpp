#include "loginpage.h"
#include "qsqldatabase.h"
#include "signupdialog.h"
#include "ui_loginpage.h"
#include "coordinatordash.h"
#include "crdash.h"
#include"studentdash.h"
#include "teacherdash.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include<QPixmap>
LoginPage::LoginPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    QPixmap pic(":/resources/resources/Kakshya_trans.png");
    int h= ui->logo->height();
    int  w = ui->logo ->width();
    ui->logo->setPixmap(pic.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_pushButtonSignup_clicked()
{
    this->close();
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
             QMessageBox::information(this, "Login Successful", "You have successfully logged in!");
            ui->lineEditEmail->clear();
            ui->lineEditPassword->clear();
            close();
            if(tableName=="coordinator"){
                codash = new coordinatordash(this);
                codash->showMaximized();
            }
            else if(tableName=="teacher"){
                tdash = new teacherdash(email,this);
                tdash->showMaximized();
            }
            else if(tableName=="cr"){
                stdash = new studentdash(this);
                stdash->showMaximized();
            }




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

