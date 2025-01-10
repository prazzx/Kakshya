#include "uploadroutine.h"
#include "ui_uploadroutine.h"
#include <QComboBox>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include <QApplication>

UploadRoutine::UploadRoutine(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UploadRoutine)
{
    ui->setupUi(this);
}

UploadRoutine::~UploadRoutine()
{
    delete ui;
}

