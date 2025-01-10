#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include "passwordchanged.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

Forgotpassword::Forgotpassword(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Forgotpassword)
{
    ui->setupUi(this);
}

Forgotpassword::~Forgotpassword()
{
    delete ui;
}

bool Forgotpassword::connectToDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("kakshya");
    db.setUserName("root");
    db.setPassword("root");

    if (!db.open()) {
        ui->labelMessage->setText("Database connection failed: ");
        return false;
    }
    return true;
}
void Forgotpassword::on_pushButtonChangepassword_clicked()
{
    if (!connectToDatabase())
        return;

    QString email = ui->lineEditEmail->text();
    QString phone = ui->lineEditPhone->text();
    QString password = ui->lineEditNewpassword->text();
    QString cpassword = ui->lineEditConfirmpassword->text();


    if (email.isEmpty() || password.isEmpty() || phone.isEmpty() ||  cpassword.isEmpty()) {
        ui->labelMessage->setText("Please fill in all fields.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT phone_number FROM users WHERE email = :email");
    query.bindValue(":email", email);

    if (query.exec() && query.next()) {

        QString storedPhone = query.value(0).toString();

        if (storedPhone != phone) {
            ui->labelMessage->setText("Invalid phone number.");
        } else {



            if (password != cpassword) {
                ui->labelMessage->setText("Passwords do not match.");
                return;
            }

            QSqlQuery updateQuery;
            updateQuery.prepare("UPDATE users SET password = :newPassword WHERE email = :email");
            updateQuery.bindValue(":newPassword", password);
            updateQuery.bindValue(":email", email);

            if (updateQuery.exec()) {
                close();
                pass = new passwordchanged(this);
                pass->show();
            }

        }
    } else {

        ui->labelMessage->setText("Invalid email.");
    }
}







