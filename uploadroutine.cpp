#include "uploadroutine.h"
#include "ui_uploadroutine.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "addvaluestoroutine.h"


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
    if(selectedvalue=="BIT"){
        add = new Addvaluestoroutine(this);
        add->show();
    }
    else if(selectedvalue=="BIT"){}
    else if(selectedvalue=="CE(I/I)"){}

    else if(selectedvalue=="CE(I/II)"){}

    else if(selectedvalue=="CE(II/I)"){}

    else if(selectedvalue=="BIT"){}

    else if(selectedvalue=="BIT"){}
    }








