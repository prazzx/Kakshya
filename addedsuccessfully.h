#ifndef ADDEDSUCCESSFULLY_H
#define ADDEDSUCCESSFULLY_H

#include <QDialog>

namespace Ui {
class addedsuccessfully;
}

class addedsuccessfully : public QDialog
{
    Q_OBJECT

public:
    explicit addedsuccessfully(QWidget *parent = nullptr);
    ~addedsuccessfully();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addedsuccessfully *ui;
};

#endif // ADDEDSUCCESSFULLY_H
