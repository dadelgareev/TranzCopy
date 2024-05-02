QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    atmwindow.cpp \
    authwindow.cpp \
    balancedwindow.cpp \
    changeauthwindow.cpp \
    generatoraccount.cpp \
    main.cpp \
    mainwindow.cpp \
    payservice.cpp \
    recoverywindow.cpp \
    tradewindow.cpp

HEADERS += \
    atmwindow.h \
    authwindow.h \
    balancedwindow.h \
    changeauthwindow.h \
    generatoraccount.h \
    mainwindow.h \
    payservice.h \
    recoverywindow.h \
    tradewindow.h

FORMS += \
    atmwindow.ui \
    authwindow.ui \
    balancedwindow.ui \
    changeauthwindow.ui \
    generatoraccount.ui \
    mainwindow.ui \
    payservice.ui \
    recoverywindow.ui \
    tradewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    controlQuestions.txt \
    users.txt
