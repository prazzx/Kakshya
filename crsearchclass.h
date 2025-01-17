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
    void bookClass();

    void on_pushButton_clicked();

    void on_pushButtonback_clicked();

    void on_Add1_clicked();

    void on_Add2_clicked();

    void on_Add3_clicked();

    void on_Add4_clicked();

    void on_Add5_clicked();
    void on_Add6_clicked();
    void on_Add7_clicked();
    void on_Add8_clicked();
    void on_Add9_clicked();

private:
    Ui::CRsearchclass *ui;
    bool connectToDatabase();
    bool isRoomFree;
};

#endif // CRSEARCHCLASS_H
