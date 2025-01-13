#include "coordinatordash.h"
#include "ui_coordinatordash.h"
#include "uploadroutine.h"

coordinatordash::coordinatordash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::coordinatordash)
{
    ui->setupUi(this);
    QPixmap pic(":/resources/resources/Kakshya_trans.png");
    int h= ui->logo->height();
    int  w = ui->logo ->width();
    ui->logo->setPixmap(pic.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

coordinatordash::~coordinatordash()
{
    delete ui;
}

void coordinatordash::on_pushButtonUpload_clicked()
{
    up = new UploadRoutine(this);
    up ->showMaximized();
}

