#include "teacherdash.h"
#include "ui_teacherdash.h"
#include"loginpage.h"
#include<teachersearch.h>
#include<QMessageBox>
#include<QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDateTime>
#include<QString>

teacherdash::teacherdash(const QString &email,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teacherdash)
    ,email(email)
{
    ui->setupUi(this);
    upcomingClasses();
    QPixmap pic(":/resources/resources/Kakshya_trans.png");
    int h= ui->logo->height();
    int  w = ui->logo ->width();
    ui->logo->setPixmap(pic.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

teacherdash::~teacherdash()
{
    delete ui;
}

void teacherdash::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(
        this,
        "Logout Confirmation",
        "Are you sure you want to logout?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (reply == QMessageBox::Yes) {
        LoginPage *loginPage = new LoginPage();
        loginPage->showMaximized();
        this->close();
    } else {
        qDebug() << "No is clicked";
    }
}

bool teacherdash::connectToDatabase()
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

void teacherdash::upcomingClasses(){
    QSqlQuery query1;
    query1.prepare("Select username from teacher where email = :email;");
    query1.bindValue(":email",email);
    if(query1.exec()&&query1.next()){
        QString name = query1.value(0).toString();


    QString currentDateTime = QDateTime::currentDateTime().toString("dddd HH:mm");
    ui->labelTime->setText(currentDateTime);


    int Time = QDateTime::currentDateTime().toString("HH").toInt();
    if(Time>=16 && Time<=24){
        ui->Time1->setText("-");
        ui->Time2->setText("-");
        ui->Time3->setText("-");

        ui->Rno1->setText("-");
        ui->Rno2->setText("-");
        ui->Rno3->setText("-");

        ui->Batch1->setText("-");
        ui->Batch2->setText("-");
        ui->Batch3->setText("-");
    }
    else{
        ui->Time1->setText("-");
        ui->Time2->setText("-");
        ui->Time3->setText("-");
        ui->Rno1->setText("-");
        ui->Rno2->setText("-");
        ui->Rno3->setText("-");
        ui->Batch1->setText("-");
        ui->Batch2->setText("-");
        ui->Batch3->setText("-");
        QStringList tables = {"bit", "cei_i", "cei_ii"};
        QString currentDay = QDateTime::currentDateTime().toString("dddd");


        for (const QString &table : tables) {
            QSqlQuery query;
            query.prepare(QString("SELECT time_slot, room FROM %1 WHERE day = :day AND instructor= :name").arg(table));
            query.bindValue(":day", currentDay);
            query.bindValue(":name", name);

            if (query.exec()) {
                while (query.next()) {
                    QString timeSlot = query.value(0).toString();
                    QString room = query.value(1).toString();


                if(timeSlot=="9-11"){
                    ui->Time1->setText("9-11");
                    ui->Rno1->setText(room);
                    ui->Batch1->setText(table.toUpper());
                }
                if(timeSlot=="12-14"){
                    ui->Time2->setText("12-2");
                    ui->Rno2->setText(room);
                    ui->Batch2->setText(table.toUpper());
                }
                if(timeSlot=="14-16"){
                    ui->Time3->setText("2-4");
                    ui->Rno3->setText(room);
                    ui->Batch3->setText(table.toUpper());
                }

                }   }   }}}}





void teacherdash::on_Cancel1_clicked()
{
    QSqlQuery query1;
    query1.prepare("Select username from teacher where email = :email;");
    query1.bindValue(":email",email);
    if(query1.exec()&&query1.next()){
        QString name = query1.value(0).toString();

    QString currentDay = QDateTime::currentDateTime().toString("dddd");
    QString table = ui->Batch1->text();
    QSqlQuery updateQuery;
    updateQuery.prepare(QString("DELETE FROM %1 WHERE day = :day AND time_slot = :time AND instructor = :name").arg(table.toLower()));
    updateQuery.bindValue(":day", currentDay);
    updateQuery.bindValue(":time", "9-11");
    updateQuery.bindValue(":name", name);
      if (updateQuery.exec()) {
    QMessageBox msgBox;
    msgBox.setWindowTitle("Success");
    msgBox.setText("Class cancelled successfully.");
    msgBox.setStandardButtons(QMessageBox::Ok);
    connect(&msgBox, &QMessageBox::accepted, this, &teacherdash::reloadpage);
    msgBox.exec();
      }
    }

}

void teacherdash::on_Cancel2_clicked()
{
    QSqlQuery query1;
    query1.prepare("Select username from teacher where email = :email;");
    query1.bindValue(":email",email);
    if(query1.exec()&&query1.next()){
        QString name = query1.value(0).toString();

        QString currentDay = QDateTime::currentDateTime().toString("dddd");
        QString table = ui->Batch2->text();
        QSqlQuery updateQuery;
        updateQuery.prepare(QString("DELETE FROM %1 WHERE day = :day AND time_slot = :time AND instructor = :name").arg(table.toLower()));
        updateQuery.bindValue(":day", currentDay);
        updateQuery.bindValue(":time", "12-14");
        updateQuery.bindValue(":name", name);
        if (updateQuery.exec()) {
            QMessageBox msgBox;
            msgBox.setWindowTitle("Success");
            msgBox.setText("Class cancelled successfully.");
            msgBox.setStandardButtons(QMessageBox::Ok);
            connect(&msgBox, &QMessageBox::accepted, this, &teacherdash::reloadpage);
            msgBox.exec();
        }
    }
}


void teacherdash::on_Cancel3_clicked()
{
    QSqlQuery query1;
    query1.prepare("Select username from teacher where email = :email;");
    query1.bindValue(":email",email);
    if(query1.exec()&&query1.next()){
        QString name = query1.value(0).toString();

        QString currentDay = QDateTime::currentDateTime().toString("dddd");
        QString table = ui->Batch3->text();
        QSqlQuery updateQuery;
        updateQuery.prepare(QString("DELETE FROM %1 WHERE day = :day AND time_slot = :time AND instructor = :name").arg(table.toLower()));
        updateQuery.bindValue(":day", currentDay);
        updateQuery.bindValue(":time", "14-16");
        updateQuery.bindValue(":name", name);
        if (updateQuery.exec()) {
            QMessageBox msgBox;
            msgBox.setWindowTitle("Success");
            msgBox.setText("Class cancelled successfully.");
            msgBox.setStandardButtons(QMessageBox::Ok);
            connect(&msgBox, &QMessageBox::accepted, this, &teacherdash::reloadpage);
            msgBox.exec();
        }
    }
}

void teacherdash::reloadpage(){
    this->close();
    teacherdash *td = new teacherdash(email);
    td->showMaximized();
}


void teacherdash::on_pushButtonUpload_clicked()
{
    this->close();
    Teachersearch *ts = new Teachersearch(email,this);
    ts->showMaximized();
}



