/********************************************************************************
** Form generated from reading UI file 'studentdash.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDASH_H
#define UI_STUDENTDASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentdash
{
public:
    QLabel *label_2;
    QLabel *labelTime;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *Subject1;
    QLabel *rno3;
    QLabel *rno1;
    QLabel *label_13;
    QLabel *Subject3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *Subject2;
    QLabel *rno2;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *widget1;
    QLabel *Status1;
    QWidget *widget2;
    QLabel *Status2;
    QWidget *widget3;
    QLabel *Status3;
    QPushButton *pushButton_2;
    QComboBox *comboBoxSelect;
    QLabel *logo;
    QPushButton *pushButtonUpload;

    void setupUi(QDialog *studentdash)
    {
        if (studentdash->objectName().isEmpty())
            studentdash->setObjectName("studentdash");
        studentdash->resize(1066, 669);
        label_2 = new QLabel(studentdash);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 30, 221, 81));
        labelTime = new QLabel(studentdash);
        labelTime->setObjectName("labelTime");
        labelTime->setGeometry(QRect(830, 130, 191, 81));
        label = new QLabel(studentdash);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 160, 321, 61));
        gridLayoutWidget = new QWidget(studentdash);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 360, 571, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Subject1 = new QLabel(gridLayoutWidget);
        Subject1->setObjectName("Subject1");

        gridLayout->addWidget(Subject1, 1, 2, 1, 1);

        rno3 = new QLabel(gridLayoutWidget);
        rno3->setObjectName("rno3");

        gridLayout->addWidget(rno3, 3, 1, 1, 1);

        rno1 = new QLabel(gridLayoutWidget);
        rno1->setObjectName("rno1");

        gridLayout->addWidget(rno1, 1, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 3, 0, 1, 1);

        Subject3 = new QLabel(gridLayoutWidget);
        Subject3->setObjectName("Subject3");

        gridLayout->addWidget(Subject3, 3, 2, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        Subject2 = new QLabel(gridLayoutWidget);
        Subject2->setObjectName("Subject2");

        gridLayout->addWidget(Subject2, 2, 2, 1, 1);

        rno2 = new QLabel(gridLayoutWidget);
        rno2->setObjectName("rno2");

        gridLayout->addWidget(rno2, 2, 1, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 0, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName("label_17");

        gridLayout->addWidget(label_17, 0, 1, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName("label_18");

        gridLayout->addWidget(label_18, 0, 2, 1, 1);

        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName("label_19");

        gridLayout->addWidget(label_19, 0, 3, 1, 1);

        widget1 = new QWidget(gridLayoutWidget);
        widget1->setObjectName("widget1");
        Status1 = new QLabel(widget1);
        Status1->setObjectName("Status1");
        Status1->setGeometry(QRect(6, 12, 121, 31));

        gridLayout->addWidget(widget1, 1, 3, 1, 1);

        widget2 = new QWidget(gridLayoutWidget);
        widget2->setObjectName("widget2");
        Status2 = new QLabel(widget2);
        Status2->setObjectName("Status2");
        Status2->setGeometry(QRect(10, 10, 121, 31));

        gridLayout->addWidget(widget2, 2, 3, 1, 1);

        widget3 = new QWidget(gridLayoutWidget);
        widget3->setObjectName("widget3");
        Status3 = new QLabel(widget3);
        Status3->setObjectName("Status3");
        Status3->setGeometry(QRect(10, 10, 121, 31));

        gridLayout->addWidget(widget3, 3, 3, 1, 1);

        pushButton_2 = new QPushButton(studentdash);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(930, 30, 121, 51));
        comboBoxSelect = new QComboBox(studentdash);
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->setObjectName("comboBoxSelect");
        comboBoxSelect->setGeometry(QRect(200, 230, 55, 22));
        logo = new QLabel(studentdash);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 30, 141, 91));
        pushButtonUpload = new QPushButton(studentdash);
        pushButtonUpload->setObjectName("pushButtonUpload");
        pushButtonUpload->setGeometry(QRect(730, 30, 191, 51));

        retranslateUi(studentdash);

        QMetaObject::connectSlotsByName(studentdash);
    } // setupUi

    void retranslateUi(QDialog *studentdash)
    {
        studentdash->setWindowTitle(QCoreApplication::translate("studentdash", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("studentdash", "Logged in as student", nullptr));
        labelTime->setText(QString());
        label->setText(QCoreApplication::translate("studentdash", "                             Dashboard", nullptr));
        Subject1->setText(QString());
        rno3->setText(QString());
        rno1->setText(QString());
        label_13->setText(QCoreApplication::translate("studentdash", "2-4", nullptr));
        Subject3->setText(QString());
        label_9->setText(QCoreApplication::translate("studentdash", "9-11", nullptr));
        label_10->setText(QCoreApplication::translate("studentdash", "12-2", nullptr));
        Subject2->setText(QString());
        rno2->setText(QString());
        label_16->setText(QCoreApplication::translate("studentdash", "Time", nullptr));
        label_17->setText(QCoreApplication::translate("studentdash", "Room No", nullptr));
        label_18->setText(QCoreApplication::translate("studentdash", "Subject", nullptr));
        label_19->setText(QCoreApplication::translate("studentdash", "Status", nullptr));
        Status1->setText(QString());
        Status2->setText(QString());
        Status3->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("studentdash", "Logout", nullptr));
        comboBoxSelect->setItemText(0, QCoreApplication::translate("studentdash", "BIT", nullptr));
        comboBoxSelect->setItemText(1, QCoreApplication::translate("studentdash", "CEI_I", nullptr));
        comboBoxSelect->setItemText(2, QCoreApplication::translate("studentdash", "CEI_II", nullptr));

        logo->setText(QString());
        pushButtonUpload->setText(QCoreApplication::translate("studentdash", "login as CR?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentdash: public Ui_studentdash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDASH_H
