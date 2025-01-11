/********************************************************************************
** Form generated from reading UI file 'forgotpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORD_H
#define UI_FORGOTPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Forgotpassword
{
public:
    QLineEdit *lineEditEmail;
    QLineEdit *lineEditPhone;
    QLineEdit *lineEditNewpassword;
    QLineEdit *lineEditConfirmpassword;
    QPushButton *pushButtonChangepassword;
    QLabel *labelMessage;

    void setupUi(QDialog *Forgotpassword)
    {
        if (Forgotpassword->objectName().isEmpty())
            Forgotpassword->setObjectName("Forgotpassword");
        Forgotpassword->resize(800, 600);
        lineEditEmail = new QLineEdit(Forgotpassword);
        lineEditEmail->setObjectName("lineEditEmail");
        lineEditEmail->setGeometry(QRect(292, 210, 201, 20));
        lineEditPhone = new QLineEdit(Forgotpassword);
        lineEditPhone->setObjectName("lineEditPhone");
        lineEditPhone->setGeometry(QRect(292, 240, 201, 20));
        lineEditNewpassword = new QLineEdit(Forgotpassword);
        lineEditNewpassword->setObjectName("lineEditNewpassword");
        lineEditNewpassword->setGeometry(QRect(292, 270, 201, 20));
        lineEditConfirmpassword = new QLineEdit(Forgotpassword);
        lineEditConfirmpassword->setObjectName("lineEditConfirmpassword");
        lineEditConfirmpassword->setGeometry(QRect(292, 300, 201, 20));
        pushButtonChangepassword = new QPushButton(Forgotpassword);
        pushButtonChangepassword->setObjectName("pushButtonChangepassword");
        pushButtonChangepassword->setGeometry(QRect(350, 330, 101, 31));
        labelMessage = new QLabel(Forgotpassword);
        labelMessage->setObjectName("labelMessage");
        labelMessage->setGeometry(QRect(330, 370, 131, 41));

        retranslateUi(Forgotpassword);

        QMetaObject::connectSlotsByName(Forgotpassword);
    } // setupUi

    void retranslateUi(QDialog *Forgotpassword)
    {
        Forgotpassword->setWindowTitle(QCoreApplication::translate("Forgotpassword", "Dialog", nullptr));
        lineEditEmail->setPlaceholderText(QCoreApplication::translate("Forgotpassword", "Enter your email", nullptr));
        lineEditPhone->setPlaceholderText(QCoreApplication::translate("Forgotpassword", "Enter your phone number", nullptr));
        lineEditNewpassword->setPlaceholderText(QCoreApplication::translate("Forgotpassword", "New Password", nullptr));
        lineEditConfirmpassword->setPlaceholderText(QCoreApplication::translate("Forgotpassword", "Confirm New Password", nullptr));
        pushButtonChangepassword->setText(QCoreApplication::translate("Forgotpassword", "Change Password", nullptr));
        labelMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Forgotpassword: public Ui_Forgotpassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
