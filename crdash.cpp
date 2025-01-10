#include "crdash.h"
#include "ui_crdash.h"

crdash::crdash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::crdash)
{
    ui->setupUi(this);
}

crdash::~crdash()
{
    delete ui;
}
