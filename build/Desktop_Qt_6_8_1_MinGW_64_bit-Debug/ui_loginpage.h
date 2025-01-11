/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QPushButton *pushButtonSignup;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditEmail;
    QLineEdit *lineEditPassword;
    QPushButton *pushButtonLogin;
    QLabel *labelMessage;
    QPushButton *pushButtonForgotpassword;
    QRadioButton *radioButtonTeacher;
    QRadioButton *radioButtonCoordinator;
    QRadioButton *radioButtonCr;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(1200, 900);
        pushButtonSignup = new QPushButton(LoginPage);
        pushButtonSignup->setObjectName("pushButtonSignup");
        pushButtonSignup->setGeometry(QRect(959, 77, 91, 31));
        verticalLayoutWidget = new QWidget(LoginPage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(560, 250, 191, 71));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditEmail = new QLineEdit(verticalLayoutWidget);
        lineEditEmail->setObjectName("lineEditEmail");

        verticalLayout->addWidget(lineEditEmail);

        lineEditPassword = new QLineEdit(verticalLayoutWidget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEditPassword);

        pushButtonLogin = new QPushButton(LoginPage);
        pushButtonLogin->setObjectName("pushButtonLogin");
        pushButtonLogin->setGeometry(QRect(610, 370, 81, 31));
        labelMessage = new QLabel(LoginPage);
        labelMessage->setObjectName("labelMessage");
        labelMessage->setGeometry(QRect(560, 420, 211, 71));
        pushButtonForgotpassword = new QPushButton(LoginPage);
        pushButtonForgotpassword->setObjectName("pushButtonForgotpassword");
        pushButtonForgotpassword->setGeometry(QRect(560, 330, 111, 31));
        radioButtonTeacher = new QRadioButton(LoginPage);
        buttonGroup = new QButtonGroup(LoginPage);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(radioButtonTeacher);
        radioButtonTeacher->setObjectName("radioButtonTeacher");
        radioButtonTeacher->setGeometry(QRect(550, 230, 51, 18));
        radioButtonCoordinator = new QRadioButton(LoginPage);
        buttonGroup->addButton(radioButtonCoordinator);
        radioButtonCoordinator->setObjectName("radioButtonCoordinator");
        radioButtonCoordinator->setGeometry(QRect(610, 230, 69, 18));
        radioButtonCr = new QRadioButton(LoginPage);
        buttonGroup->addButton(radioButtonCr);
        radioButtonCr->setObjectName("radioButtonCr");
        radioButtonCr->setGeometry(QRect(690, 230, 69, 18));

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QDialog *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "LoginPage", nullptr));
        pushButtonSignup->setText(QCoreApplication::translate("LoginPage", "Sign up", nullptr));
        lineEditEmail->setPlaceholderText(QCoreApplication::translate("LoginPage", "Email", nullptr));
        lineEditPassword->setPlaceholderText(QCoreApplication::translate("LoginPage", "Password", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("LoginPage", "Login", nullptr));
        labelMessage->setText(QString());
        pushButtonForgotpassword->setText(QCoreApplication::translate("LoginPage", "Forgot Password?", nullptr));
        radioButtonTeacher->setText(QCoreApplication::translate("LoginPage", "Teacher", nullptr));
        radioButtonCoordinator->setText(QCoreApplication::translate("LoginPage", "Co-ordinator", nullptr));
        radioButtonCr->setText(QCoreApplication::translate("LoginPage", "CR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
