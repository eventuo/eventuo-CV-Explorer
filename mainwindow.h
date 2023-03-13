#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "./ImageFileOpt/ImageFileOpt.h"
#include "./ImageProcess/SkinDetector.h"
#include "./SubWindow/SelChannelDlg.h"
#include "./SubWindow/SelFlipTypeDlg.h"
#include "./SubWindow/SelColorReduceDivDlg.h"
#include "./SubWindow/SelThreshDlg.h"

#include <QMainWindow>
#include <QMessageBox>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>

#include <QResizeEvent>

#include <QTimer>

enum FUN_POINTER_TYPE{STATIC_GLOBAL, CVIMGPROC, SKINDETECTOR};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *paren