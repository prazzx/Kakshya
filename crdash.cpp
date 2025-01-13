#include "crdash.h"
#include "ui_crdash.h"

crdash::crdash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::crdash)
{
    ui->setupUi(this);
    QPixmap pic(":/resources/resources/Kakshya_trans.png");
    int h= ui->logo->height();
    int  w = ui->logo ->width();
    ui->logo->setPixmap(pic.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

crdash::~crdash()
{
    delete ui;
}
