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
    int Cb_MIN = 77;
    int Cb_MAX = 127;

    cv::Mat skin;
    //first convert our RGB image to YCrCb
    cv::cvtColor(srcImg,skin,cv::COLOR_BGR2YCrCb);

    //uncomment the following line to see the image in YCrCb Color Space
    //cv::imshow("YCrCb Color Space",skin);

    //filter the image in YCrCb color space
    cv::inRange(skin,cv::Scalar(Y_MIN,Cr_MIN,Cb_MIN),cv::Scalar(Y_MAX,Cr_MAX,Cb_MAX),skin);

    return skin;
}

/*
Nusirwan Anwar bin Abdul Rahman, Kit Chong Wei and John See.
RGB-H-CbCr Skin Colour Model for Human Face Detection.*/
cv::Mat SkinDetector::GetS