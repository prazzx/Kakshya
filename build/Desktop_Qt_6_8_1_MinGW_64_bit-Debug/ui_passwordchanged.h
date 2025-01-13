/********************************************************************************
** Form generated from reading UI file 'passwordchanged.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDCHANGED_H
#define UI_PASSWORDCHANGED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_passwordchanged
{
public:
    QLabel *label;
    QPushButton *pushButtonOkay;

    void setupUi(QDialog *passwordchanged)
    {
        if (passwordchanged->objectName().isEmpty())
            passwordchanged->setObjectName("passwordchanged");
        passwordchanged->resize(350, 170);
        label = new QLabel(passwordchanged);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 40, 241, 61));
        pushButtonOkay = new QPushButton(passwordchanged);
        pushButtonOkay->setObjectName("pushButtonOkay");
        pushButtonOkay->setGeometry(QRect(130, 100, 80, 18));

        retranslateUi(passwordchanged);

        QMetaObject::connectSlotsByName(passwordchanged);
    } // setupUi

    void retranslateUi(QDialog *passwordchanged)
    {
        passwordchanged->setWindowTitle(QCoreApplication::translate("passwordchanged", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("passwordchanged", "PASSWORD CHANGED SUCCESSFULLY!!", nullptr));
        pushButtonOkay->setText(QCoreApplication::translate("passwordchanged", "Okay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class passwordchanged: public Ui_passwordchanged {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDCHANGED_H
