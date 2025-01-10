#include "teacherdash.h"
#include "ui_teacherdash.h"

teacherdash::teacherdash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teacherdash)
{
    ui->setupUi(this);
}

teacherdash::~teacherdash()
{
    delete ui;
}
