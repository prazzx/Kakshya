#ifndef CRLOGINPAGE_H
#define CRLOGINPAGE_H
#include"crdash.h"

#include <QDialog>

namespace Ui {
class crloginpage;
}

class crloginpage : public QDialog
{
    Q_OBJECT

public:
    explicit crloginpage(QWidget *parent = nullptr);
    ~crloginpage();

private slots:
    void on_pushButtonLogin_clicked();

    void on_pushButtonForgotpassword_clicked();

    void on_comboBoxSelect_activated(int index);

    void on_pushButton_clicked();

private:
    Ui::crloginpage *ui;
      bool connectToDatabase();
};

#endif // CRLOGINPAGE_H
