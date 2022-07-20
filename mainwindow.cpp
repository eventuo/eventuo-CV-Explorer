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
    connect(actionOpenImg,SIGNAL(triggered(bool)),this,SLOT(slotOpenImgSrc()));

    actionSaveImgSrc = new QAction(tr("保存原始图像..."),this);
    connect(actionSaveImgSrc,SIGNAL(triggered(bool)),this,SLOT(slotSaveImgSrc()));

    actionSaveImgDst = new QAction(tr("保存目标图像..."),this);
    connect(actionSaveImgDst,SIGNAL(triggered(bool)),this,SLOT(slotSaveImgDst()));

    actionSwapImg = new QAction(tr("原始目标图像对调"),this);
    connect(actionSwapImg,SIGNAL(triggered(bool)),this,SLOT(slotSwapImg()));

    //设备
    actionOpenCamera = new QAction(tr("打开摄像头"),this);
    connect(actionOpenCamera,SIGNAL(triggered(bool)),this,SLOT(slotOpenCamera()));

    actionCloseCamera = new QAction(tr("关闭摄像头"),this);
    connect(actionCloseCamera,SIGNAL(triggered(bool)),this,SLOT(slotCloseCamera()));

    //“点运算”
    actionGray = new QAction(tr("图像灰度化"),this);
    connect(actionGray,SIGNAL(triggered(bool)),this,SLOT(slotGrayImg()));

    actionHist = new QAction(tr("灰度直方图..."),this);
    connect(actionHist,SIGNAL(triggered(bool)),this,SLOT(slotHistogram()));

    actionHistEqualize = new QAction(tr("直方图均衡化"),this);
    connect(actionHistEqualize,SIGNAL(triggered(bool)),this,SLOT(slotHistEqualize()));

    actionThresholdImg = new QAction(tr("二值化图像..."),this);
    connect(actionThresholdImg,SIGNAL(triggered(bool)),this,SLOT(slotThresholdImg()));

    actionColorReduce = new QAction(tr("图像减色..."),this);
    connect(actionColorReduce,SIGNAL(triggered(bool)),this,SLOT(slotColorReduce()));

    actionSaltImage = new QAction(tr("椒盐噪点"),this);
    connect(actionSaltImage,SIGNAL(triggered(bool)),this,SLOT(slotSaltImage()));

    //"图像变换"
    actionFlip = new QAction(tr("图像反转..."),this);
    connect(actionFlip,SIGNAL(triggered(bool)),this,SLOT(slotFlipImg()));

    //"图像滤波"
    actionFilter2D = new QAction(tr("Filter2D..."),this);
    connect(actionFilter2D,SIGNAL(triggered(bool)),this,SLOT(slotFilter2D()));

    //"目标检测"
    actionSkinDetect = new QAction(tr("肤色检测"),this);
    connect(actionSkinDetect,SIGNAL(triggered(bool)),this,SLOT(slotDetectSkin()));
}

//创建菜单，添加菜单项
void MainWindow::CreateMenus()
{
    menuFile = ui->menuBar->addMenu(tr("文件"));
    menuFile->addAction(actionOpenImg);
    menuFile->addSeparator();
    menuFile->addAction(actionSaveImgSrc);
    menuFile->addAction(actionSaveImgDst);
    menuFile->addSeparator();
    menuFile->addAction(actionSwapImg);

    menuDevices = ui->menuBar->addMenu(tr("设备"));
    menuDevices->addAction(actionOpenCamera);
    menuDevices->addAction(actionCloseCamera);

    menuPointOperate = ui->menuBar->addMenu(tr("点运算"));
    menuPointOperate->addAction(actionGray);
    menuPointOperate->addSeparator();
    menuPointOperate->addAction(actionHist);
    menuPointOperate->addAction(actionHistEqualize);
    menuPointOperate->add