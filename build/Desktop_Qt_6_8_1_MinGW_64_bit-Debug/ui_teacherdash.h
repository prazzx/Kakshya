/********************************************************************************
** Form generated from reading UI file 'teacherdash.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERDASH_H
#define UI_TEACHERDASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_teacherdash
{
public:
    QLabel *label;

    void setupUi(QDialog *teacherdash)
    {
        if (teacherdash->objectName().isEmpty())
            teacherdash->setObjectName("teacherdash");
        teacherdash->resize(400, 300);
        label = new QLabel(teacherdash);
        label->setObjectName("label");
        label->setGeometry(QRect(126, 90, 101, 20));

        retranslateUi(teacherdash);

        QMetaObject::connectSlotsByName(teacherdash);
    } // setupUi

    void retranslateUi(QDialog *teacherdash)
    {
        teacherdash->setWindowTitle(QCoreApplication::translate("teacherdash", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("teacherdash", "Teacher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacherdash: public Ui_teacherdash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERDASH_H
