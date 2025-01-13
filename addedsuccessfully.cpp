#include "addedsuccessfully.h"
#include "ui_addedsuccessfully.h"

addedsuccessfully::addedsuccessfully(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addedsuccessfully)
{
    ui->setupUi(this);
}

addedsuccessfully::~addedsuccessfully()
{
    delete ui;
}

void addedsuccessfully::on_pushButton_clicked()
{
    close();
}

