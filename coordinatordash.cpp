#include "coordinatordash.h"
#include "ui_coordinatordash.h"

CoordinatorDash::CoordinatorDash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CoordinatorDash)
{
    ui->setupUi(this);
}

CoordinatorDash::~CoordinatorDash()
{
    delete ui;
}
