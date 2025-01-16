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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Addvaluestoroutine
{
public:
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonNo;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditrno;
    QLineEdit *lineEditsname;
    QLineEdit *lineEdittname;

    void setupUi(QDialog *Addvaluestoroutine)
    {
        if (Addvaluestoroutine->objectName().isEmpty())
            Addvaluestoroutine->setObjectName("Addvaluestoroutine");
        Addvaluestoroutine->resize(758, 500);
        pushButtonAdd = new QPushButton(Addvaluestoroutine);
        pushButtonAdd->setObjectName("pushButtonAdd");
        pushButtonAdd->setGeometry(QRect(289, 247, 101, 31));
        pushButtonNo = new QPushButton(Addvaluestoroutine);
        pushButtonNo->setObjectName("pushButtonNo");
        pushButtonNo->setGeometry(QRect(190, 290, 291, 71));
        layoutWidget = new QWidget(Addvaluestoroutine);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(190, 130, 281, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditrno = new QLineEdit(layoutWidget);
        lineEditrno->setObjectName("lineEditrno");

        verticalLayout->addWidget(lineEditrno);

        lineEditsname = new QLineEdit(layoutWidget);
        lineEditsname->setObjectName("lineEditsname");

        verticalLayout->addWidget(lineEditsname);

        lineEdittname = new QLineEdit(layoutWidget);
        lineEdittname->setObjectName("lineEdittname");

        verticalLayout->addWidget(lineEdittname);


        retranslateUi(Addvaluestoroutine);

        QMetaObject::connectSlotsByName(Addvaluestoroutine);
    } // setupUi

    void retranslateUi(QDialog *Addvaluestoroutine)
    {
        Addvaluestoroutine->setWindowTitle(QCoreApplication::translate("Addvaluestoroutine", "Dialog", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("Addvaluestoroutine", "Add", nullptr));
        pushButtonNo->setText(QCoreApplication::translate("Addvaluestoroutine", "Click here if there is no class in this time", nullptr));
        lineEditrno->setPlaceholderText(QCoreApplication::translate("Addvaluestoroutine", "Enter room no.", nullptr));
        lineEditsname->setPlaceholderText(QCoreApplication::translate("Addvaluestoroutine", "Enter subject name", nullptr));
        lineEdittname->setPlaceholderText(QCoreApplication::translate("Addvaluestoroutine", "Enter teacher's name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Addvaluestoroutine: public Ui_Addvaluestoroutine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVALUESTOROUTINE_H
