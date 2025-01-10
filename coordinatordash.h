#ifndef COORDINATORDASH_H
#define COORDINATORDASH_H

#include <QDialog>
#include "uploadroutine.h"

namespace Ui {
class coordinatordash;
}

class coordinatordash : public QDialog
{
    Q_OBJECT

public:
    explicit coordinatordash(QWidget *parent = nullptr);
    ~coordinatordash();

private slots:
    void on_pushButtonUpload_clicked();

private:
    Ui::coordinatordash *ui;
    UploadRoutine *up;
};

#endif // COORDINATORDASH_H
