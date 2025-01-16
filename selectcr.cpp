#include "selectcr.h"
#include "ui_selectcr.h"
#include"coordinatordash.h"
#include<QMessageBox>


selectcr::selectcr(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::selectcr)
{
    ui->setupUi(this);
}

selectcr::~selectcr()
{
    delete ui;
}

void selectcr::on_pushButton_clicked()
{
    this ->hide();
}


void selectcr::on_pushButtonSignUp_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(
        this,
        "Password Confirmation",
        "Are you sure you want to change the password?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (reply == QMessageBox::Yes) {

    } else {

    }
}




