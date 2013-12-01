#-------------------------------------------------
#
# Project created by QtCreator 2012-05-18T17:49:08
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = 6_1
CONFIG   += console
CONFIG   -= app_bundle
CONFIG += qtestlib


TEMPLATE = app


SOURCES += main.cpp \
    digit.cpp \
    expression.cpp

HEADERS += \
    expression.h \
    testcalculate.h \
    base.h \
    digit.h
