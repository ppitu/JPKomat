QT += testlib
QT -= gui
QT += xml

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

include(../../testConfig.pri)

INCDIR = ../../../src/CommonCode/JPK
INCLUDEPATH += $$INCDIR
HEADERS += $$INCDIR/jpkv7reader.h
SOURCES += $$INCDIR/jpkv7reader.cpp
HEADERS += $$INCDIR/jpkv7.h
SOURCES += $$INCDIR/jpkv7.cpp
HEADERS += $$INCDIR/entity.h
SOURCES += $$INCDIR/entity.cpp
HEADERS += $$INCDIR/headline.h
SOURCES += $$INCDIR/headline.cpp

SOURCES +=  tst_jpkv7readerentity_test.cpp
