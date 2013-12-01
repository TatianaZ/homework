QT       += core

QT       -= gui

TARGET = 3_1
CONFIG   += console
CONFIG   -= app_bundle
CONFIG += qtestlib

TEMPLATE = app

SOURCES += main.cpp \
    bublesort.cpp \
    shellsort.cpp

HEADERS += \
    basesort.h \
    bublesort.h \
    shellsort.h \
    testbublesort.h \
    testshellsorting.h

