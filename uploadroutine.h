#ifndef UPLOADROUTINE_H
#define UPLOADROUTINE_H

#include <QDialog>


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

private:
    Ui::UploadRoutine *ui;
    bool connectToDatabase();

};

#endif // UPLOADROUTINE_H
