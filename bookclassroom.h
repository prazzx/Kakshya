#ifndef BOOKCLASSROOM_H
#define BOOKCLASSROOM_H

#include <QDialog>


namespace Ui {
class bookClassroom;
}

class bookClassroom : public QDialog
{
    Q_OBJECT

public:
    explicit bookClassroom(const QString&,QWidget *parent = nullptr);
    ~bookClassroom();

private slots:
    void on_pushButtonAdd_clicked();

private:
    Ui::bookClassroom *ui;
    bool connectToDatabase();
    QString rno;

};

#endif // BOOKCLASSROOM_H
