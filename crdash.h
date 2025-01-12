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

private:
    Ui::crdash *ui;
    bool connectToDatabase();
};

#endif // CRDASH_H
