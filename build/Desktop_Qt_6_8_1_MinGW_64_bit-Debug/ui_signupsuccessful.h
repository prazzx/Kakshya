/********************************************************************************
** Form generated from reading UI file 'signupsuccessful.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPSUCCESSFUL_H
#define UI_SIGNUPSUCCESSFUL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Signupsuccessful
{
public:
    QLabel *label;
    QPushButton *pushButtonOkay;

    void setupUi(QDialog *Signupsuccessful)
    {
        if (Signupsuccessful->objectName().isEmpty())
            Signupsuccessful->setObjectName("Signupsuccessful");
        Signupsuccessful->resize(350, 170);
        label = new QLabel(Signupsuccessful);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 30, 201, 51));
        pushButtonOkay = new QPushButton(Signupsuccessful);
        pushButtonOkay->setObjectName("pushButtonOkay");
        pushButtonOkay->setGeometry(QRect(130, 80, 80, 18));

        retranslateUi(Signupsuccessful);

        QMetaObject::connectSlotsByName(Signupsuccessful);
    } // setupUi

    void retranslateUi(QDialog *Signupsuccessful)
    {
        Signupsuccessful->setWindowTitle(QCoreApplication::translate("Signupsuccessful", "Alert!!", nullptr));
        label->setText(QCoreApplication::translate("Signupsuccessful", "Signed up succesfully!!", nullptr));
        pushButtonOkay->setText(QCoreApplication::translate("Signupsuccessful", "Okay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signupsuccessful: public Ui_Signupsuccessful {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPSUCCESSFUL_H
