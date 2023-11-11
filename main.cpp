#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
int main()
{
    VideoCapture cap(0);
    Mat image;
    while(true){
        if(cap.read(image)){
            namedWindow("Display Image", WINDOW_AUTOSIZE );
            imshow("Display Image", image);
            waitKey(1);
        }
    }  
    
    return 0;
}