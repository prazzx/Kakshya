#ifndef STUDENTDASH_H
#define STUDENTDASH_H
#include"crloginpage.h"

#include <QDialog>

namespace Ui {
class studentdash;
}

class studentdash : public QDialog
{
    Q_OBJECT

public:
    explicit studentdash(QWidget *parent = nullptr);
    ~studentdash();

private slots:
    void on_pushButtonUpload_clicked();
    void on_pushButton_2_clicked();
    void StatusReveal();

private:
    Ui::studentdash *ui;
    crloginpage *crl;
     bool connectToDatabase();
};

#endif // STUDENTDASH_H
