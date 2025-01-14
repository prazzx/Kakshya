/********************************************************************************
** Form generated from reading UI file 'crdash.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRDASH_H
#define UI_CRDASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_crdash
{
public:
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButtonUpload;
    QLabel *logo;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label;

    void setupUi(QDialog *crdash)
    {
        if (crdash->objectName().isEmpty())
            crdash->setObjectName("crdash");
        crdash->resize(1358, 845);
        pushButton_2 = new QPushButton(crdash);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1010, 30, 121, 51));
        label_2 = new QLabel(crdash);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 30, 221, 81));
        pushButtonUpload = new QPushButton(crdash);
        pushButtonUpload->setObjectName("pushButtonUpload");
        pushButtonUpload->setGeometry(QRect(810, 30, 191, 51));
        logo = new QLabel(crdash);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(80, 30, 141, 91));
        dateTimeEdit = new QDateTimeEdit(crdash);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(870, 170, 194, 29));
        label = new QLabel(crdash);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 160, 321, 61));

        retranslateUi(crdash);

        QMetaObject::connectSlotsByName(crdash);
    } // setupUi

    void retranslateUi(QDialog *crdash)
    {
        crdash->setWindowTitle(QCoreApplication::translate("crdash", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("crdash", "logout", nullptr));
        label_2->setText(QCoreApplication::translate("crdash", "Logged in as CR", nullptr));
        pushButtonUpload->setText(QCoreApplication::translate("crdash", "search for classroom", nullptr));
        logo->setText(QString());
        label->setText(QCoreApplication::translate("crdash", "                             Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class crdash: public Ui_crdash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRDASH_H
