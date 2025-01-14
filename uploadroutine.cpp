#include "uploadroutine.h"
#include "ui_uploadroutine.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "addvaluestoroutine.h"

QString selectedvalue;
QString day;
QString time_slot;

UploadRoutine::UploadRoutine(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UploadRoutine)
{
    ui->setupUi(this);
}

UploadRoutine::~UploadRoutine()
{
    delete ui;
}

bool UploadRoutine::connectToDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("kakshya");
    db.setUserName("root");
    db.setPassword("root");

    if (!db.open()) {
        ui->labelMessage->setText("Failed to connect to database: " + db.lastError().text());
        return false;
    }
    return true;
}


void UploadRoutine::on_pushButtonUpload_clicked()
{
    QString selectedvalue = ui->comboBoxSelect->currentText();
}


    void UploadRoutine::on_pushButton11_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Sunday";
        QString time_slot = "9-11";
            add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
            add->show();
    }
    void UploadRoutine::on_pushButton12_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Monday";
        QString time_slot = "9-11";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }

    void UploadRoutine::on_pushButton13_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Tuesday";
        QString time_slot = "9-11";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }

    void UploadRoutine::on_pushButton14_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Wednesday";
        QString time_slot = "9-11";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }

    void UploadRoutine::on_pushButton15_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Thursday";
        QString time_slot = "9-11";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }

    void UploadRoutine::on_pushButton16_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Friday";
        QString time_slot = "9-11";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }



    void UploadRoutine::on_pushButton21_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Sunday";
        QString time_slot = "12-2";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }

    void UploadRoutine::on_pushButton22_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day ="Monday";
        QString time_slot = "12-2";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }

    void UploadRoutine::on_pushButton23_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Tuesday";
        QString time_slot = "12-2";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }
    void UploadRoutine::on_pushButton24_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Wednesday";
        QString time_slot = "12-2";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }
    void UploadRoutine::on_pushButton25_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Thursday";
        QString time_slot = "12-2";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }
    void UploadRoutine::on_pushButton26_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Friday";
        QString time_slot = "12-2";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }

    void UploadRoutine::on_pushButton31_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Sunday";
        QString time_slot = "2-4";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }

    void UploadRoutine::on_pushButton32_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Monday";
        QString time_slot = "2-4";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }

    void UploadRoutine::on_pushButton33_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Tuesday";
        QString time_slot = "2-4";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }

    void UploadRoutine::on_pushButton34_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Wednesday";
        QString time_slot = "2-4";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }

    void UploadRoutine::on_pushButton35_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Thursday";
        QString time_slot = "2-4";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }

    void UploadRoutine::on_pushButton36_clicked()
    {
        QString selectedvalue = ui->comboBoxSelect->currentText();
        QString day = "Friday";
        QString time_slot = "2-4";
        add = new Addvaluestoroutine(selectedvalue,day,time_slot,this);
        add->show();
    }




    void UploadRoutine::on_pushButton_clicked()
    {
        this->close();

    }

