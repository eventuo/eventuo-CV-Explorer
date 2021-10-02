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
    SubWindow/SelThreshDlg.cpp                                      \
    ImageProcess/SkinDetector.cpp

HEADERS += mainwindow.h                                             \
    ImageFileOpt/ImageFileOpt.h                                     \
    ImageProcess/CVImgProc.h                                        \
    SubWindow/SelChannelDlg.h                                       \
    SubWindow/SelFlipTypeDlg.h                                      \
    SubWindow/SelColorReduceDivDlg.h                                \
    SubWindow/SelThreshDlg.h                                        \
    ImageProcess/SkinDetector.h

FORMS   += mainwindow.ui                                            \
    SubWindow/SelChannelDlg.ui                                      \
    SubWindow/SelFlipTypeDlg.ui                                     \
    SubWindow/SelColorReduceDivDlg.ui                               \
    SubWindow/SelThreshDlg.ui

win32 {

