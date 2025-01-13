/********************************************************************************
** Form generated from reading UI file 'coordinatordash.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COORDINATORDASH_H
#define UI_COORDINATORDASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_coordinatordash
{
public:
    QLabel *label;
    QPushButton *pushButtonUpload;
    QPushButton *pushButton;
    QLabel *logo;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_2;

    void setupUi(QDialog *coordinatordash)
    {
        if (coordinatordash->objectName().isEmpty())
            coordinatordash->setObjectName("coordinatordash");
        coordinatordash->resize(1200, 900);
        label = new QLabel(coordinatordash);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 20, 221, 81));
        pushButtonUpload = new QPushButton(coordinatordash);
        pushButtonUpload->setObjectName("pushButtonUpload");
        pushButtonUpload->setGeometry(QRect(800, 20, 141, 51));
        pushButton = new QPushButton(coordinatordash);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(950, 20, 121, 51));
        logo = new QLabel(coordinatordash);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(20, 20, 141, 91));
        dateTimeEdit = new QDateTimeEdit(coordinatordash);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(863, 110, 211, 51));
        label_2 = new QLabel(coordinatordash);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(380, 110, 321, 61));

        retranslateUi(coordinatordash);

        QMetaObject::connectSlotsByName(coordinatordash);
    } // setupUi

    void retranslateUi(QDialog *coordinatordash)
    {
        coordinatordash->setWindowTitle(QCoreApplication::translate("coordinatordash", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("coordinatordash", "Logged in as coordinator", nullptr));
        pushButtonUpload->setText(QCoreApplication::translate("coordinatordash", "Upload Routine", nullptr));
        pushButton->setText(QCoreApplication::translate("coordinatordash", "logout", nullptr));
        logo->setText(QString());
        label_2->setText(QCoreApplication::translate("coordinatordash", "                             Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class coordinatordash: public Ui_coordinatordash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COORDINATORDASH_H
