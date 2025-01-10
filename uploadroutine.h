#ifndef UPLOADROUTINE_H
#define UPLOADROUTINE_H

#include <QDialog>
#include <QComboBox>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include <QApplication>

namespace Ui {
class UploadRoutine;
}

class UploadRoutine : public QDialog
{
    Q_OBJECT

public:
    explicit UploadRoutine(QWidget *parent = nullptr);
    ~UploadRoutine();

private:
    Ui::UploadRoutine *ui;
    QComboBox *comboBox ;
};

class DropdownExample : public QWidget {
public:
    DropdownExample(QWidget *parent = nullptr) : QWidget(parent) {
        // Create the QComboBox widget
        QComboBox *comboBox = new QComboBox(this);

        // Add items to the combo box
        comboBox->addItem("Option 1");
        comboBox->addItem("Option 2");
        comboBox->addItem("Option 3");

        // Create a label to show the selected option
        QLabel *label = new QLabel("Select an option", this);

        // Connect the combo box signal to update the label text
        connect(comboBox, &QComboBox::currentTextChanged, label, &QLabel::setText);

        // Set up the layout
        QVBoxLayout *layout = new QVBoxLayout(this);
        layout->addWidget(comboBox);
        layout->addWidget(label);

        // Set layout for the window
        setLayout(layout);
        setWindowTitle("Dropdown Example");
    }
};


#endif // UPLOADROUTINE_H
