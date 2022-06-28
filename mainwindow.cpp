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
    ui->mainToolBar->hide();
    InitMainWindow();
    InitStatusBar();

    BeautifyUI();
}

//创建菜单项
void MainWindow::CreateActions()
{
    //“文件”
    actionOpenImg = new QAction(tr("打开图像"),this);