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
    cv::Mat ReadImage(const QString &pathImg);
    int SaveImage(const cv::Mat &matImage,const QString &pathImg);
    QImage CVMat2QImg(const cv::Mat &matImage);//老是出问题，待解决？？？？？？？？？？？？

    cv::Mat CvtToGrayImg(const cv::Mat &i