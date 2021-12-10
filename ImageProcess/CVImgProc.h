#ifndef CVIMGPROC_H
#define CVIMGPROC_H

#include <QObject>
#include <QImage>

#include <opencv2/opencv.hpp>

class CVImgProc
{
public:
    CVImgProc();

public:
    cv::Mat ReadImage(const QString 