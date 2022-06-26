#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    strPathQssFile(":/QSS/QSS/StyleSheet.qss"),
    clrBKApp(QColor(205,215,230)),
    processImg(NULL),
    processCVImg(NULL)
{
    ui->setupUi(this);

    CreateActions();
    CreateMenus();
  