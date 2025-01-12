#include "coordinatordash.h"
#include "ui_coordinatordash.h"
#include "uploadroutine.h"
#include"loginpage.h"
#include <QDateTime>
#include <QTimer>
#include<QMessageBox>
#include<QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

coordinatordash::coordinatordash(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::coordinatordash)
{
    ui->setupUi(this);

    // Initialize and configure the QTimer once
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &coordinatordash::updateColorbox);

    // Start the timer with a 5000ms (5 seconds) interval
    timer->start(5000);

    // Initial call to update the UI
    updateColorbox();

    // Load the logo
    QPixmap pic(":/resources/resources/Kakshya_trans.png");
    int h = ui->logo->height();
    int w = ui->logo->width();
    ui->logo->setPixmap(pic.scaled(h, w, Qt::KeepAspectRatio, Qt::SmoothTransformation));
}


coordinatordash::~coordinatordash()
{
    delete ui;
}

bool coordinatordash::connectToDatabase()
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


void coordinatordash::on_pushButtonUpload_clicked()
{
    up = new UploadRoutine(this);
    up ->showMaximized();
}

void coordinatordash::updateColorbox()
{
    QString currentDateTime = QDateTime::currentDateTime().toString("dddd HH:mm");
    QString currentDay = QDateTime::currentDateTime().toString("dddd");
    int Time = QDateTime::currentDateTime().toString("HH").toInt();
    ui->labelTime->setText(currentDateTime);

    if (Time > 16 || Time < 9 || currentDay == "Saturday") {
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

        // Reset unused frames to green
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


void coordinatordash::on_pushButton_clicked()
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
