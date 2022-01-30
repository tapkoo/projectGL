QT += core
QT -= gui
QT +=network

CONFIG += c++11

TARGET = Myserver
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Myserver.cpp

DEFINES += QT_DEPRECATED_WARNINGS

HEADERS += \
    Myserver.h
