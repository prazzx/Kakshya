#include "teacherdash.h"
#include "ui_teacherdash.h"

teacherdash::teacherdash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teacherdash)
{
    ui->setupUi(this);
    QPixmap pic(":/resources/resources/Kakshya_trans.png");
    int h= ui->logo->height();
    int  w = ui->logo ->width();
    ui->logo->setPixmap(pic.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

teacherdash::~teacherdash()
{
    delete ui;
}
