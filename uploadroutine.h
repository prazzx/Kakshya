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
    void on_pushButtonUpload_clicked();

    void on_pushButton11_clicked();

private:
    Ui::UploadRoutine *ui;
    Addvaluestoroutine *add;
    bool connectToDatabase();

};

#endif // UPLOADROUTINE_H
