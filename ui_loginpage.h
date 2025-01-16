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
#include <QtWidgets/QHBoxLayout>
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
    QLabel *labelMessage;
    QLabel *logo;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonCoordinator;
    QRadioButton *radioButtonTeacher;
    QRadioButton *radioButtonCr;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditEmail;
    QLineEdit *lineEditPassword;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonForgotpassword;
    QLabel *label_2;
    QLabel *label_3;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(1200, 900);
        pushButtonSignup = new QPushButton(LoginPage);
        pushButtonSignup->setObjectName("pushButtonSignup");
        pushButtonSignup->setGeometry(QRect(1010, 10, 141, 71));
        labelMessage = new QLabel(LoginPage);
        labelMessage->setObjectName("labelMessage");
        labelMessage->setGeometry(QRect(320, 460, 351, 91));
        logo = new QLabel(LoginPage);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(690, 210, 321, 221));
        layoutWidget = new QWidget(LoginPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(310, 210, 351, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtonCoordinator = new QRadioButton(layoutWidget);
        buttonGroup = new QButtonGroup(LoginPage);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(radioButtonCoordinator);
        radioButtonCoordinator->setObjectName("radioButtonCoordinator");

        horizontalLayout->addWidget(radioButtonCoordinator);

        radioButtonTeacher = new QRadioButton(layoutWidget);
        buttonGroup->addButton(radioButtonTeacher);
        radioButtonTeacher->setObjectName("radioButtonTeacher");

        horizontalLayout->addWidget(radioButtonTeacher);

        radioButtonCr = new QRadioButton(layoutWidget);
        buttonGroup->addButton(radioButtonCr);
        radioButtonCr->setObjectName("radioButtonCr");

        horizontalLayout->addWidget(radioButtonCr);

        layoutWidget1 = new QWidget(LoginPage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(310, 260, 351, 151));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEditEmail = new QLineEdit(layoutWidget1);
        lineEditEmail->setObjectName("lineEditEmail");

        verticalLayout->addWidget(lineEditEmail);

        lineEditPassword = new QLineEdit(layoutWidget1);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEditPassword);


        verticalLayout_2->addLayout(verticalLayout);

        pushButtonLogin = new QPushButton(layoutWidget1);
        pushButtonLogin->setObjectName("pushButtonLogin");

        verticalLayout_2->addWidget(pushButtonLogin);

        pushButtonForgotpassword = new QPushButton(layoutWidget1);
        pushButtonForgotpassword->setObjectName("pushButtonForgotpassword");

        verticalLayout_2->addWidget(pushButtonForgotpassword);

        label_2 = new QLabel(LoginPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 181, 81));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Arial\";\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(LoginPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(680, 0, 321, 81));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Arial\";\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QDialog *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "LoginPage", nullptr));
        pushButtonSignup->setText(QCoreApplication::translate("LoginPage", "Sign up", nullptr));
        labelMessage->setText(QString());
        logo->setText(QString());
        radioButtonCoordinator->setText(QCoreApplication::translate("LoginPage", "Co-ordinator", nullptr));
        radioButtonTeacher->setText(QCoreApplication::translate("LoginPage", "Teacher", nullptr));
        radioButtonCr->setText(QCoreApplication::translate("LoginPage", "CR", nullptr));
        lineEditEmail->setPlaceholderText(QCoreApplication::translate("LoginPage", "Email", nullptr));
        lineEditPassword->setPlaceholderText(QCoreApplication::translate("LoginPage", "Password", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("LoginPage", "Login", nullptr));
        pushButtonForgotpassword->setText(QCoreApplication::translate("LoginPage", "Forgot Password?", nullptr));
#if QT_CONFIG(whatsthis)
        label_2->setWhatsThis(QCoreApplication::translate("LoginPage", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("LoginPage", "<html><head/><body><p><span style=\" font-size:14pt;\">Hello there ,</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        label_3->setWhatsThis(QCoreApplication::translate("LoginPage", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_3->setText(QCoreApplication::translate("LoginPage", "<html><head/><body><p align=\"right\"><span style=\" font-size:14pt;\">New to Kakshya?</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
