
#include "CVImgProc.h"

CVImgProc::CVImgProc()
{

}

QImage CVImgProc::CVMat2QImg(const cv::Mat &matImage)
{
    cv::Mat image;
    //image.create(rows,cols,channels);

    QImage qImg;//老是出问题，待解决？？？？？？？？？？？？
    if(matImage.type() == CV_8UC3)
    {
        cv::cvtColor(matImage,image,CV_BGR2RGB);
        qImg = QImage((const unsigned char*)(image.data),
                      image.cols,image.rows,
                      image.cols*image.channels(),
                      QImage::Format_RGB888);
    }
//    if(matImage.type() == CV_8UC1)// 8-bits unsigned, NO. OF CHANNELS = 1
//    {
//        qImg = QImage(image.cols,
//                      image.rows,
//                      QImage::Format_Indexed8);
//        // Set the color table (used to translate colour indexes to qRgb values)
//        qImg.setColorCount(256);
//        for(int i = 0; i < 256; i++)
//        {
//            qImg.setColor(i, qRgb(i, i, i));
//        }
//        // Copy input image
//        uchar *pSrc = image.data;
//        for(int row = 0; row < image.rows; row ++)
//        {
//            uchar *pDest = qImg.scanLine(row);
//            memcpy(pDest, pSrc, image.cols);
//            pSrc += image.step;
//        }
//    }