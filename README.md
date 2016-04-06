snap2txt

Installation Process: 
  
  brew tap homebrew/science
  
  brew install opencv3
  
Description:

GenData.cpp:
    This file takes in a training_chars.png and then it will detect all the characters and when you tell the program what its looking at it will make the images.xml, and classifications.xml. 

TrainAndTest.cpp:
    This file takes in the xml files and turn on the camera to read the text of the images and print the text into the console. 
  
Compile Commands: 

  g++ -I/usr/local/Cellar/opencv3/3.1.0_2/include/opencv -I/usr/local/Cellar/opencv3/3.1.0_2/include -L/usr/local/Cellar/opencv3/3.1.0_2/lib -lopencv_shape -lopencv_stitching -lopencv_objdetect -lopencv_superres -lopencv_videostab -lopencv_calib3d -lopencv_features2d -lopencv_highgui -lopencv_videoio -lopencv_imgcodecs -lopencv_video -lopencv_photo -lopencv_ml -lopencv_imgproc -lopencv_flann -lopencv_core -o GenData GenData.cpp 


  g++ -I/usr/local/Cellar/opencv3/3.1.0_2/include/opencv -I/usr/local/Cellar/opencv3/3.1.0_2/include -L/usr/local/Cellar/opencv3/3.1.0_2/lib -lopencv_shape -lopencv_stitching -lopencv_objdetect -lopencv_superres -lopencv_videostab -lopencv_calib3d -lopencv_features2d -lopencv_highgui -lopencv_videoio -lopencv_imgcodecs -lopencv_video -lopencv_photo -lopencv_ml -lopencv_imgproc -lopencv_flann -lopencv_core -o TrainAndTest TrainAndTest.cpp 
  
  
