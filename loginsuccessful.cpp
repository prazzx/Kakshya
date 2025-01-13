#include "loginsuccessful.h"
#include "ui_loginsuccessful.h"

loginsuccessful::loginsuccessful(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginsuccessful)
{
    ui->setupUi(this);
}

loginsuccessful::~loginsuccessful()
{
    delete ui;
}

void loginsuccessful::on_pushButtonOkay_clicked()
{
    close();
}

