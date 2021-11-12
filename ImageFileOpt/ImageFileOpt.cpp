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
    QFileDialog *dlgFile = new QFileDialog(this,"File Dialog",".",selfilter);
    dlgFile->setFilter(QDir::Files);
    dlgFile->setViewMode(QFileDialog::List);
    dlgFile->setFileMode(QFileDialog::ExistingFile);
    if(dlgFile->exec() == QDialog::Accepted)
    {
        QStringList pathListImg;
        pathListImg = dlgFile->selectedFiles();
        infoImgFile = QFileInfo(pathListImg.at(0));
        retu