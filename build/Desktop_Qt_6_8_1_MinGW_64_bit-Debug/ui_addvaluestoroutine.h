/********************************************************************************
** Form generated from reading UI file 'addvaluestoroutine.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVALUESTOROUTINE_H
#define UI_ADDVALUESTOROUTINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Addvaluestoroutine
{
public:
    QLineEdit *lineEditsname;
    QLineEdit *lineEditscode;
    QLineEdit *lineEdittname;
    QLineEdit *lineEditrno;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonNo;

    void setupUi(QDialog *Addvaluestoroutine)
    {
        if (Addvaluestoroutine->objectName().isEmpty())
            Addvaluestoroutine->setObjectName("Addvaluestoroutine");
        Addvaluestoroutine->resize(400, 300);
        lineEditsname = new QLineEdit(Addvaluestoroutine);
        lineEditsname->setObjectName("lineEditsname");
        lineEditsname->setGeometry(QRect(90, 130, 231, 20));
        lineEditscode = new QLineEdit(Addvaluestoroutine);
        lineEditscode->setObjectName("lineEditscode");
        lineEditscode->setGeometry(QRect(90, 100, 113, 20));
        lineEdittname = new QLineEdit(Addvaluestoroutine);
        lineEdittname->setObjectName("lineEdittname");
        lineEdittname->setGeometry(QRect(90, 160, 231, 20));
        lineEditrno = new QLineEdit(Addvaluestoroutine);
        lineEditrno->setObjectName("lineEditrno");
        lineEditrno->setGeometry(QRect(210, 100, 113, 20));
        pushButtonAdd = new QPushButton(Addvaluestoroutine);
        pushButtonAdd->setObjectName("pushButtonAdd");
        pushButtonAdd->setGeometry(QRect(170, 200, 80, 18));
        pushButtonNo = new QPushButton(Addvaluestoroutine);
        pushButtonNo->setObjectName("pushButtonNo");
        pushButtonNo->setGeometry(QRect(70, 230, 271, 21));

        retranslateUi(Addvaluestoroutine);

        QMetaObject::connectSlotsByName(Addvaluestoroutine);
    } // setupUi

    void retranslateUi(QDialog *Addvaluestoroutine)
    {
        Addvaluestoroutine->setWindowTitle(QCoreApplication::translate("Addvaluestoroutine", "Dialog", nullptr));
        lineEditsname->setPlaceholderText(QCoreApplication::translate("Addvaluestoroutine", "Enter subject name", nullptr));
        lineEditscode->setPlaceholderText(QCoreApplication::translate("Addvaluestoroutine", "Enter subject code", nullptr));
        lineEdittname->setPlaceholderText(QCoreApplication::translate("Addvaluestoroutine", "Enter teacher's name", nullptr));
        lineEditrno->setPlaceholderText(QCoreApplication::translate("Addvaluestoroutine", "Enter room no.", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("Addvaluestoroutine", "Add", nullptr));
        pushButtonNo->setText(QCoreApplication::translate("Addvaluestoroutine", "Click here if there is no class in this designated time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Addvaluestoroutine: public Ui_Addvaluestoroutine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVALUESTOROUTINE_H
