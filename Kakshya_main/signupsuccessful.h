#ifndef SIGNUPSUCCESSFUL_H
#define SIGNUPSUCCESSFUL_H

#include <QDialog>

namespace Ui {
class Signupsuccessful;
}

class Signupsuccessful : public QDialog
{
    Q_OBJECT

public:
    explicit Signupsuccessful(QWidget *parent = nullptr);
    ~Signupsuccessful();

private slots:
    void on_pushButtonOkay_clicked();

private:
    Ui::Signupsuccessful *ui;

};

#endif // SIGNUPSUCCESSFUL_H
