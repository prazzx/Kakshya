#ifndef TEACHERDASH_H
#define TEACHERDASH_H

#include <QDialog>

namespace Ui {
class teacherdash;
}

class teacherdash : public QDialog
{
    Q_OBJECT

public:
    explicit teacherdash(const QString&, QWidget *parent = nullptr);
    ~teacherdash();

private slots:
    void on_pushButton_2_clicked();
    void upcomingClasses();
    void reloadpage();
    void on_Cancel1_clicked();

    void on_Cancel2_clicked();

    void on_Cancel3_clicked();

    void on_pushButtonUpload_clicked();

private:
    Ui::teacherdash *ui;
    bool connectToDatabase();
    QString email;
};

#endif // TEACHERDASH_H
