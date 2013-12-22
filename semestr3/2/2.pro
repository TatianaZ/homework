QT     += core

QT     -= gui


TARGET = 2
CONFIG += console
CONFIG -= app_bundle
CONFIG += qtestlib

SOURCES += main.cpp \
    computer.cpp \
    network.cpp

HEADERS += \
    computer.h \
    network.h \
    os.h \
    testnet.h

