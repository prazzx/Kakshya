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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Forgotpassword
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelMessage;
    QPushButton *pushButtonChangepassword;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditEmail;
    QLineEdit *lineEditPhone;
    QLineEdit *lineEditNewpassword;
    QLineEdit *lineEditConfirmpassword;

    void setupUi(QDialog *Forgotpassword)
    {
        if (Forgotpassword->objectName().isEmpty())
            Forgotpassword->setObjectName("Forgotpassword");
        Forgotpassword->resize(800, 600);
        widget = new QWidget(Forgotpassword);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(330, 330, 140, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelMessage = new QLabel(widget);
        labelMessage->setObjectName("labelMessage");

        horizontalLayout->addWidget(labelMessage);

        pushButtonChangepassword = new QPushButton(widget);
        pushButtonChangepassword->setObjectName("pushButtonChangepassword");

        horizontalLayout->addWidget(pushButtonChangepassword);

        widget1 = new QWidget(Forgotpassword);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(250, 130, 301, 191));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditEmail = new QLineEdit(widget1);
        lineEditEmail->setObjectName("lineEditEmail");

        verticalLayout->addWidget(lineEditEmail);

        lineEditPhone = new QLineEdit(widget1);
        lineEditPhone->setObjectName("lineEditPhone");

        verticalLayout->addWidget(lineEditPhone);

        lineEditNewpassword = new QLineEdit(widget1);
        lineEditNewpassword->setObjectName("lineEditNewpassword");

        verticalLayout->addWidget(lineEditNewpassword);

        lineEditConfirmpassword = new QLineEdit(widget1);
        lineEditConfirmpassword->setObjectName("lineEditConfirmpassword");

        verticalLayout->addWidget(lineEditConfirmpassword);


        retranslateUi(Forgotpassword);

        QMetaObject::connectSlotsByName(Forgotpassword);
    } // setupUi

    void retranslateUi(QDialog *Forgotpassword)
    {
        Forgotpassword->setWindowTitle(QCoreApplication::translate("Forgotpassword", "Dialog", nullptr));
        labelMessage->setText(QString());
        pushButtonChangepassword->setText(QCoreApplication::translate("Forgotpassword", "Change Password", nullptr));
        lineEditEmail->setPlaceholderText(QCoreApplication::translate("Forgotpassword", "Enter your email", nullptr));
        lineEditPhone->setPlaceholderText(QCoreApplication::translate("Forgotpassword", "Enter your phone number", nullptr));
        lineEditNewpassword->setPlaceholderText(QCoreApplication::translate("Forgotpassword", "New Password", nullptr));
        lineEditConfirmpassword->setPlaceholderText(QCoreApplication::translate("Forgotpassword", "Confirm New Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Forgotpassword: public Ui_Forgotpassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
