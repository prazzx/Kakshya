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
        loginsuccessful->resize(398, 213);
        labelLogin = new QLabel(loginsuccessful);
        labelLogin->setObjectName("labelLogin");
        labelLogin->setGeometry(QRect(90, 20, 251, 71));
        pushButtonOkay = new QPushButton(loginsuccessful);
        pushButtonOkay->setObjectName("pushButtonOkay");
        pushButtonOkay->setGeometry(QRect(130, 100, 131, 41));

        retranslateUi(loginsuccessful);

        QMetaObject::connectSlotsByName(loginsuccessful);
    } // setupUi

    void retranslateUi(QDialog *loginsuccessful)
    {
        loginsuccessful->setWindowTitle(QCoreApplication::translate("loginsuccessful", "Dialog", nullptr));
#if QT_CONFIG(whatsthis)
        labelLogin->setWhatsThis(QCoreApplication::translate("loginsuccessful", "<html><head/><body><p align=\"center\">Logged in successfully</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        labelLogin->setText(QCoreApplication::translate("loginsuccessful", "Logged in successfully", nullptr));
        pushButtonOkay->setText(QCoreApplication::translate("loginsuccessful", "Okay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginsuccessful: public Ui_loginsuccessful {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSUCCESSFUL_H
