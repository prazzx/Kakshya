/********************************************************************************
** Form generated from reading UI file 'selectcr.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCR_H
#define UI_SELECTCR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_selectcr
{
public:
    QComboBox *comboBoxSelect;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditConfirmpassword;
    QPushButton *pushButtonSignUp;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *selectcr)
    {
        if (selectcr->objectName().isEmpty())
            selectcr->setObjectName("selectcr");
        selectcr->resize(1114, 732);
        comboBoxSelect = new QComboBox(selectcr);
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->setObjectName("comboBoxSelect");
        comboBoxSelect->setGeometry(QRect(30, 20, 161, 31));
        comboBoxSelect->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Arial\";\n"
"color: rgb(0, 85, 0);"));
        lineEditPassword = new QLineEdit(selectcr);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(40, 160, 297, 28));
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);
        lineEditConfirmpassword = new QLineEdit(selectcr);
        lineEditConfirmpassword->setObjectName("lineEditConfirmpassword");
        lineEditConfirmpassword->setGeometry(QRect(40, 210, 297, 28));
        lineEditConfirmpassword->setEchoMode(QLineEdit::EchoMode::Password);
        pushButtonSignUp = new QPushButton(selectcr);
        pushButtonSignUp->setObjectName("pushButtonSignUp");
        pushButtonSignUp->setGeometry(QRect(40, 260, 297, 29));
        label_2 = new QLabel(selectcr);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 60, 281, 81));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Arial\";\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(selectcr);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(830, 20, 111, 41));

        retranslateUi(selectcr);

        QMetaObject::connectSlotsByName(selectcr);
    } // setupUi

    void retranslateUi(QDialog *selectcr)
    {
        selectcr->setWindowTitle(QCoreApplication::translate("selectcr", "Dialog", nullptr));
        comboBoxSelect->setItemText(0, QCoreApplication::translate("selectcr", "BIT", nullptr));
        comboBoxSelect->setItemText(1, QCoreApplication::translate("selectcr", "CEI_I", nullptr));
        comboBoxSelect->setItemText(2, QCoreApplication::translate("selectcr", "CEI_II", nullptr));
        comboBoxSelect->setItemText(3, QCoreApplication::translate("selectcr", "CEII_I", nullptr));
        comboBoxSelect->setItemText(4, QCoreApplication::translate("selectcr", "CEII_II", nullptr));
        comboBoxSelect->setItemText(5, QCoreApplication::translate("selectcr", "CEIII_I", nullptr));
        comboBoxSelect->setItemText(6, QCoreApplication::translate("selectcr", "CEIII_II", nullptr));
        comboBoxSelect->setItemText(7, QCoreApplication::translate("selectcr", "CEIV_I", nullptr));

        lineEditPassword->setText(QString());
        lineEditPassword->setPlaceholderText(QCoreApplication::translate("selectcr", "Password", nullptr));
        lineEditConfirmpassword->setPlaceholderText(QCoreApplication::translate("selectcr", "Confirm password", nullptr));
        pushButtonSignUp->setText(QCoreApplication::translate("selectcr", "ok", nullptr));
#if QT_CONFIG(whatsthis)
        label_2->setWhatsThis(QCoreApplication::translate("selectcr", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("selectcr", "<html><head/><body><p><span style=\" font-size:12pt;\">Enter password for CR</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("selectcr", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectcr: public Ui_selectcr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCR_H
