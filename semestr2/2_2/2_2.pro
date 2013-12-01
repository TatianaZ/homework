QT       += core

QT       -= gui

TARGET = 2_2
CONFIG   += console
CONFIG   -= app_bundle
CONFIG += qtestlib

TEMPLATE = app

SOURCES += main.cpp \
    linkedstack.cpp \
    arraystack.cpp \
    calculate.cpp

HEADERS += \
    basestack.h \
    linkedstack.h \
    arraystack.h \
    calculate.h \
    testarraystack.h \
    testlinkedstack.h \
    testcalculate.h


