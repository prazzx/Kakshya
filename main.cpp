#include "loginpage.h"  // Include the header file for the LoginPage
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create and display the LoginPage
    LoginPage loginPage;
    loginPage.showMaximized();

    return a.exec();
}
