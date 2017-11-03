#############################################################################
# Makefile for building: dist/Debug/GNU-Linux/Petri
# Generated by qmake (2.01a) (Qt 4.8.7) on: vie nov 3 01:31:10 2017
# Project:  nbproject/qt-Debug.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -std=c++11 -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -Inbproject -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I. -Inbproject -I.
LINK          = g++
LFLAGS        = -m64
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = build/Debug/GNU-Linux/

####### Files

SOURCES       = Controller/GraphicsScene.cpp \
		Controller/Petri.cpp \
		MainWindow.cpp.cc \
		Model/Matrix.cpp \
		Model/Place.cpp \
		Model/PlaceList.cpp \
		Model/Transition.cpp \
		Model/TransitionList.cpp \
		View/ArcDialog.cpp.cc \
		View/MatrixView.cpp.cc \
		View/NodeDialog.cpp.cc \
		View/TransitionDialog.cpp.cc \
		main.cpp moc_GraphicsScene.cpp \
		moc_MainWindow.cpp \
		moc_ArcDialog.cpp \
		moc_MatrixView.cpp \
		moc_NodeDialog.cpp \
		moc_TransitionDialog.cpp \
		qrc_resources.cpp
OBJECTS       = build/Debug/GNU-Linux/GraphicsScene.o \
		build/Debug/GNU-Linux/Petri.o \
		build/Debug/GNU-Linux/MainWindow.cpp.o \
		build/Debug/GNU-Linux/Matrix.o \
		build/Debug/GNU-Linux/Place.o \
		build/Debug/GNU-Linux/PlaceList.o \
		build/Debug/GNU-Linux/Transition.o \
		build/Debug/GNU-Linux/TransitionList.o \
		build/Debug/GNU-Linux/ArcDialog.cpp.o \
		build/Debug/GNU-Linux/MatrixView.cpp.o \
		build/Debug/GNU-Linux/NodeDialog.cpp.o \
		build/Debug/GNU-Linux/TransitionDialog.cpp.o \
		build/Debug/GNU-Linux/main.o \
		build/Debug/GNU-Linux/moc_GraphicsScene.o \
		build/Debug/GNU-Linux/moc_MainWindow.o \
		build/Debug/GNU-Linux/moc_ArcDialog.o \
		build/Debug/GNU-Linux/moc_MatrixView.o \
		build/Debug/GNU-Linux/moc_NodeDialog.o \
		build/Debug/GNU-Linux/moc_TransitionDialog.o \
		build/Debug/GNU-Linux/qrc_resources.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		nbproject/qt-Debug.pro
QMAKE_TARGET  = Petri
DESTDIR       = dist/Debug/GNU-Linux/
TARGET        = dist/Debug/GNU-Linux/Petri

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: qttmp-Debug.mk $(TARGET)

$(TARGET): ui_MainWindow.h ui_ArcDialog.h ui_MatrixView.h ui_NodeDialog.h ui_TransitionDialog.h $(OBJECTS)  
	@$(CHK_DIR_EXISTS) dist/Debug/GNU-Linux/ || $(MKDIR) dist/Debug/GNU-Linux/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9][^0-9]*\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

qttmp-Debug.mk: nbproject/qt-Debug.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro

dist: 
	@$(CHK_DIR_EXISTS) build/Debug/GNU-Linux/Petri1.0.0 || $(MKDIR) build/Debug/GNU-Linux/Petri1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) build/Debug/GNU-Linux/Petri1.0.0/ && $(COPY_FILE) --parents Controller/GraphicsScene.h Controller/Petri.h MainWindow.h Model/Matrix.h Model/Place.h Model/PlaceList.h Model/Transition.h Model/TransitionList.h View/ArcDialog.h View/MatrixView.h View/NodeDialog.h View/TransitionDialog.h build/Debug/GNU-Linux/Petri1.0.0/ && $(COPY_FILE) --parents resources.qrc build/Debug/GNU-Linux/Petri1.0.0/ && $(COPY_FILE) --parents Controller/GraphicsScene.cpp Controller/Petri.cpp MainWindow.cpp.cc Model/Matrix.cpp Model/Place.cpp Model/PlaceList.cpp Model/Transition.cpp Model/TransitionList.cpp View/ArcDialog.cpp.cc View/MatrixView.cpp.cc View/NodeDialog.cpp.cc View/TransitionDialog.cpp.cc main.cpp build/Debug/GNU-Linux/Petri1.0.0/ && $(COPY_FILE) --parents MainWindow.ui View/ArcDialog.ui View/MatrixView.ui View/NodeDialog.ui View/TransitionDialog.ui build/Debug/GNU-Linux/Petri1.0.0/ && (cd `dirname build/Debug/GNU-Linux/Petri1.0.0` && $(TAR) Petri1.0.0.tar Petri1.0.0 && $(COMPRESS) Petri1.0.0.tar) && $(MOVE) `dirname build/Debug/GNU-Linux/Petri1.0.0`/Petri1.0.0.tar.gz . && $(DEL_FILE) -r build/Debug/GNU-Linux/Petri1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) qttmp-Debug.mk


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_GraphicsScene.cpp moc_MainWindow.cpp moc_ArcDialog.cpp moc_MatrixView.cpp moc_NodeDialog.cpp moc_TransitionDialog.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_GraphicsScene.cpp moc_MainWindow.cpp moc_ArcDialog.cpp moc_MatrixView.cpp moc_NodeDialog.cpp moc_TransitionDialog.cpp
moc_GraphicsScene.cpp: Model/Place.h \
		Controller/GraphicsScene.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) Controller/GraphicsScene.h -o moc_GraphicsScene.cpp

moc_MainWindow.cpp: ../ProyectoMF/Model/PlaceList.h \
		../ProyectoMF/Model/Place.h \
		../ProyectoMF/Model/TransitionList.h \
		../ProyectoMF/Model/Transition.h \
		../ProyectoMF/Model/Matrix.h \
		../ProyectoMF/Controller/GraphicsScene.h \
		../ProyectoMF/Controller/Petri.h \
		MainWindow.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) MainWindow.h -o moc_MainWindow.cpp

moc_ArcDialog.cpp: View/ArcDialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) View/ArcDialog.h -o moc_ArcDialog.cpp

moc_MatrixView.cpp: ../ProyectoMF/Model/Matrix.h \
		../ProyectoMF/Model/TransitionList.h \
		../ProyectoMF/Model/Transition.h \
		../ProyectoMF/Model/PlaceList.h \
		../ProyectoMF/Model/Place.h \
		View/MatrixView.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) View/MatrixView.h -o moc_MatrixView.cpp

moc_NodeDialog.cpp: View/NodeDialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) View/NodeDialog.h -o moc_NodeDialog.cpp

moc_TransitionDialog.cpp: View/TransitionDialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) View/TransitionDialog.h -o moc_TransitionDialog.cpp

compiler_rcc_make_all: qrc_resources.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_resources.cpp
qrc_resources.cpp: resources.qrc
	/usr/lib/x86_64-linux-gnu/qt4/bin/rcc -name resources resources.qrc -o qrc_resources.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_MainWindow.h ui_ArcDialog.h ui_MatrixView.h ui_NodeDialog.h ui_TransitionDialog.h
compiler_uic_clean:
	-$(DEL_FILE) ui_MainWindow.h ui_ArcDialog.h ui_MatrixView.h ui_NodeDialog.h ui_TransitionDialog.h
ui_MainWindow.h: MainWindow.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic MainWindow.ui -o ui_MainWindow.h

ui_ArcDialog.h: View/ArcDialog.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic View/ArcDialog.ui -o ui_ArcDialog.h

ui_MatrixView.h: View/MatrixView.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic View/MatrixView.ui -o ui_MatrixView.h

ui_NodeDialog.h: View/NodeDialog.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic View/NodeDialog.ui -o ui_NodeDialog.h

ui_TransitionDialog.h: View/TransitionDialog.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic View/TransitionDialog.ui -o ui_TransitionDialog.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

build/Debug/GNU-Linux/GraphicsScene.o: Controller/GraphicsScene.cpp Controller/GraphicsScene.h \
		Model/Place.h \
		View/NodeDialog.h \
		View/TransitionDialog.h \
		View/ArcDialog.h \
		MainWindow.h \
		../ProyectoMF/Model/PlaceList.h \
		../ProyectoMF/Model/Place.h \
		../ProyectoMF/Model/TransitionList.h \
		../ProyectoMF/Model/Transition.h \
		../ProyectoMF/Model/Matrix.h \
		../ProyectoMF/Controller/GraphicsScene.h \
		../ProyectoMF/Controller/Petri.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/GraphicsScene.o Controller/GraphicsScene.cpp

build/Debug/GNU-Linux/Petri.o: Controller/Petri.cpp Controller/Petri.h \
		Controller/GraphicsScene.h \
		Model/Place.h \
		Model/PlaceList.h \
		../ProyectoMF/Model/Place.h \
		Model/TransitionList.h \
		Model/Transition.h \
		Model/Matrix.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/Petri.o Controller/Petri.cpp

build/Debug/GNU-Linux/MainWindow.cpp.o: MainWindow.cpp.cc MainWindow.h \
		../ProyectoMF/Model/PlaceList.h \
		../ProyectoMF/Model/Place.h \
		../ProyectoMF/Model/TransitionList.h \
		../ProyectoMF/Model/Transition.h \
		../ProyectoMF/Model/Matrix.h \
		../ProyectoMF/Controller/GraphicsScene.h \
		../ProyectoMF/Controller/Petri.h \
		ui_MainWindow.h \
		View/MatrixView.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/MainWindow.cpp.o MainWindow.cpp.cc

build/Debug/GNU-Linux/Matrix.o: Model/Matrix.cpp Model/Matrix.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/Matrix.o Model/Matrix.cpp

build/Debug/GNU-Linux/Place.o: Model/Place.cpp Model/Place.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/Place.o Model/Place.cpp

build/Debug/GNU-Linux/PlaceList.o: Model/PlaceList.cpp Model/PlaceList.h \
		../ProyectoMF/Model/Place.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/PlaceList.o Model/PlaceList.cpp

build/Debug/GNU-Linux/Transition.o: Model/Transition.cpp Model/Transition.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/Transition.o Model/Transition.cpp

build/Debug/GNU-Linux/TransitionList.o: Model/TransitionList.cpp Model/TransitionList.h \
		Model/Transition.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/TransitionList.o Model/TransitionList.cpp

build/Debug/GNU-Linux/ArcDialog.cpp.o: View/ArcDialog.cpp.cc View/ArcDialog.h \
		ui_ArcDialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/ArcDialog.cpp.o View/ArcDialog.cpp.cc

build/Debug/GNU-Linux/MatrixView.cpp.o: View/MatrixView.cpp.cc View/MatrixView.h \
		../ProyectoMF/Model/Matrix.h \
		../ProyectoMF/Model/TransitionList.h \
		../ProyectoMF/Model/Transition.h \
		../ProyectoMF/Model/PlaceList.h \
		../ProyectoMF/Model/Place.h \
		ui_MatrixView.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/MatrixView.cpp.o View/MatrixView.cpp.cc

build/Debug/GNU-Linux/NodeDialog.cpp.o: View/NodeDialog.cpp.cc View/NodeDialog.h \
		ui_NodeDialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/NodeDialog.cpp.o View/NodeDialog.cpp.cc

build/Debug/GNU-Linux/TransitionDialog.cpp.o: View/TransitionDialog.cpp.cc View/TransitionDialog.h \
		ui_TransitionDialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/TransitionDialog.cpp.o View/TransitionDialog.cpp.cc

build/Debug/GNU-Linux/main.o: main.cpp MainWindow.h \
		../ProyectoMF/Model/PlaceList.h \
		../ProyectoMF/Model/Place.h \
		../ProyectoMF/Model/TransitionList.h \
		../ProyectoMF/Model/Transition.h \
		../ProyectoMF/Model/Matrix.h \
		../ProyectoMF/Controller/GraphicsScene.h \
		../ProyectoMF/Controller/Petri.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/main.o main.cpp

build/Debug/GNU-Linux/moc_GraphicsScene.o: moc_GraphicsScene.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/moc_GraphicsScene.o moc_GraphicsScene.cpp

build/Debug/GNU-Linux/moc_MainWindow.o: moc_MainWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/moc_MainWindow.o moc_MainWindow.cpp

build/Debug/GNU-Linux/moc_ArcDialog.o: moc_ArcDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/moc_ArcDialog.o moc_ArcDialog.cpp

build/Debug/GNU-Linux/moc_MatrixView.o: moc_MatrixView.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/moc_MatrixView.o moc_MatrixView.cpp

build/Debug/GNU-Linux/moc_NodeDialog.o: moc_NodeDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/moc_NodeDialog.o moc_NodeDialog.cpp

build/Debug/GNU-Linux/moc_TransitionDialog.o: moc_TransitionDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/moc_TransitionDialog.o moc_TransitionDialog.cpp

build/Debug/GNU-Linux/qrc_resources.o: qrc_resources.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/qrc_resources.o qrc_resources.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:
