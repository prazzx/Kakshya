#ifndef COORDINATORDASH_H
#define COORDINATORDASH_H

#include <QDialog>
#include <QDateTime>
#include <QTimer>
#include <QWidget>
#include "uploadroutine.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class selectcr;

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

 void openSelectCRDialog();

private slots:
    void on_pushButtonUpload_clicked();
    void updateColorbox();

    void on_pushButton_clicked();



private:
    Ui::coordinatordash *ui;
    UploadRoutine *up;
    selectcr *sc;
    bool connectToDatabase();
    bool isRoomFree;
};

#endif // COORDINATORDASH_H
