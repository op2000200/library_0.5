QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    allbook.cpp \
    bibli.cpp \
    book.cpp \
    directormainwindow.cpp \
    main.cpp \
    helloscreen.cpp \
    reader.cpp

HEADERS += \
    allbook.h \
    bibli.h \
    book.h \
    directormainwindow.h \
    helloscreen.h \
    reader.h

FORMS += \
    allbook.ui \
    bibli.ui \
    book.ui \
    directormainwindow.ui \
    helloscreen.ui \
    reader.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    resourses/вход.jpg

RESOURCES +=
