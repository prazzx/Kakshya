#include "loginpage.h"  // Include the header file for the LoginPage
#include <QApplication>
#include<QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // style sheet for theme of application
    QFile styleSheetFile(":/resources/resources/Perstfic.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
        a.setStyleSheet(styleSheet);

    // Create and display the LoginPage
    LoginPage loginPage;
    loginPage.showMaximized();

    return a.exec();
}
