#ifndef CRDASH_H
#define CRDASH_H

#include <QDialog>
#include <QDialog>
#include <QDateTime>
#include <QTimer>
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <crsearchclass.h>
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
    void StatusReveal();

    void on_pushButtonUpload_clicked();

private:
    Ui::crdash *ui;
    CRsearchclass *crsearch;
    bool connectToDatabase();
};

#endif // CRDASH_H
