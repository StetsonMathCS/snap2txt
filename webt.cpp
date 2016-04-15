#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<iostream>
#include<sstream>

using namespace std;
int main() {
    
    cv::VideoCapture camera(0);
    if(!camera.isOpened()) return -1;

    while(1)
    {
        if(cv::waitKey(30) >= 0) break;
		cv::Mat cameraFrame;
		camera >> cameraFrame;
		imshow("cam", cameraFrame);
    }

    cv::waitKey(0); 

    return(0);
}
