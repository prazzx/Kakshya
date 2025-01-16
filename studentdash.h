#ifndef STUDENTDASH_H
#define STUDENTDASH_H

#include <QDialog>

namespace Ui {
class studentdash;
}

class studentdash : public QDialog
{
    Q_OBJECT

public:
    explicit studentdash(QWidget *parent = nullptr);
    ~studentdash();

private slots:
    void on_pushButtonUpload_clicked();

private:
    Ui::studentdash *ui;
};

#endif // STUDENTDASH_H
