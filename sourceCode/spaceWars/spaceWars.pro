#-------------------------------------------------
#
# Project created by QtCreator 2014-08-19T18:43:46
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = spaceWars
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    consoleTools/basicGraphic/basicgraphic.cpp \
    point.cpp \
    graphicchar.cpp \
    graphicobjects.cpp \
    ship.cpp

HEADERS += \
    consoleTools/basicGraphic/basicgraphic.h \
    point.h \
    graphicchar.h \
    graphicobjects.h \
    ship.h
