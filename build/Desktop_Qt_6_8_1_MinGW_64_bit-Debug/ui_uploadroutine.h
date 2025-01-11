/********************************************************************************
** Form generated from reading UI file 'uploadroutine.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPLOADROUTINE_H
#define UI_UPLOADROUTINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UploadRoutine
{
public:
    QComboBox *comboBoxSelect;
    QPushButton *pushButtonUpload;
    QLabel *labelMessage;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;

    void setupUi(QDialog *UploadRoutine)
    {
        if (UploadRoutine->objectName().isEmpty())
            UploadRoutine->setObjectName("UploadRoutine");
        UploadRoutine->resize(1200, 900);
        comboBoxSelect = new QComboBox(UploadRoutine);
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->setObjectName("comboBoxSelect");
        comboBoxSelect->setGeometry(QRect(200, 30, 161, 31));
        pushButtonUpload = new QPushButton(UploadRoutine);
        pushButtonUpload->setObjectName("pushButtonUpload");
        pushButtonUpload->setGeometry(QRect(910, 520, 101, 51));
        labelMessage = new QLabel(UploadRoutine);
        labelMessage->setObjectName("labelMessage");
        labelMessage->setGeometry(QRect(830, 270, 131, 81));
        formLayoutWidget = new QWidget(UploadRoutine);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(140, 110, 361, 311));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(50, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName("label_9");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_9);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_3);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_4);

        lineEdit_5 = new QLineEdit(formLayoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_5);

        lineEdit_6 = new QLineEdit(formLayoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_6);

        lineEdit_7 = new QLineEdit(formLayoutWidget);
        lineEdit_7->setObjectName("lineEdit_7");

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_7);


        retranslateUi(UploadRoutine);

        QMetaObject::connectSlotsByName(UploadRoutine);
    } // setupUi

    void retranslateUi(QDialog *UploadRoutine)
    {
        UploadRoutine->setWindowTitle(QCoreApplication::translate("UploadRoutine", "Dialog", nullptr));
        comboBoxSelect->setItemText(0, QCoreApplication::translate("UploadRoutine", "BIT", nullptr));
        comboBoxSelect->setItemText(1, QCoreApplication::translate("UploadRoutine", "CE(I/I)", nullptr));
        comboBoxSelect->setItemText(2, QCoreApplication::translate("UploadRoutine", "CE(I/II)", nullptr));
        comboBoxSelect->setItemText(3, QCoreApplication::translate("UploadRoutine", "CE(II/I)", nullptr));
        comboBoxSelect->setItemText(4, QCoreApplication::translate("UploadRoutine", "CE(II/II)", nullptr));
        comboBoxSelect->setItemText(5, QCoreApplication::translate("UploadRoutine", "CE(III/I)", nullptr));
        comboBoxSelect->setItemText(6, QCoreApplication::translate("UploadRoutine", "CE(III/II)", nullptr));
        comboBoxSelect->setItemText(7, QCoreApplication::translate("UploadRoutine", "CE(IV/I)", nullptr));

        pushButtonUpload->setText(QCoreApplication::translate("UploadRoutine", "Upload Routine", nullptr));
        labelMessage->setText(QString());
        label->setText(QCoreApplication::translate("UploadRoutine", "Day/Time ", nullptr));
        label_2->setText(QCoreApplication::translate("UploadRoutine", "9-11", nullptr));
        label_3->setText(QCoreApplication::translate("UploadRoutine", "Sunday", nullptr));
        label_4->setText(QCoreApplication::translate("UploadRoutine", "Monday", nullptr));
        label_5->setText(QCoreApplication::translate("UploadRoutine", "Tuesday", nullptr));
        label_6->setText(QCoreApplication::translate("UploadRoutine", "Wednesday", nullptr));
        label_7->setText(QCoreApplication::translate("UploadRoutine", "Thursday", nullptr));
        label_8->setText(QCoreApplication::translate("UploadRoutine", "Friday", nullptr));
        label_9->setText(QCoreApplication::translate("UploadRoutine", "Saturday", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UploadRoutine: public Ui_UploadRoutine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPLOADROUTINE_H
