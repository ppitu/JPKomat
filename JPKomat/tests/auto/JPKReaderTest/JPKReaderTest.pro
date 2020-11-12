QT += core testlib
QT -= gui
QT += xml

TARGET = tst_jpkreadertest
CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

include(../../testConfig.pri)

INCDIR = ../../../src/CommonCode/JPK

INCLUDEPATH += $$INCDIR
HEADERS += $$INCDIR/jpkreader.h
HEADERS += $$INCDIR/headline.h
SOURCES += $$INCDIR/jpkreader.cpp
SOURCES += $$INCDIR/headline.cpp

SOURCES +=  tst_jpkreadertest.cpp
