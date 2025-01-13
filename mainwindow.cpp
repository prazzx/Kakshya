#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap> // for allowing to create object of qpixmap that allows 1 arg
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   ;

}

MainWindow::~MainWindow()
{
    delete ui;
}
