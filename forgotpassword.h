#ifndef FORGOTPASSWORD_H
#define FORGOTPASSWORD_H

#include <QDialog>
#include <passwordchanged.h>

namespace Ui {
class Forgotpassword;
}

class Forgotpassword : public QDialog
{
    Q_OBJECT

public:
    explicit Forgotpassword(QWidget *parent = nullptr);
    ~Forgotpassword();

private slots:
    void on_pushButtonChangepassword_clicked();

private:
    Ui::Forgotpassword *ui;
    passwordchanged *pass;
     bool connectToDatabase();
};

#endif // FORGOTPASSWORD_H
