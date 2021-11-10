#include "ImageFileOpt.h"

ImageFileOpt::ImageFileOpt(QWidget *parent) : QWidget(parent)
{

}

int ImageFileOpt::OpenImage(QFileInfo &infoImgFile)
{
//    QString pathOriImg =
//            QFileDialog::getOpenFileName(this,tr("Open Image"),".",
//               