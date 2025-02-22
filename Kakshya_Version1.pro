QT +=  widgets
QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addvaluestoroutine.cpp \
    bookclassroom.cpp \
    coordinatordash.cpp \
    crdash.cpp \
    crloginpage.cpp \
    crsearchclass.cpp \
    forgotpassword.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    selectcr.cpp \
    signupdialog.cpp \
    studentcheckclass.cpp \
    studentdash.cpp \
    teacherdash.cpp \
    uploadroutine.cpp

HEADERS += \
    addvaluestoroutine.h \
    bookclassroom.h \
    coordinatordash.h \
    crdash.h \
    crloginpage.h \
    crsearchclass.h \
    forgotpassword.h \
    loginpage.h \
    mainwindow.h \
    selectcr.h \
    signupdialog.h \
    studentcheckclass.h \
    studentdash.h \
    teacherdash.h \
    uploadroutine.h

FORMS += \
    addvaluestoroutine.ui \
    bookclassroom.ui \
    coordinatordash.ui \
    crdash.ui \
    crloginpage.ui \
    crsearchclass.ui \
    forgotpassword.ui \
    loginpage.ui \
    selectcr.ui \
    signupdialog.ui \
    studentcheckclass.ui \
    studentdash.ui \
    teacherdash.ui \
    uploadroutine.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc

