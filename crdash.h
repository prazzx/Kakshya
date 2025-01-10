#ifndef CRDASH_H
#define CRDASH_H

#include <QDialog>

namespace Ui {
class CRDash;
}

class CRDash : public QDialog
{
    Q_OBJECT

public:
    explicit CRDash(QWidget *parent = nullptr);
    ~CRDash();

private:
    Ui::CRDash *ui;
};

#endif // CRDASH_H
