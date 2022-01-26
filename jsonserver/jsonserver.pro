QT += core
QT -= gui
QT +=network

CONFIG += c++11

TARGET = jsonserver
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    myserver.cpp

DEFINES += QT_DEPRECATED_WARNINGS

HEADERS += \
    myserver.h
