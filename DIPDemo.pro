#-------------------------------------------------
#
# Project created by QtCreator 2016-06-26T22:45:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DIPDemo
TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp                                                 \
    mainwindow.cpp                                                  \
    ImageFileOpt/ImageFileOpt.cpp                                   \
    ImageProcess/CVImgProc.cpp                                      \
    SubWindow/SelChannelDlg.cpp                                     \
    SubWindow/SelFlipTypeDlg.cpp                                    \
    SubWindow/SelColorReduceDivDlg.cpp                              \
    SubWindow/SelThreshDlg.cpp             