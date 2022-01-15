#include "SkinDetector.h"

SkinDetector::SkinDetector()
{
}

//this function will return a skin masked image
cv::Mat SkinDetector::GetSkin_YCrCb(const cv::Mat &srcImg)
{
    //YCrCb threshold
    // You can change the values and see what happens
    int Y_MIN  = 0;
    int Y_MAX  = 255;
    int Cr_MIN = 133;
    int Cr_MAX = 173;
    int Cb_MIN =