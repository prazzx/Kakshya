#ifndef CRSEARCHCLASS_H
#define CRSEARCHCLASS_H

#include <QDialog>
#include <QDateTime>
#include <QTimer>
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

namespace Ui {
class CRsearchclass;
}

class CRsearchclass : public QDialog
{
    Q_OBJECT


public:
    explicit CRsearchclass(QWidget *parent = nullptr);
    ~CRsearchclass();
       QTimer *timer;

private slots:
    void updateColorbox();
    void showBook();
    void on_pushButton_clicked();

private:
    Ui::CRsearchclass *ui;
    bool connectToDatabase();
    bool isRoomFree;
};

#endif // CRSEARCHCLASS_H
