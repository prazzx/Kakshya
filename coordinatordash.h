#ifndef COORDINATORDASH_H
#define COORDINATORDASH_H

#include <QDialog>
#include <QDateTime>
#include <QTimer>
#include <QWidget>
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
    QTimer *timer;



private slots:
    void on_pushButtonUpload_clicked();
    void updateColorbox();

private:
    Ui::coordinatordash *ui;
    UploadRoutine *up;
};

#endif // COORDINATORDASH_H
