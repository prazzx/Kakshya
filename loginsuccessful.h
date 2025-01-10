#ifndef LOGINSUCCESSFUL_H
#define LOGINSUCCESSFUL_H

#include <QDialog>


namespace Ui {
class loginsuccessful;
}

class loginsuccessful : public QDialog
{
    Q_OBJECT

public:
    explicit loginsuccessful(QWidget *parent = nullptr);
    ~loginsuccessful();

private slots:
    void on_pushButtonOkay_clicked();

private:
    Ui::loginsuccessful *ui;
};

#endif // LOGINSUCCESSFUL_H
