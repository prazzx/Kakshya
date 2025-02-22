#include "signupsuccessful.h"
#include "ui_signupsuccessful.h"

Signupsuccessful::Signupsuccessful(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Signupsuccessful)
{
    ui->setupUi(this);
}

Signupsuccessful::~Signupsuccessful()
{
    delete ui;
}

void Signupsuccessful::on_pushButtonOkay_clicked()
{
    close();
}

