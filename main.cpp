//STD Headers
#include <stdio.h>
#include <iostream>
#include <vector>

//Open CV Headers
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/core/cvstd.hpp>
#include <opencv2/core/hal/interface.h>
#include <opencv2/core/mat.hpp>
#include <opencv2/core/types.hpp>
#include <opencv2/dnn/dnn.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>

//YOLO Headers
#include "Inference.h"

using namespace cv;
int main()
{
    VideoCapture cap(0);
    Mat image;
    Inference inference("C:\\Users\\jrabr\\OneDrive\\Documents\\Rover\\Object Detection\\yolov8s.onnx", Size(640, 640), "", false);
    while(true){
        if(cap.read(image)){
            std::cout << "bruh" << std::endl;
            std::vector<Detection> detections = inference.runInference(image);
            /*if(!detections.empty()){

            Rect box = detections[0].box;

            //Put the rectangle on the image
            cv::rectangle(image, box, cv::Scalar(0, 0, 0), 1, cv::LINE_8, 0);

            //Put the text on the image
            cv::Point text_position(80, 80);
            int font_size = 1;
            cv::Scalar font_Color(0, 0, 0);
            int font_weight = 2;
            putText(image, detections[0].className, text_position, cv::FONT_HERSHEY_COMPLEX, font_size, font_Color, font_weight); //Putting the text in the matrix//


            namedWindow("Display Image", WINDOW_AUTOSIZE );
            imshow("Display Image", image);
            waitKey(1);
            }*/
        }
    }  
    
    return 0;
}