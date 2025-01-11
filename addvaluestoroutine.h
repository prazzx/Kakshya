#ifndef ADDVALUESTOROUTINE_H
#define ADDVALUESTOROUTINE_H

#include <QDialog>

namespace Ui {
class Addvaluestoroutine;
}

class Addvaluestoroutine : public QDialog
{
    Q_OBJECT

public:
    explicit Addvaluestoroutine(QWidget *parent = nullptr);
    ~Addvaluestoroutine();

private:
    Ui::Addvaluestoroutine *ui;
};

#endif // ADDVALUESTOROUTINE_H
