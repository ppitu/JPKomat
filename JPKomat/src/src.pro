QT      += core gui
QT      += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CommonCode/JPK/Window/jpkwindow.cpp \
    CommonCode/JPK/document.cpp \
    CommonCode/JPK/entity.cpp \
    CommonCode/JPK/headline.cpp \
    CommonCode/JPK/invoicesales.cpp \
    CommonCode/JPK/jpkv7.cpp \
    CommonCode/JPK/jpkv7reader.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    CommonCode/JPK/IDocument.h \
    CommonCode/JPK/Window/jpkwindow.h \
    CommonCode/JPK/document.h \
    CommonCode/JPK/entity.h \
    CommonCode/JPK/headline.h \
    CommonCode/JPK/invoicesales.h \
    CommonCode/JPK/jpkv7.h \
    CommonCode/JPK/jpkv7reader.h \
    mainwindow.h

FORMS += \
    CommonCode/JPK/Window/jpkwindow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
