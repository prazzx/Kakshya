#include "addvaluestoroutine.h"
#include "ui_addvaluestoroutine.h"

Addvaluestoroutine::Addvaluestoroutine(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Addvaluestoroutine)
{
    ui->setupUi(this);
}

Addvaluestoroutine::~Addvaluestoroutine()
{
    delete ui;
}
