QT += core
QT -= gui
#comment
TARGET = verklegtnamskeid
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Worker.cpp \
    Datalayer.cpp \
    Interface.cpp \
    Person.cpp

HEADERS += \
    Worker.h \
    Person.h \
    Interface.h \
    Datalayer.h

