QT       += core

QT       -= gui

TARGET = 2_1
CONFIG   += console
CONFIG   -= app_bundle
CONFIG += qtestlib

TEMPLATE = app

SOURCES += main.cpp \
    hashtable.cpp \
    list.cpp

HEADERS += \
    hashtable.h \
    hashfunction.h \
    testlist.h \
    list.h \
    testhashtable.h

