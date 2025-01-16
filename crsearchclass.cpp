#include "crsearchclass.h"
#include "ui_crsearchclass.h"
#include"crdash.h"
#include <QDateTime>
#include <QTimer>
#include<QMessageBox>
#include<QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

CRsearchclass::CRsearchclass(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CRsearchclass)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &CRsearchclass::updateColorbox);


    timer->start(5000);

    updateColorbox();
    showBook();


    QPixmap pic(":/resources/resources/Kakshya_trans.png");
    int h = ui->logo->height();
    int w = ui->logo->width();
    ui->logo->setPixmap(pic.scaled(h, w, Qt::KeepAspectRatio, Qt::SmoothTransformation));
}


CRsearchclass::~CRsearchclass()
{
    delete ui;
}

bool CRsearchclass::connectToDatabase()
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



void CRsearchclass::updateColorbox()
{
    QString currentDateTime = QDateTime::currentDateTime().toString("dddd HH:mm");
    QString currentDay = QDateTime::currentDateTime().toString("dddd");
    int Time = QDateTime::currentDateTime().toString("HH").toInt();
    ui->labelTime->setText(currentDateTime);

    if (Time >= 16 || Time < 9 || currentDay == "Saturday") {
        ui->frame1->setStyleSheet("background-color: red;");
        ui->frame2->setStyleSheet("background-color: red;");
        ui->frame3->setStyleSheet("background-color: red;");
        ui->frame4->setStyleSheet("background-color: red;");
        ui->frame5->setStyleSheet("background-color: red;");
        ui->frame6->setStyleSheet("background-color: red;");
        ui->frame7->setStyleSheet("background-color: red;");
        ui->frame8->setStyleSheet("background-color: red;");
        ui->frame9->setStyleSheet("background-color: red;");
    } else {
        QStringList tables = {"bit", "cei_i", "cei_ii"};
        QTime currentTime = QTime::currentTime();
        QString currentDay = QDateTime::currentDateTime().toString("dddd");


        for (const QString &table : tables) {
            QSqlQuery query;
            query.prepare(QString("SELECT time_slot, room FROM %1 WHERE day = :day").arg(table));
            query.bindValue(":day", currentDay);

            if (query.exec()) {
                while (query.next()) {
                    QString timeSlot = query.value(0).toString();
                    QString room = query.value(1).toString();

                    if (timeSlot.isEmpty()) {
                        continue;
                    }

                    QStringList times = timeSlot.split("-");
                    if (times.size() == 2) {
                        QTime startTime = QTime::fromString(times[0], "h");
                        QTime endTime = QTime::fromString(times[1], "h");

                        if (currentTime >= startTime && currentTime < endTime) {
                            if (room == "302") ui->frame1->setStyleSheet("background-color: red;");
                            else if (room == "304") ui->frame2->setStyleSheet("background-color: red;");
                            else if (room == "310") ui->frame3->setStyleSheet("background-color: red;");
                            else if (room == "402") ui->frame4->setStyleSheet("background-color: red;");
                            else if (room == "403") ui->frame5->setStyleSheet("background-color: red;");
                            else if (room == "404") ui->frame6->setStyleSheet("background-color: red;");
                            else if (room == "201") ui->frame7->setStyleSheet("background-color: red;");
                            else if (room == "202") ui->frame8->setStyleSheet("background-color: red;");
                            else if (room == "203") ui->frame9->setStyleSheet("background-color: red;");
                        }
                    }
                }
            } else {
                qDebug() << "Query failed for table" << table << ":" << query.lastError().text();
            }
        }


        if (ui->frame1->styleSheet() != "background-color: red;") ui->frame1->setStyleSheet("background-color: green;");
        if (ui->frame2->styleSheet() != "background-color: red;") ui->frame2->setStyleSheet("background-color: green;");
        if (ui->frame3->styleSheet() != "background-color: red;") ui->frame3->setStyleSheet("background-color: green;");
        if (ui->frame4->styleSheet() != "background-color: red;") ui->frame4->setStyleSheet("background-color: green;");
        if (ui->frame5->styleSheet() != "background-color: red;") ui->frame5->setStyleSheet("background-color: green;");
        if (ui->frame6->styleSheet() != "background-color: red;") ui->frame6->setStyleSheet("background-color: green;");
        if (ui->frame7->styleSheet() != "background-color: red;") ui->frame7->setStyleSheet("background-color: green;");
        if (ui->frame8->styleSheet() != "background-color: red;") ui->frame8->setStyleSheet("background-color: green;");
        if (ui->frame9->styleSheet() != "background-color: red;") ui->frame9->setStyleSheet("background-color: green;");
    }
}


void CRsearchclass::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(
        this,
        "Logout Confirmation",
        "Are you sure you want to logout?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (reply == QMessageBox::Yes) {
        this->close();
        crdash *crd = new crdash();
        crd->showMaximized();
    } else {
        qDebug() << "No is clicked";
    }
}

    void CRsearchclass::showBook(){
        /*
        if (!ui->frame1->styleSheet().contains("background-color: red", Qt::CaseInsensitive)){
            ui->Book1->show();
        }
        else{
            ui->Book1->hide();
        }
        if (!ui->frame2->styleSheet().contains("background-color: red", Qt::CaseInsensitive))
        {
            ui->Book2->show();
        }
        else{
            ui->Book2->hide();
        }
        if (!ui->frame3->styleSheet().contains("background-color: red", Qt::CaseInsensitive)){
            ui->Book3->show();
        }
        else{
            ui->Book3->hide();
        }
       if (!ui->frame4->styleSheet().contains("background-color: red", Qt::CaseInsensitive)) {
            ui->Book4->show();
        }
        else{
            ui->Book4->hide();
        }
        if (!ui->frame5->styleSheet().contains("background-color: red", Qt::CaseInsensitive)) {
            ui->Book5->show();
        }
        else{
            ui->Book5->hide();
        }
        if (!ui->frame6->styleSheet().contains("background-color: red", Qt::CaseInsensitive)) {
            ui->Book6->show();
        }
        else{
            ui->Book6->hide();
        }
        if (!ui->frame7->styleSheet().contains("background-color: red", Qt::CaseInsensitive)) {
            ui->Book7->show();
        }
        else{
            ui->Book7->hide();
        }
        if (!ui->frame8->styleSheet().contains("background-color: red", Qt::CaseInsensitive)) {
            ui->Book8->show();
        }
        else{
            ui->Book8->hide();
        }
        if (!ui->frame9->styleSheet().contains("background-color: red", Qt::CaseInsensitive)) {
            ui->Book9->show();
        }
        else{
            ui->Book9->hide();
        }
*/
    }







