#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

#ifdef WINDOWS
  #include<tesseract/api/baseapi.h>
  #include<tesseract/ccutil/strngs.h>
#else
  #include<tesseract/baseapi.h>
  #include<tesseract/strngs.h>
#endif

#include<leptonica/allheaders.h>
//#include"database.h"
#include<iostream>
#include<sstream>
#include<string>
int counter = 0;

using namespace std;
char* imageTrans() {

	counter++;

    cv::VideoCapture camera(0);
    //if(!camera.isOpened()) return null;
	//Making the tesseract object
	tesseract::TessBaseAPI *myOCR = new tesseract::TessBaseAPI();
	const char* lan = "eng";

	cv::Mat cameraFrame;
	camera >> cameraFrame;
	imwrite("image" + to_string(counter) + ".jpg", cameraFrame);
	//Creates a Grayscale matrix
	cv::Mat gray;
	cv::cvtColor(cameraFrame, gray, CV_BGR2GRAY);
	//Changes Grayscale matrix black/white
	cv::Mat thresh;
	cv::adaptiveThreshold(gray, thresh, 255, cv::ADAPTIVE_THRESH_MEAN_C, cv::THRESH_BINARY_INV, 11, 5);

	//saving the transformed image
	imwrite("temp.jpg", thresh);
	PIX *pixs = pixRead("temp.jpg");
	//This will send an image for tesseract to extract the text off of it 
	myOCR->SetImage(pixs);
	char *text;
	text = myOCR->GetUTF8Text();
	pixFreeData(pixs);

    return text;
}
