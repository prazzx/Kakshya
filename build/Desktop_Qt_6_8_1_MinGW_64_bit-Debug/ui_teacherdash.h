/********************************************************************************
** Form generated from reading UI file 'teacherdash.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERDASH_H
#define UI_TEACHERDASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_teacherdash
{
public:
    QPushButton *pushButtonUpload;
    QLabel *logo;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label;

    void setupUi(QDialog *teacherdash)
    {
        if (teacherdash->objectName().isEmpty())
            teacherdash->setObjectName("teacherdash");
        teacherdash->resize(1245, 749);
        pushButtonUpload = new QPushButton(teacherdash);
        pushButtonUpload->setObjectName("pushButtonUpload");
        pushButtonUpload->setGeometry(QRect(840, 40, 191, 51));
        logo = new QLabel(teacherdash);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(110, 40, 141, 91));
        label_2 = new QLabel(teacherdash);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 40, 221, 81));
        pushButton_2 = new QPushButton(teacherdash);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1040, 40, 121, 51));
        dateTimeEdit = new QDateTimeEdit(teacherdash);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(990, 150, 181, 51));
        label = new QLabel(teacherdash);
        label->setObjectName("label");
        label->setGeometry(QRect(450, 140, 321, 61));

        retranslateUi(teacherdash);

        QMetaObject::connectSlotsByName(teacherdash);
    } // setupUi

    void retranslateUi(QDialog *teacherdash)
    {
        teacherdash->setWindowTitle(QCoreApplication::translate("teacherdash", "Dialog", nullptr));
        pushButtonUpload->setText(QCoreApplication::translate("teacherdash", "search for classroom", nullptr));
        logo->setText(QString());
        label_2->setText(QCoreApplication::translate("teacherdash", "Logged in as teacher", nullptr));
        pushButton_2->setText(QCoreApplication::translate("teacherdash", "logout", nullptr));
        label->setText(QCoreApplication::translate("teacherdash", "                             Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacherdash: public Ui_teacherdash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERDASH_H
