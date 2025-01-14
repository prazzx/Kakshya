#include "coordinatordash.h"
#include "ui_coordinatordash.h"
#include "uploadroutine.h"
#include"loginpage.h"
#include <QDateTime>
#include <QTimer>
#include<QMessageBox>
#include<QDebug>

coordinatordash::coordinatordash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::coordinatordash)
{
    ui->setupUi(this);
    updateColorbox();
    QPixmap pic(":/resources/resources/Kakshya_trans.png");
    int h= ui->logo->height();
    int  w = ui->logo ->width();
    ui->logo->setPixmap(pic.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

coordinatordash::~coordinatordash()
{
    delete ui;
}

void coordinatordash::on_pushButtonUpload_clicked()
{
    up = new UploadRoutine(this);
    up ->showMaximized();
}

void coordinatordash::updateColorbox(){
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &coordinatordash::updateColorbox);
    timer->start(60000);
    QString currentDateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm");
    ui->labelTime->setText(currentDateTime);
    QString test = "";
    if (test.isEmpty()) {
        ui->frame1->setStyleSheet("background-color: green;");
    } else {
        ui->frame1->setStyleSheet("background-color: red; ");
    }
}



void coordinatordash::on_pushButton_clicked()
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
