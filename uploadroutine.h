#ifndef UPLOADROUTINE_H
#define UPLOADROUTINE_H

#include <QDialog>
#include "addvaluestoroutine.h"


namespace Ui {
class UploadRoutine;
}

class UploadRoutine : public QDialog
{
    Q_OBJECT

public:
    explicit UploadRoutine(QWidget *parent = nullptr);
    ~UploadRoutine();

private slots:


    void on_pushButton11_clicked();
    void on_pushButton12_clicked();
    void on_pushButton13_clicked();
    void on_pushButton14_clicked();
    void on_pushButton15_clicked();
    void on_pushButton16_clicked();

    void on_pushButton21_clicked();
    void on_pushButton22_clicked();
    void on_pushButton23_clicked();
    void on_pushButton24_clicked();
    void on_pushButton25_clicked();
    void on_pushButton26_clicked();

    void on_pushButton31_clicked();
    void on_pushButton32_clicked();
    void on_pushButton33_clicked();
    void on_pushButton34_clicked();
    void on_pushButton35_clicked();
    void on_pushButton36_clicked();


    void on_pushButton_clicked();

    void on_pushButtonUpload_clicked();

private:
    Ui::UploadRoutine *ui;
    Addvaluestoroutine *add;
    bool connectToDatabase();

};

#endif // UPLOADROUTINE_H
