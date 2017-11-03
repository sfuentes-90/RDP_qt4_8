# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux
TARGET = Petri
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += Controller/GraphicsScene.cpp Controller/Petri.cpp MainWindow.cpp.cc Model/Matrix.cpp Model/Place.cpp Model/PlaceList.cpp Model/Transition.cpp Model/TransitionList.cpp View/ArcDialog.cpp.cc View/MatrixView.cpp.cc View/NodeDialog.cpp.cc View/TransitionDialog.cpp.cc main.cpp
HEADERS += Controller/GraphicsScene.h Controller/Petri.h MainWindow.h Model/Matrix.h Model/Place.h Model/PlaceList.h Model/Transition.h Model/TransitionList.h View/ArcDialog.h View/MatrixView.h View/NodeDialog.h View/TransitionDialog.h
FORMS += MainWindow.ui View/ArcDialog.ui View/MatrixView.ui View/NodeDialog.ui View/TransitionDialog.ui
RESOURCES += resources.qrc
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
equals(QT_MAJOR_VERSION, 4) {
QMAKE_CXXFLAGS += -std=c++11
}
equals(QT_MAJOR_VERSION, 5) {
CONFIG += c++11
}
