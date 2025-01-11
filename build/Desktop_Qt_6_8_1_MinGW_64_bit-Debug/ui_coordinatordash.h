/********************************************************************************
** Form generated from reading UI file 'coordinatordash.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COORDINATORDASH_H
#define UI_COORDINATORDASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_coordinatordash
{
public:
    QLabel *label;
    QPushButton *pushButtonUpload;

    void setupUi(QDialog *coordinatordash)
    {
        if (coordinatordash->objectName().isEmpty())
            coordinatordash->setObjectName("coordinatordash");
        coordinatordash->resize(1200, 900);
        label = new QLabel(coordinatordash);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 171, 81));
        pushButtonUpload = new QPushButton(coordinatordash);
        pushButtonUpload->setObjectName("pushButtonUpload");
        pushButtonUpload->setGeometry(QRect(210, 20, 141, 51));

        retranslateUi(coordinatordash);

        QMetaObject::connectSlotsByName(coordinatordash);
    } // setupUi

    void retranslateUi(QDialog *coordinatordash)
    {
        coordinatordash->setWindowTitle(QCoreApplication::translate("coordinatordash", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("coordinatordash", "Coordinator", nullptr));
        pushButtonUpload->setText(QCoreApplication::translate("coordinatordash", "Upload Routine", nullptr));
    } // retranslateUi

};

namespace Ui {
    class coordinatordash: public Ui_coordinatordash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COORDINATORDASH_H
