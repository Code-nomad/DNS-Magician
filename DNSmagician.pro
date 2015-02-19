#-------------------------------------------------
#
# Project created by QtCreator 2015-02-15T21:30:11
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DNSmagician
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    interfacequery.cpp

HEADERS  += widget.h \
    interfacequery.h

FORMS    += widget.ui

CONFIG += static
