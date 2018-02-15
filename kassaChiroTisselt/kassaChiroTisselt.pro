#-------------------------------------------------
#
# Project created by QtCreator 2017-01-24T13:37:10
#
#-------------------------------------------------

QT       += core gui
QT       += core
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kassaChiroTisselt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    menu.cpp \
    aantallen.cpp \
    logscherm.cpp \
    afrekenen.cpp \
    verwijderen.cpp \
    backup.cpp

HEADERS  += mainwindow.h \
    menu.h \
    aantallen.h \
    logscherm.h \
    afrekenen.h \
    verwijderen.h \
    backup.h

FORMS    += mainwindow.ui \
    menu.ui \
    aantallen.ui \
    logscherm.ui \
    afrekenen.ui \
    verwijderen.ui
