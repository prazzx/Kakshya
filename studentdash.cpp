#include "studentdash.h"
#include "ui_studentdash.h"
#include"crdash.h"

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
    crdash *dashboard = new crdash(); // Create an instance of crdash
    dashboard->show();                // Show the CR dashboard
    this->close();                            // Close the current dashboard window
}

