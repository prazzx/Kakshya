#ifndef TEACHERSEARCH_H
#define TEACHERSEARCH_H

#include <QDialog>

namespace Ui {
class Teachersearch;
}

class Teachersearch : public QDialog
{
    Q_OBJECT

public:
    explicit Teachersearch(const QString&,QWidget *parent = nullptr);
    ~Teachersearch();
     QTimer *timer;
    void updateColorbox();


private slots:
    void on_pushButtonBack_clicked();
    void on_pushButton_clicked();

private:
    Ui::Teachersearch *ui;
    bool connectToDatabase();
    QString email;
};

#endif // TEACHERSEARCH_H
