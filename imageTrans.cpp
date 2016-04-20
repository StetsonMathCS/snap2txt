#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<tesseract/baseapi.h>
#include<tesseract/strngs.h>
#include<leptonica/allheaders.h>

#include<iostream>
#include<sstream>

using namespace std;
int imageTrans() {
    
    cv::VideoCapture camera(0);
    if(!camera.isOpened()) return -1;
	//Making the tesseract object
	tesseract::TessBaseAPI *myOCR = new tesseract::TessBaseAPI();
	const char* lan = "eng";
	
	//Leave the webcam open until a key press
	if (myOCR->Init(NULL, lan, tesseract::OEM_DEFAULT)) 
	{
	 std::cout << "error" << std::endl;
	 return -1;
	}
    while(1)
    {
        if(cv::waitKey(30) >= 0) break;
		cv::Mat cameraFrame;
		camera >> cameraFrame;
		//Creates a Grayscale matrix
		cv::Mat gray;
		cv::cvtColor(cameraFrame, gray, CV_BGR2GRAY);
		//Changes Grayscale matrix black/white
		cv::Mat thresh;
		cv::adaptiveThreshold(gray, thresh, 255, cv::ADAPTIVE_THRESH_MEAN_C, cv::THRESH_BINARY_INV, 11, 5);
		
		//saving the transformed image
		imwrite("test.jpg", thresh);
		PIX *pixs = pixRead("test.jpg");
		//This will send an image for tesseract to extract the text off of it 
		myOCR->SetImage(pixs);
		char *text;
		text = myOCR->GetUTF8Text();
		pixFreeData(pixs);
		//print the text from the image to the console 
		std::cout << text << std::endl;
		//this will display the webcam to the user

		imshow("cam", cameraFrame);
    }

    cv::waitKey(0);                                        

    return(0);
}
