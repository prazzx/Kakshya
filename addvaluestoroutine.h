#ifndef ADDVALUESTOROUTINE_H
#define ADDVALUESTOROUTINE_H

#include <QDialog>
#include<addedsuccessfully.h>
namespace Ui {
class Addvaluestoroutine;
}

class Addvaluestoroutine : public QDialog
{
    Q_OBJECT

public:
    explicit Addvaluestoroutine(const QString &selectedvalue,const QString &day, const QString &timeSlot,QWidget *parent = nullptr);
    ~Addvaluestoroutine();

private slots:
    void on_pushButtonAdd_clicked();

    void on_pushButtonNo_clicked();

private:
    Ui::Addvaluestoroutine *ui;
    bool connectToDatabase();
    addedsuccessfully *ads;
    QString selectedvalue;
    QString day;
    QString timeSlot;
};

#endif // ADDVALUESTOROUTINE_H
