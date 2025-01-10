#include "passwordchanged.h"
#include "ui_passwordchanged.h"

passwordchanged::passwordchanged(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::passwordchanged)
{
    ui->setupUi(this);
}

passwordchanged::~passwordchanged()
{
    delete ui;
}

void passwordchanged::on_pushButtonOkay_clicked()
{
    close();
}

