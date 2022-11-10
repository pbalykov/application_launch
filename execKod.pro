QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17
TARGET = launching_applications

OBJECTS_DIR = obj
DESTDIR = bin
MOC_DIR = mos
RCC_DIR = rcc
UI_DIR = ui

SOURCES += \
    scr/main.cpp \
    scr/mainwindow.cpp 

HEADERS += \
    headers/mainwindow.h

FORMS += \
    forms/mainwindow.ui

TRANSLATIONS += \
    translations/execKod_en_US.ts

RESOURCES += \
    resources/imgRez.qrc
