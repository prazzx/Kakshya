#ifndef TEACHERDASH_H
#define TEACHERDASH_H

#include <QDialog>

namespace Ui {
class TeacherDash;
}

class TeacherDash : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherDash(QWidget *parent = nullptr);
    ~TeacherDash();

private:
    Ui::TeacherDash *ui;
};

#endif // TEACHERDASH_H
