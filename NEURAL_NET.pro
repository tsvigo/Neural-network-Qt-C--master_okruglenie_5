#-------------------------------------------------
#
# Project created by QtCreator 2015-01-18T19:40:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NEURAL_NET
TEMPLATE = app


SOURCES += main.cpp\
    form.cpp \
        readmnist.cpp \
    digitviewer.cpp \
    perceptron.cpp \
    layer.cpp \
    mainview.cpp \
    datasource.cpp

HEADERS  += readmnist.h \
    RoundedDouble.h \
    digitviewer.h \
    form.h \
    perceptron.h \
    layer.h \
    mainview.h \
    datasource.h

FORMS    += readmnist.ui \
    form.ui \
    layerview.ui \
    mainview.ui


RESOURCES += /home/newuser/my_projects_qt_2/Neural-network-Qt-C--master_okruglenie_2/resources.qrc
CONFIG += c++17
