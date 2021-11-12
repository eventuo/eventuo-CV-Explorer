#include "ImageFileOpt.h"

ImageFileOpt::ImageFileOpt(QWidget *parent) : QWidget(parent)
{

}

int ImageFileOpt::OpenImage(QFileInfo &infoImgFile)
{
//    QString pathOriImg =
//            QFileDialog::getOpenFileName(this,tr("Open Image"),".",
//                                         tr("Image Files(*.png *.jpg *.jpeg *.bmp)"));

    QString selfilter = tr("Image Files(*.png *.jpg *.jpeg *.bmp);;All Files(*)");
    QFileDialog *dlgFile = n