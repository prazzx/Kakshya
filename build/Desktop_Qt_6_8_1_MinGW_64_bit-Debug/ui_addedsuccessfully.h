/********************************************************************************
** Form generated from reading UI file 'addedsuccessfully.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDSUCCESSFULLY_H
#define UI_ADDEDSUCCESSFULLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addedsuccessfully
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *addedsuccessfully)
    {
        if (addedsuccessfully->objectName().isEmpty())
            addedsuccessfully->setObjectName("addedsuccessfully");
        addedsuccessfully->resize(551, 279);
        label = new QLabel(addedsuccessfully);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 60, 211, 61));
        pushButton = new QPushButton(addedsuccessfully);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 140, 91, 31));

        retranslateUi(addedsuccessfully);

        QMetaObject::connectSlotsByName(addedsuccessfully);
    } // setupUi

    void retranslateUi(QDialog *addedsuccessfully)
    {
        addedsuccessfully->setWindowTitle(QCoreApplication::translate("addedsuccessfully", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addedsuccessfully", "Added Successfully", nullptr));
        pushButton->setText(QCoreApplication::translate("addedsuccessfully", "Okay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addedsuccessfully: public Ui_addedsuccessfully {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDSUCCESSFULLY_H
