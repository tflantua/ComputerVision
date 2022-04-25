#include "DrawShapesAndText.h"
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

//////////////  Draw Shapes and Text //////////////////////


void DrawShapesAndText_main()
{
	//blank immage
	Mat img(512, 512, CV_8UC3, Scalar(0, 0, 0));

	circle(img, Point(256, 256), 150, Scalar(0, 69, 255), FILLED);
	circle(img, Point(256-75, 200), 75, Scalar(255, 69, 0), FILLED);
	circle(img, Point(256+75, 200), 75, Scalar(255, 69, 0), FILLED);
	rectangle(img, Point(130, 290), Point(382, 350), Scalar(255, 255, 255), FILLED);
	
	line(img, Point(130, 296), Point(382, 490), Scalar(255, 255, 255), 2);

	putText(img, "Bijgepast", Point(137, 300), FONT_HERSHEY_DUPLEX, 0.75, Scalar(0, 69, 255), 2);

	imshow("Image", img);
	waitKey(0);
}
