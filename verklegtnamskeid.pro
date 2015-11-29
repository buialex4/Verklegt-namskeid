QT += core
QT -= gui

TARGET = verklegtnamskeid
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    interface.cpp \
    person.dataLayer.cpp \
    Worker.cpp

HEADERS += \
    interface.h \
    person.dataLayer.h \
    Worker.h

