#include "coordinatordash.h"
#include "ui_coordinatordash.h"
#include "uploadroutine.h"

coordinatordash::coordinatordash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::coordinatordash)
{
    ui->setupUi(this);
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

