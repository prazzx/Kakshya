#include "teacherdash.h"
#include "ui_teacherdash.h"
#include"loginpage.h"
#include<QMessageBox>
#include<QDebug>

teacherdash::teacherdash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teacherdash)
{
    ui->setupUi(this);
    QPixmap pic(":/resources/resources/Kakshya_trans.png");
    int h= ui->logo->height();
    int  w = ui->logo ->width();
    ui->logo->setPixmap(pic.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

teacherdash::~teacherdash()
{
    delete ui;
}

void teacherdash::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(
        this,
        "Logout Confirmation",
        "Are you sure you want to logout?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (reply == QMessageBox::Yes) {
        LoginPage *loginPage = new LoginPage(); // Create an instance of LoginPage
        loginPage->show();                     // Show the login page
        this->close();                         // Close the current dashboard window
    } else {
        qDebug() << "No is clicked";
    }
}

