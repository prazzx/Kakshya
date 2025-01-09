#ifndef SIGNUPDIALOG_H
#define SIGNUPDIALOG_H

#include <QDialog>
#include <signupsuccessful.h>


namespace Ui {
class SignupDialog;
}

class SignupDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignupDialog(QWidget *parent = nullptr);
    ~SignupDialog();

private slots:
    void on_pushButtonSignUp_clicked();

private:
    Ui::SignupDialog *ui;
    bool connectToDatabase();
    Signupsuccessful *signupSuccessful;

};

#endif // SIGNUPDIALOG_H
