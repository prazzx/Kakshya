#include "forgotpassword.h"
#include "ui_forgotpassword.h"
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

    if (email.isEmpty() || password.isEmpty() || phone.isEmpty() || cpassword.isEmpty()) {
        ui->labelMessage->setText("Please fill in all fields.");
        return;
    }

    if (password != cpassword) {
        ui->labelMessage->setText("Passwords do not match.");
        return;
    }

    QStringList tables = {"teacher", "coordinator", "cr"};
    bool recordFound = false;

    for (const QString &table : tables) {
        QSqlQuery query;
        query.prepare(QString("SELECT phone_number FROM %1 WHERE email = :email").arg(table));
        query.bindValue(":email", email);

        if (query.exec() && query.next()) {
            recordFound = true;

            QString storedPhone = query.value(0).toString();
            if (storedPhone != phone) {
                ui->labelMessage->setText("Invalid phone number.");
                return;
            }


            QSqlQuery updateQuery;
            updateQuery.prepare(QString("UPDATE %1 SET password = :newPassword WHERE email = :email").arg(table));
            updateQuery.bindValue(":newPassword", password);
            updateQuery.bindValue(":email", email);

            if (updateQuery.exec()) {
                 QMessageBox::information(this, " Password changed", "Congrats! password changed sucessfully");
                return;
            } else {
                ui->labelMessage->setText("Failed to update password: " + updateQuery.lastError().text());
                return;
            }
        }
    }

    if (!recordFound) {
        ui->labelMessage->setText("Invalid email.");
    }
}








