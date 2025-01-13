/********************************************************************************
** Form generated from reading UI file 'loginsuccessful.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSUCCESSFUL_H
#define UI_LOGINSUCCESSFUL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginsuccessful
{
public:
    QLabel *labelLogin;
    QPushButton *pushButtonOkay;

    void setupUi(QDialog *loginsuccessful)
    {
        if (loginsuccessful->objectName().isEmpty())
            loginsuccessful->setObjectName("loginsuccessful");
        loginsuccessful->resize(604, 309);
        labelLogin = new QLabel(loginsuccessful);
        labelLogin->setObjectName("labelLogin");
        labelLogin->setGeometry(QRect(130, 30, 151, 51));
        pushButtonOkay = new QPushButton(loginsuccessful);
        pushButtonOkay->setObjectName("pushButtonOkay");
        pushButtonOkay->setGeometry(QRect(140, 90, 80, 18));

        retranslateUi(loginsuccessful);

        QMetaObject::connectSlotsByName(loginsuccessful);
    } // setupUi

    void retranslateUi(QDialog *loginsuccessful)
    {
        loginsuccessful->setWindowTitle(QCoreApplication::translate("loginsuccessful", "Dialog", nullptr));
        labelLogin->setText(QCoreApplication::translate("loginsuccessful", "Logged in successfully", nullptr));
        pushButtonOkay->setText(QCoreApplication::translate("loginsuccessful", "Okay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginsuccessful: public Ui_loginsuccessful {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSUCCESSFUL_H
