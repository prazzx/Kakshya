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
    QPushButton *pushButton11;
    QLabel *label_4;
    QPushButton *pushButton12;
    QLabel *label_5;
    QPushButton *pushButton13;
    QLabel *label_6;
    QPushButton *pushButton14;
    QLabel *label_7;
    QPushButton *pushButton15;
    QLabel *label_8;
    QPushButton *pushButton16;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_11;
    QPushButton *pushButton21;
    QPushButton *pushButton22;
    QPushButton *pushButton23;
    QPushButton *pushButton24;
    QPushButton *pushButton25;
    QPushButton *pushButton26;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_12;
    QPushButton *pushButton31;
    QPushButton *pushButton32;
    QPushButton *pushButton33;
    QPushButton *pushButton34;
    QPushButton *pushButton35;
    QPushButton *pushButton36;

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
        formLayoutWidget->setGeometry(QRect(140, 110, 151, 151));
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

        pushButton11 = new QPushButton(formLayoutWidget);
        pushButton11->setObjectName("pushButton11");

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton11);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        pushButton12 = new QPushButton(formLayoutWidget);
        pushButton12->setObjectName("pushButton12");

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton12);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        pushButton13 = new QPushButton(formLayoutWidget);
        pushButton13->setObjectName("pushButton13");

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton13);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        pushButton14 = new QPushButton(formLayoutWidget);
        pushButton14->setObjectName("pushButton14");

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton14);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        pushButton15 = new QPushButton(formLayoutWidget);
        pushButton15->setObjectName("pushButton15");

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton15);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        pushButton16 = new QPushButton(formLayoutWidget);
        pushButton16->setObjectName("pushButton16");

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButton16);

        formLayoutWidget_2 = new QWidget(UploadRoutine);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(290, 110, 111, 151));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(formLayoutWidget_2);
        label_11->setObjectName("label_11");
        label_11->setMaximumSize(QSize(50, 16777215));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_11);

        pushButton21 = new QPushButton(formLayoutWidget_2);
        pushButton21->setObjectName("pushButton21");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, pushButton21);

        pushButton22 = new QPushButton(formLayoutWidget_2);
        pushButton22->setObjectName("pushButton22");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pushButton22);

        pushButton23 = new QPushButton(formLayoutWidget_2);
        pushButton23->setObjectName("pushButton23");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, pushButton23);

        pushButton24 = new QPushButton(formLayoutWidget_2);
        pushButton24->setObjectName("pushButton24");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, pushButton24);

        pushButton25 = new QPushButton(formLayoutWidget_2);
        pushButton25->setObjectName("pushButton25");

        formLayout_2->setWidget(5, QFormLayout::FieldRole, pushButton25);

        pushButton26 = new QPushButton(formLayoutWidget_2);
        pushButton26->setObjectName("pushButton26");

        formLayout_2->setWidget(6, QFormLayout::FieldRole, pushButton26);

        formLayoutWidget_3 = new QWidget(UploadRoutine);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(400, 110, 111, 151));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(formLayoutWidget_3);
        label_12->setObjectName("label_12");
        label_12->setMaximumSize(QSize(50, 16777215));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, label_12);

        pushButton31 = new QPushButton(formLayoutWidget_3);
        pushButton31->setObjectName("pushButton31");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, pushButton31);

        pushButton32 = new QPushButton(formLayoutWidget_3);
        pushButton32->setObjectName("pushButton32");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, pushButton32);

        pushButton33 = new QPushButton(formLayoutWidget_3);
        pushButton33->setObjectName("pushButton33");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, pushButton33);

        pushButton34 = new QPushButton(formLayoutWidget_3);
        pushButton34->setObjectName("pushButton34");

        formLayout_3->setWidget(4, QFormLayout::FieldRole, pushButton34);

        pushButton35 = new QPushButton(formLayoutWidget_3);
        pushButton35->setObjectName("pushButton35");

        formLayout_3->setWidget(5, QFormLayout::FieldRole, pushButton35);

        pushButton36 = new QPushButton(formLayoutWidget_3);
        pushButton36->setObjectName("pushButton36");

        formLayout_3->setWidget(6, QFormLayout::FieldRole, pushButton36);


        retranslateUi(UploadRoutine);

        QMetaObject::connectSlotsByName(UploadRoutine);
    } // setupUi

    void retranslateUi(QDialog *UploadRoutine)
    {
        UploadRoutine->setWindowTitle(QCoreApplication::translate("UploadRoutine", "Dialog", nullptr));
        comboBoxSelect->setItemText(0, QCoreApplication::translate("UploadRoutine", "BIT", nullptr));
        comboBoxSelect->setItemText(1, QCoreApplication::translate("UploadRoutine", "CEI_I", nullptr));
        comboBoxSelect->setItemText(2, QCoreApplication::translate("UploadRoutine", "CEI_II", nullptr));
        comboBoxSelect->setItemText(3, QCoreApplication::translate("UploadRoutine", "CEII_I", nullptr));
        comboBoxSelect->setItemText(4, QCoreApplication::translate("UploadRoutine", "CEII_II", nullptr));
        comboBoxSelect->setItemText(5, QCoreApplication::translate("UploadRoutine", "CEIII_I", nullptr));
        comboBoxSelect->setItemText(6, QCoreApplication::translate("UploadRoutine", "CEIII_II", nullptr));
        comboBoxSelect->setItemText(7, QCoreApplication::translate("UploadRoutine", "CEIV_I", nullptr));

        pushButtonUpload->setText(QCoreApplication::translate("UploadRoutine", "Upload Routine", nullptr));
        labelMessage->setText(QString());
        label->setText(QCoreApplication::translate("UploadRoutine", "Day/Time ", nullptr));
        label_2->setText(QCoreApplication::translate("UploadRoutine", "9-11", nullptr));
        label_3->setText(QCoreApplication::translate("UploadRoutine", "Sunday", nullptr));
        pushButton11->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        label_4->setText(QCoreApplication::translate("UploadRoutine", "Monday", nullptr));
        pushButton12->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        label_5->setText(QCoreApplication::translate("UploadRoutine", "Tuesday", nullptr));
        pushButton13->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        label_6->setText(QCoreApplication::translate("UploadRoutine", "Wednesday", nullptr));
        pushButton14->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        label_7->setText(QCoreApplication::translate("UploadRoutine", "Thursday", nullptr));
        pushButton15->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        label_8->setText(QCoreApplication::translate("UploadRoutine", "Friday", nullptr));
        pushButton16->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        label_11->setText(QCoreApplication::translate("UploadRoutine", "12-2", nullptr));
        pushButton21->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        pushButton22->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        pushButton23->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        pushButton24->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        pushButton25->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        pushButton26->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        label_12->setText(QCoreApplication::translate("UploadRoutine", "2-4", nullptr));
        pushButton31->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        pushButton32->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        pushButton33->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        pushButton34->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        pushButton35->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
        pushButton36->setText(QCoreApplication::translate("UploadRoutine", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UploadRoutine: public Ui_UploadRoutine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPLOADROUTINE_H
