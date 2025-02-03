#include "studentdash.h"
#include "ui_studentdash.h"
#include"crdash.h"
#include "crloginpage.h"
studentdash::studentdash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::studentdash)
{
    ui->setupUi(this);
}

studentdash::~studentdash()
{
    delete ui;
}

void studentdash::on_pushButtonUpload_clicked()
{
    crloginpage *crl = new crloginpage(); // tyo ra tesko pointer le naya instance banaune
    crl->show();
    this->close();
  // Close the current dashboard window
}

