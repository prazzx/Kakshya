#ifndef STUDENTCHECKCLASS_H
#define STUDENTCHECKCLASS_H

#include <QDialog>

namespace Ui {
class studentcheckclass;
}

class studentcheckclass : public QDialog
{
    Q_OBJECT

public:
    explicit studentcheckclass(QWidget *parent = nullptr);
    ~studentcheckclass();
    QTimer *timer;

private slots:
    void updateColorbox();


    void on_pushButton_clicked();

    void on_pushButtonback_clicked();

private:
    Ui::studentcheckclass *ui;
bool connectToDatabase();
};

#endif // STUDENTCHECKCLASS_H
