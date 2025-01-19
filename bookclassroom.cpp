#include "bookclassroom.h"
#include "ui_bookclassroom.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include<QPixmap>


bookClassroom::bookClassroom(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::bookClassroom)
{
    ui->setupUi(this);
}


bookClassroom::~bookClassroom()
{
    delete ui;
}
bool bookClassroom::connectToDatabase()
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


void bookClassroom::on_pushButtonAdd_clicked()
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
            close();
            ads = new addedsuccessfully(this);
            ads->show();
        }
    }
}

