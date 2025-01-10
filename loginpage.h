#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDialog>
#include "signupdialog.h"
#include "forgotpassword.h"


namespace Ui { class LoginPage; }


class LoginPage : public QDialog
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

private slots:


    void on_pushButtonSignup_clicked();

    void on_pushButtonLogin_clicked();



    void on_pushButtonForgotpassword_clicked();

private:
    Ui::LoginPage *ui;
    SignupDialog *signupDialog;
    Forgotpassword *forgotpassword;
    bool connectToDatabase();
};

#endif // LOGINPAGE_H
