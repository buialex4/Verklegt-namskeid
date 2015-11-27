QT += core
QT -= gui

TARGET = verklegtnamskeid
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    person.cpp \
    interface.cpp

HEADERS += \
    person.h \
    interface.h

