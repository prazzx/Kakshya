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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UploadRoutine
{
public:
    QComboBox *comboBoxSelect;
    QPushButton *pushButtonUpload;
    QLabel *labelMessage;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
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
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QPushButton *pushButton21;
    QPushButton *pushButton22;
    QPushButton *pushButton23;
    QPushButton *pushButton24;
    QPushButton *pushButton25;
    QPushButton *pushButton26;
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
        comboBoxSelect->setGeometry(QRect(100, 30, 161, 31));
        comboBoxSelect->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Arial\";\n"
"color: rgb(0, 85, 0);"));
        pushButtonUpload = new QPushButton(UploadRoutine);
        pushButtonUpload->setObjectName("pushButtonUpload");
        pushButtonUpload->setGeometry(QRect(890, 520, 121, 51));
        labelMessage = new QLabel(UploadRoutine);
        labelMessage->setObjectName("labelMessage");
        labelMessage->setGeometry(QRect(830, 270, 131, 81));
        pushButton = new QPushButton(UploadRoutine);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(900, 20, 111, 41));
        layoutWidget = new QWidget(UploadRoutine);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 120, 352, 240));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(50, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        pushButton11 = new QPushButton(layoutWidget);
        pushButton11->setObjectName("pushButton11");

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton11);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        pushButton12 = new QPushButton(layoutWidget);
        pushButton12->setObjectName("pushButton12");

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton12);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        pushButton13 = new QPushButton(layoutWidget);
        pushButton13->setObjectName("pushButton13");

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton13);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        pushButton14 = new QPushButton(layoutWidget);
        pushButton14->setObjectName("pushButton14");

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton14);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        pushButton15 = new QPushButton(layoutWidget);
        pushButton15->setObjectName("pushButton15");

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton15);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        pushButton16 = new QPushButton(layoutWidget);
        pushButton16->setObjectName("pushButton16");

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButton16);


        horizontalLayout->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setMaximumSize(QSize(50, 16777215));

        verticalLayout->addWidget(label_11);

        pushButton21 = new QPushButton(layoutWidget);
        pushButton21->setObjectName("pushButton21");

        verticalLayout->addWidget(pushButton21);

        pushButton22 = new QPushButton(layoutWidget);
        pushButton22->setObjectName("pushButton22");

        verticalLayout->addWidget(pushButton22);

        pushButton23 = new QPushButton(layoutWidget);
        pushButton23->setObjectName("pushButton23");

        verticalLayout->addWidget(pushButton23);

        pushButton24 = new QPushButton(layoutWidget);
        pushButton24->setObjectName("pushButton24");

        verticalLayout->addWidget(pushButton24);

        pushButton25 = new QPushButton(layoutWidget);
        pushButton25->setObjectName("pushButton25");

        verticalLayout->addWidget(pushButton25);

        pushButton26 = new QPushButton(layoutWidget);
        pushButton26->setObjectName("pushButton26");

        verticalLayout->addWidget(pushButton26);


        horizontalLayout->addLayout(verticalLayout);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setMaximumSize(QSize(50, 16777215));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, label_12);

        pushButton31 = new QPushButton(layoutWidget);
        pushButton31->setObjectName("pushButton31");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, pushButton31);

        pushButton32 = new QPushButton(layoutWidget);
        pushButton32->setObjectName("pushButton32");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, pushButton32);

        pushButton33 = new QPushButton(layoutWidget);
        pushButton33->setObjectName("pushButton33");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, pushButton33);

        pushButton34 = new QPushButton(layoutWidget);
        pushButton34->setObjectName("pushButton34");

        formLayout_3->setWidget(4, QFormLayout::FieldRole, pushButton34);

        pushButton35 = new QPushButton(layoutWidget);
        pushButton35->setObjectName("pushButton35");

        formLayout_3->setWidget(5, QFormLayout::FieldRole, pushButton35);

        pushButton36 = new QPushButton(layoutWidget);
        pushButton36->setObjectName("pushButton36");

        formLayout_3->setWidget(6, QFormLayout::FieldRole, pushButton36);


        horizontalLayout->addLayout(formLayout_3);


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
        pushButton->setText(QCoreApplication::translate("UploadRoutine", "back", nullptr));
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
