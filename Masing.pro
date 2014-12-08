#-------------------------------------------------
#
# Project created by QtCreator 2014-12-02T16:03:06
#
#-------------------------------------------------
cache();
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Masing
TEMPLATE = app
CONFIG += c++11


SOURCES += main.cpp \
        mainwindow.cpp \
        audiodevicebase.cpp \
        audiopreferencedialog.cpp \
    audiomodule.cpp \
    audiofile.cpp \
    audiofilemanager.cpp

HEADERS  += mainwindow.h \
        audiodevicebase.h \
        audiopreferencedialog.h \
    audiomodule.h \
    audiofile.h \
    audiofilemanager.h

FORMS    += mainwindow.ui \
        audiopreferencedialog.ui


#include(3rdParties/portaudio)
INCLUDEPATH += '3rdParties/portaudio/include'
LIBS += -L/usr/local/lib -lportaudio

#include(3rdParties/portaudio)
INCLUDEPATH += '3rdParties/libsndfile/include'
LIBS += -L/usr/local/lib -lsndfile
