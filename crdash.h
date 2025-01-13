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

private:
    Ui::crdash *ui;
};

#endif // CRDASH_H
