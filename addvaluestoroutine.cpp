#include "addvaluestoroutine.h"
#include "ui_addvaluestoroutine.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include<QPixmap>

Addvaluestoroutine::Addvaluestoroutine(const QString &selectedvalue,const QString &day, const QString &timeSlot,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Addvaluestoroutine)
    , selectedvalue(selectedvalue)
    , day(day)
    , timeSlot(timeSlot)
{
    ui->setupUi(this);
}

Addvaluestoroutine::~Addvaluestoroutine()
{
    delete ui;
}

bool Addvaluestoroutine::connectToDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("kakshya");
    db.setUserName("root");
    db.setPassword("root");

    if (!db.open()) {
        return false;
    }
    return true;
}


void Addvaluestoroutine::on_pushButtonAdd_clicked()
{

    QString sname = ui->lineEditsname->text();
    QString tname = ui->lineEdittname->text();
    QString rno = ui->lineEditrno->text();

    QSqlQuery dquery;
    dquery.prepare(QString("DELETE FROM %1 where day = :day AND time_slot = :timeslot")
                      .arg(selectedvalue));
    dquery.bindValue(":day", day);
    dquery.bindValue(":timeslot", timeSlot);

    if(dquery.exec()){
    QSqlQuery query;
    query.prepare(QString("INSERT INTO %1 (day,time_slot,subject_name,instructor,room) "
                          "VALUES (:day, :timeslot, :sname, :tname, :rno)")
                      .arg(selectedvalue));
    query.bindValue(":day", day);
    query.bindValue(":timeslot", timeSlot);
    query.bindValue(":sname", sname);
    query.bindValue(":tname", tname);
    query.bindValue(":rno", rno);
    if(query.exec()){
        this->close();
       QMessageBox::information(this, "Success", "Routine added successfully!");
    }
}
}


void Addvaluestoroutine::on_pushButtonNo_clicked()
{
    QSqlQuery query;
    query.prepare(QString("INSERT INTO %1 (day,time_slot,subject_name,instructor,room) "
                          "VALUES (:day, :timeslot, :sname, :tname, :rno)")
                      .arg(selectedvalue));
    query.bindValue(":day",day);
    query.bindValue(":timeslot",  timeSlot);
    query.bindValue(":sname", "");
    query.bindValue(":tname",  "");
    query.bindValue(":rno",  "");
    if(query.exec()){
       QMessageBox::information(this, "Success", "Routine added successfully!");
    }

}




