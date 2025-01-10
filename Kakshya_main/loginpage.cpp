#include "loginpage.h"
#include "signupdialog.h"
#include "ui_loginpage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , signupDialog(nullptr)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    if (signupDialog)
        delete signupDialog;
}

void MainWindow::on_pushButton_clicked()
{
    close();
    if (!signupDialog) {
        signupDialog = new SignupDialog(this);
    }
    signupDialog->showMaximized();
}
