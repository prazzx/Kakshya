#ifndef SELECTCR_H
#define SELECTCR_H

#include <QDialog>
#include"coordinatordash.h"
namespace Ui {
class selectcr;
}

class selectcr : public QDialog
{
    Q_OBJECT

public:
    explicit selectcr(QWidget *parent = nullptr);
    ~selectcr();

private slots:
    void on_pushButton_clicked();

    void on_pushButtonSignUp_clicked();

    void on_comboBoxSelect_activated(int index);

private:
    Ui::selectcr *ui;
    coordinatordash *codash;
      bool connectToDatabase();
};

#endif // SELECTCR_H
