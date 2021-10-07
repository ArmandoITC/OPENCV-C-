#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
    Mat img;
    String Path = "C:\\Users\\arks3\\Downloads\\RGB.png";
    img = imread(Path, 1);  
    namedWindow("Original Image", WINDOW_NORMAL);
    imshow("Original Image", img);
    Mat rgbchannel[3];
    split(img, rgbchannel);
    namedWindow("Blue", WINDOW_NORMAL);
    namedWindow("Red", WINDOW_NORMAL);
    namedWindow("Green", WINDOW_NORMAL);
    imshow("Blue", rgbchannel[0]);
    imshow("Green", rgbchannel[1]);
    imshow("Red", rgbchannel[2]);
    waitKey(0);
    return 0;

}
