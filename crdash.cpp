#include "crdash.h"
#include "ui_crdash.h"
#include"loginpage.h"
#include<QMessageBox>
#include<QDebug>


#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

crdash::crdash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::crdash)
{
    ui->setupUi(this);
    StatusReveal();
    connect(ui->comboBoxSelect, SIGNAL(currentTextChanged(const QString &)), this, SLOT(StatusReveal()));
    QPixmap pic(":/resources/resources/Kakshya_trans.png");
    int h= ui->logo->height();
    int  w = ui->logo ->width();
    ui->logo->setPixmap(pic.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

crdash::~crdash()
{
    delete ui;
}

void crdash::on_pushButton_2_clicked()
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


bool crdash::connectToDatabase()
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

void crdash::StatusReveal(){
    QString currentDateTime = QDateTime::currentDateTime().toString("dddd HH:mm");
    ui->labelTime->setText(currentDateTime);
    int Time = QDateTime::currentDateTime().toString("HH").toInt();
    if(Time>16 && Time<24){
        ui->widget1->setStyleSheet("background-color: red ;");
        ui->Status1->setText("Classes Ended");
        ui->widget2->setStyleSheet("background-color: red ;");
        ui->Status2->setText("Classes Ended");
        ui->widget3->setStyleSheet("background-color: red ;");
        ui->Status3->setText("Classes Ended");

    }
    else{
     QString selectedvalue = ui->comboBoxSelect->currentText();
     QString currentDay = QDateTime::currentDateTime().toString("dddd");

     QSqlQuery query;
     query.prepare(QString("SELECT * FROM %1 WHERE day = :day AND time_slot = :timeSlot").arg(selectedvalue));
     query.bindValue(":day", currentDay);
     query.bindValue(":timeSlot","9-11");
     if (query.exec()&&query.next()) {
             QString subject1 = query.value(3).toString();
             QString room1 = query.value(5).toString();
             if(subject1==""&&room1==""){
                 ui->Subject1->clear();
                 ui->rno1->clear();
                 ui->Status1->clear();
                 ui->widget1->setStyleSheet("background-color: red ;");
                 ui->Status1->setText("No class");
             }
             else{
                 ui->Subject1->clear();
                 ui->rno1->clear();
                 ui->Status1->clear();
                 ui->rno1->setText(room1);
                 ui->Subject1->setText(subject1);
                 ui->widget1->setStyleSheet("background-color: green ;");
                 ui->Status1->setText("Scheduled");
             }}

    QSqlQuery squery;
    squery.prepare(QString("SELECT * FROM %1 WHERE day = :day AND time_slot = :timeSlot").arg(selectedvalue));
    squery.bindValue(":day", currentDay);
    squery.bindValue(":timeSlot","12-14");
    if (squery.exec()&&squery.next()) {
        QString subject2 = squery.value(3).toString();
        QString room2 = squery.value(5).toString();
        if(subject2==""&&room2==""){
            ui->Subject2->clear();
            ui->rno2->clear();
            ui->Status2->clear();
            ui->widget2->setStyleSheet("background-color: red ;");
            ui->Status2->setText("No class");
        }
        else{
            ui->Subject2->clear();
            ui->rno2->clear();
            ui->Status2->clear();
            ui->rno2->setText(room2);
            ui->Subject2->setText(subject2);
            ui->widget2->setStyleSheet("background-color: green ;");
            ui->Status2->setText("Scheduled");
        }}

    QSqlQuery pquery;
    pquery.prepare(QString("SELECT * FROM %1 WHERE day = :day AND time_slot = :timeSlot").arg(selectedvalue));
    pquery.bindValue(":day", currentDay);
    pquery.bindValue(":timeSlot","14-16");
    if (pquery.exec()&&pquery.next()) {
        QString subject3 = pquery.value(3).toString();
        QString room3 = pquery.value(5).toString();
        if(subject3==""&&room3==""){
            ui->Subject3->clear();
            ui->rno3->clear();
            ui->Status3->clear();
            ui->widget3->setStyleSheet("background-color: red ;");
            ui->Status3->setText("No class");
        }
        else{
            ui->Subject3->clear();
            ui->rno3->clear();
            ui->Status3->clear();
            ui->rno3->setText(room3);
            ui->Subject3->setText(subject3);
            ui->widget3->setStyleSheet("background-color: green ;");
            ui->Status3->setText("Scheduled");
        }} }













}

