#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include "signupdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    SignupDialog *signupDialog;
};

#endif // LOGINPAGE_H
