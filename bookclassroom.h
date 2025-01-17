#ifndef BOOKCLASSROOM_H
#define BOOKCLASSROOM_H

#include <QDialog>
#include<addedsuccessfully.h>

namespace Ui {
class bookClassroom;
}

class bookClassroom : public QDialog
{
    Q_OBJECT

public:
    explicit bookClassroom(QWidget *parent = nullptr);
    ~bookClassroom();

private slots:
    void on_pushButtonAdd_clicked();

private:
    Ui::bookClassroom *ui;
    bool connectToDatabase();
    addedsuccessfully *ads;

};

#endif // BOOKCLASSROOM_H
