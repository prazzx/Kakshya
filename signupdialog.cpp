#include "signupdialog.h"
#include "ui_signupdialog.h"
#include"loginpage.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionMatch>

SignupDialog::SignupDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignupDialog)
{
    ui->setupUi(this);
    QPixmap pic(":/resources/resources/Kakshya_trans.png");
    int h= ui->label->height();
    int  w = ui->label ->width();
    ui->label->setPixmap(pic.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    this->setWindowIcon(QIcon(":/resources/resources/Kakshya_trans.png"));
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

    if ( name.isEmpty() || phone.isEmpty() || email.isEmpty() || password.isEmpty() || cpassword.isEmpty()) {
        ui->labelMessage->setText("All fields are required.");
        return;
    }

    QRegularExpression emailRegex("^[\\w\\.]+@[\\w]+\\.com$");
    QRegularExpressionMatch emailMatch = emailRegex.match(email);
    if (!emailMatch.hasMatch()) {
        ui->labelMessage->setText("Invalid email address. It must be in the format user@domain.com");
        return;
    }
    QRegularExpression phoneRegex("^\\d{10}$");
    if (!phoneRegex.match(phone).hasMatch()) {
        ui->labelMessage->setText("Invalid phone number. It should contain exactly 10 digits only.");
        return;
    }
    QString tableName;
    if (ui->radioButtonTeacher->isChecked()) {
        tableName = "teacher";
    } else if (ui->radioButtonCoordinator->isChecked()) {
        tableName = "coordinator";
    } else if (ui->radioButtonCR->isChecked()) {
        tableName = "cr";
    } else {
        ui->labelMessage->setText("Please select a role.");
        return;
    }

    if(password!=cpassword){
        ui->labelMessage->setText("Passwords do not match");
        return;
    }
    QStringList tables = {"teacher", "coordinator", "cr"};


    for (const QString &tableName : tables) {



    QSqlQuery checkEmailQuery;
 checkEmailQuery.prepare(QString("SELECT COUNT(*) FROM %1 WHERE email = :email").arg(tableName));
    checkEmailQuery.bindValue(":email", email);
    if (checkEmailQuery.exec() && checkEmailQuery.next()) {
        int count = checkEmailQuery.value(0).toInt();
        if (count > 0) {
            ui->labelMessage->setText("Email already exists.");
            return;
        }
    }

    QSqlQuery checkPhoneQuery;
        checkPhoneQuery.prepare(QString("SELECT COUNT(*) FROM %1 WHERE phone_number = :phone").arg(tableName));
        checkPhoneQuery.bindValue(":phone", phone);
        if (checkPhoneQuery.exec() && checkPhoneQuery.next()) {
            int count = checkPhoneQuery.value(0).toInt();
            if (count > 0) {
                ui->labelMessage->setText("Phone Number Already Exists.");
                return;
            }
        }
    }

    QSqlQuery query;
    query.prepare(QString("INSERT INTO %1 (username, email, password, phone_number) "
                          "VALUES (:username, :email, :password, :phone_number)")
                      .arg(tableName));
    query.bindValue(":username", name);
    query.bindValue(":email", email);
    query.bindValue(":password", password);
    query.bindValue(":phone_number", phone);



    if (query.exec()) {

       QMessageBox::information(this, "Signup Successful", "Thanks for signing up!");
        ui->lineEditName->clear();
        ui->lineEditPhone->clear();
        ui->lineEditEmail->clear();
        ui->lineEditPassword->clear();
        ui->lineEditConfirmpassword->clear();

    } else {
        ui->labelMessage->setText ("Error signing up");
    }
    }


    void SignupDialog::on_pushButton_clicked()
    {
        this->close();
        LoginPage *loginPage = new LoginPage();
        loginPage->showMaximized();

    }

