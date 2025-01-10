#ifndef COORDINATORDASH_H
#define COORDINATORDASH_H

#include <QDialog>

namespace Ui {
class CoordinatorDash;
}

class CoordinatorDash : public QDialog
{
    Q_OBJECT

public:
    explicit CoordinatorDash(QWidget *parent = nullptr);
    ~CoordinatorDash();

private:
    Ui::CoordinatorDash *ui;
};

#endif // COORDINATORDASH_H
