QT += core
QT -= gui
#comment
TARGET = verklegtnamskeid
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    interface.cpp \
    Worker.cpp \
    person.cpp \
    datalayer.cpp

HEADERS += \
    interface.h \
    Worker.h \
    person.h \
    datalayer.h

