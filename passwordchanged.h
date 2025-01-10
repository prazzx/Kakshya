#ifndef PASSWORDCHANGED_H
#define PASSWORDCHANGED_H

#include <QDialog>

namespace Ui {
class passwordchanged;
}

class passwordchanged : public QDialog
{
    Q_OBJECT

public:
    explicit passwordchanged(QWidget *parent = nullptr);
    ~passwordchanged();

private slots:
    void on_pushButtonOkay_clicked();

private:
    Ui::passwordchanged *ui;
};

#endif // PASSWORDCHANGED_H
