#include "teacherdash.h"
#include "ui_teacherdash.h"

TeacherDash::TeacherDash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TeacherDash)
{
    ui->setupUi(this);
}

TeacherDash::~TeacherDash()
{
    delete ui;
}
