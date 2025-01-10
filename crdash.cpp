#include "crdash.h"
#include "ui_crdash.h"

CRDash::CRDash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CRDash)
{
    ui->setupUi(this);
}

CRDash::~CRDash()
{
    delete ui;
}
