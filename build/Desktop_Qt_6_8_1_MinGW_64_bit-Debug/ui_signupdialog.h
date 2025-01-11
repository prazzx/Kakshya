/********************************************************************************
** Form generated from reading UI file 'signupdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPDIALOG_H
#define UI_SIGNUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignupDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditEmail;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditConfirmpassword;
    QPushButton *pushButtonSignUp;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditName;
    QLineEdit *lineEditPhone;
    QLabel *labelMessage;
    QRadioButton *radioButtonTeacher;
    QRadioButton *radioButtonCoordinator;
    QRadioButton *radioButtonCR;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *SignupDialog)
    {
        if (SignupDialog->objectName().isEmpty())
            SignupDialog->setObjectName("SignupDialog");
        SignupDialog->resize(1200, 900);
        verticalLayoutWidget = new QWidget(SignupDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(570, 280, 231, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditEmail = new QLineEdit(verticalLayoutWidget);
        lineEditEmail->setObjectName("lineEditEmail");

        verticalLayout->addWidget(lineEditEmail);

        lineEditPassword = new QLineEdit(verticalLayoutWidget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEditPassword);

        lineEditConfirmpassword = new QLineEdit(verticalLayoutWidget);
        lineEditConfirmpassword->setObjectName("lineEditConfirmpassword");
        lineEditConfirmpassword->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEditConfirmpassword);

        pushButtonSignUp = new QPushButton(verticalLayoutWidget);
        pushButtonSignUp->setObjectName("pushButtonSignUp");

        verticalLayout->addWidget(pushButtonSignUp);

        horizontalLayoutWidget = new QWidget(SignupDialog);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(570, 250, 231, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditName = new QLineEdit(horizontalLayoutWidget);
        lineEditName->setObjectName("lineEditName");

        horizontalLayout->addWidget(lineEditName);

        lineEditPhone = new QLineEdit(horizontalLayoutWidget);
        lineEditPhone->setObjectName("lineEditPhone");

        horizontalLayout->addWidget(lineEditPhone);

        labelMessage = new QLabel(SignupDialog);
        labelMessage->setObjectName("labelMessage");
        labelMessage->setGeometry(QRect(600, 410, 171, 81));
        radioButtonTeacher = new QRadioButton(SignupDialog);
        buttonGroup = new QButtonGroup(SignupDialog);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(radioButtonTeacher);
        radioButtonTeacher->setObjectName("radioButtonTeacher");
        radioButtonTeacher->setGeometry(QRect(570, 220, 69, 18));
        radioButtonCoordinator = new QRadioButton(SignupDialog);
        buttonGroup->addButton(radioButtonCoordinator);
        radioButtonCoordinator->setObjectName("radioButtonCoordinator");
        radioButtonCoordinator->setGeometry(QRect(650, 220, 69, 18));
        radioButtonCR = new QRadioButton(SignupDialog);
        buttonGroup->addButton(radioButtonCR);
        radioButtonCR->setObjectName("radioButtonCR");
        radioButtonCR->setGeometry(QRect(730, 220, 69, 18));

        retranslateUi(SignupDialog);

        QMetaObject::connectSlotsByName(SignupDialog);
    } // setupUi

    void retranslateUi(QDialog *SignupDialog)
    {
        SignupDialog->setWindowTitle(QCoreApplication::translate("SignupDialog", "Signup Page", nullptr));
        lineEditEmail->setText(QString());
        lineEditEmail->setPlaceholderText(QCoreApplication::translate("SignupDialog", "Email", nullptr));
        lineEditPassword->setText(QString());
        lineEditPassword->setPlaceholderText(QCoreApplication::translate("SignupDialog", "Password", nullptr));
        lineEditConfirmpassword->setPlaceholderText(QCoreApplication::translate("SignupDialog", "Confirm password", nullptr));
        pushButtonSignUp->setText(QCoreApplication::translate("SignupDialog", "Sign up", nullptr));
        lineEditName->setText(QString());
        lineEditName->setPlaceholderText(QCoreApplication::translate("SignupDialog", "Name", nullptr));
        lineEditPhone->setPlaceholderText(QCoreApplication::translate("SignupDialog", "Phone", nullptr));
        labelMessage->setText(QString());
        radioButtonTeacher->setText(QCoreApplication::translate("SignupDialog", "Teacher", nullptr));
        radioButtonCoordinator->setText(QCoreApplication::translate("SignupDialog", "Co-ordinator", nullptr));
        radioButtonCR->setText(QCoreApplication::translate("SignupDialog", "CR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignupDialog: public Ui_SignupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPDIALOG_H
