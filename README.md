snap2txt

Installation Process: 

brew tap homebrew/science 

brew install opencv3

brew install tesseract 

brew install leptonica

Description:

imageTrans.cpp:
    This file will open the webcam and display it using opencv3. Now it will save a temporary image to send to tesseract to extract the text. 


Compile Commands:

g++ -I/usr/local/Cellar/opencv3/3.1.0_2/include/opencv -I/usr/local/Cellar/opencv3/3.1.0_2/include -L/usr/local/Cellar/opencv3/3.1.0_2/lib
-lopencv_shape -lopencv_stitching -lopencv_objdetect -lopencv_superres -lopencv_videostab -lopencv_calib3d -lopencv_features2d -lopencv_highgui
-lopencv_videoio -lopencv_imgcodecs -lopencv_video -lopencv_photo -lopencv_ml -lopencv_imgproc -lopencv_flann -lopencv_core
-I/usr/local/Cellar/tesseract/3.04.01_1/include/tesseract -L/usr/local/Cellar/tesseract/3.04.01_1/lib
-I/usr/local/Cellar/leptonica/1.72/include/leptonica -L/usr/local/Cellar/leptonica/1.72/lib -llept -ltesseract -o imageTrans imageTrans.cpp
