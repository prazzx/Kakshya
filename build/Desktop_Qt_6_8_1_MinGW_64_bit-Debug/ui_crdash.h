/********************************************************************************
** Form generated from reading UI file 'crdash.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRDASH_H
#define UI_CRDASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_crdash
{
public:
    QLabel *label;

    void setupUi(QDialog *crdash)
    {
        if (crdash->objectName().isEmpty())
            crdash->setObjectName("crdash");
        crdash->resize(400, 300);
        label = new QLabel(crdash);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 70, 37, 12));

        retranslateUi(crdash);

        QMetaObject::connectSlotsByName(crdash);
    } // setupUi

    void retranslateUi(QDialog *crdash)
    {
        crdash->setWindowTitle(QCoreApplication::translate("crdash", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("crdash", "CR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class crdash: public Ui_crdash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRDASH_H
