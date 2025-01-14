#ifndef CRDASH_H
#define CRDASH_H

#include <QDialog>

namespace Ui {
class crdash;
}

class crdash : public QDialog
{
    Q_OBJECT

public:
    explicit crdash(QWidget *parent = nullptr);
    ~crdash();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::crdash *ui;
};

#endif // CRDASH_H
