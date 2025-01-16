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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButtonCR;
    QRadioButton *radioButtonCoordinator;
    QRadioButton *radioButtonTeacher;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelMessage;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditName;
    QLineEdit *lineEditPhone;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditEmail;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditConfirmpassword;
    QPushButton *pushButtonSignUp;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *SignupDialog)
    {
        if (SignupDialog->objectName().isEmpty())
            SignupDialog->setObjectName("SignupDialog");
        SignupDialog->resize(1200, 900);
        layoutWidget = new QWidget(SignupDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(170, 160, 301, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButtonCR = new QRadioButton(layoutWidget);
        buttonGroup = new QButtonGroup(SignupDialog);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(radioButtonCR);
        radioButtonCR->setObjectName("radioButtonCR");

        horizontalLayout_2->addWidget(radioButtonCR);

        radioButtonCoordinator = new QRadioButton(layoutWidget);
        buttonGroup->addButton(radioButtonCoordinator);
        radioButtonCoordinator->setObjectName("radioButtonCoordinator");

        horizontalLayout_2->addWidget(radioButtonCoordinator);

        radioButtonTeacher = new QRadioButton(layoutWidget);
        buttonGroup->addButton(radioButtonTeacher);
        radioButtonTeacher->setObjectName("radioButtonTeacher");

        horizontalLayout_2->addWidget(radioButtonTeacher);

        layoutWidget1 = new QWidget(SignupDialog);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(170, 200, 301, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelMessage = new QLabel(layoutWidget1);
        labelMessage->setObjectName("labelMessage");

        verticalLayout_2->addWidget(labelMessage);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEditName = new QLineEdit(layoutWidget1);
        lineEditName->setObjectName("lineEditName");

        horizontalLayout->addWidget(lineEditName);

        lineEditPhone = new QLineEdit(layoutWidget1);
        lineEditPhone->setObjectName("lineEditPhone");

        horizontalLayout->addWidget(lineEditPhone);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEditEmail = new QLineEdit(layoutWidget1);
        lineEditEmail->setObjectName("lineEditEmail");

        verticalLayout->addWidget(lineEditEmail);

        lineEditPassword = new QLineEdit(layoutWidget1);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEditPassword);

        lineEditConfirmpassword = new QLineEdit(layoutWidget1);
        lineEditConfirmpassword->setObjectName("lineEditConfirmpassword");
        lineEditConfirmpassword->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEditConfirmpassword);

        pushButtonSignUp = new QPushButton(layoutWidget1);
        pushButtonSignUp->setObjectName("pushButtonSignUp");

        verticalLayout->addWidget(pushButtonSignUp);


        verticalLayout_2->addLayout(verticalLayout);

        label = new QLabel(SignupDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(512, 169, 291, 301));
        pushButton = new QPushButton(SignupDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(990, 10, 151, 61));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(SignupDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 0, 181, 81));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Arial\";\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(SignupDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(660, 0, 321, 81));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Arial\";\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(SignupDialog);

        QMetaObject::connectSlotsByName(SignupDialog);
    } // setupUi

    void retranslateUi(QDialog *SignupDialog)
    {
        SignupDialog->setWindowTitle(QCoreApplication::translate("SignupDialog", "Signup Page", nullptr));
        radioButtonCR->setText(QCoreApplication::translate("SignupDialog", "CR", nullptr));
        radioButtonCoordinator->setText(QCoreApplication::translate("SignupDialog", "Co-ordinator", nullptr));
        radioButtonTeacher->setText(QCoreApplication::translate("SignupDialog", "Teacher", nullptr));
        labelMessage->setText(QString());
        lineEditName->setText(QString());
        lineEditName->setPlaceholderText(QCoreApplication::translate("SignupDialog", "Name", nullptr));
        lineEditPhone->setPlaceholderText(QCoreApplication::translate("SignupDialog", "Phone", nullptr));
        lineEditEmail->setText(QString());
        lineEditEmail->setPlaceholderText(QCoreApplication::translate("SignupDialog", "Email", nullptr));
        lineEditPassword->setText(QString());
        lineEditPassword->setPlaceholderText(QCoreApplication::translate("SignupDialog", "Password", nullptr));
        lineEditConfirmpassword->setPlaceholderText(QCoreApplication::translate("SignupDialog", "Confirm password", nullptr));
        pushButtonSignUp->setText(QCoreApplication::translate("SignupDialog", "Sign up", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("SignupDialog", "login", nullptr));
#if QT_CONFIG(whatsthis)
        label_2->setWhatsThis(QCoreApplication::translate("SignupDialog", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("SignupDialog", "<html><head/><body><p><span style=\" font-size:14pt;\">Hello there ,</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        label_3->setWhatsThis(QCoreApplication::translate("SignupDialog", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_3->setText(QCoreApplication::translate("SignupDialog", "<html><head/><body><p align=\"right\"><span style=\" font-size:14pt;\">Already been to Kakshya?</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignupDialog: public Ui_SignupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPDIALOG_H
