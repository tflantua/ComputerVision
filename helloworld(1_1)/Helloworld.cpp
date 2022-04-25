#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>

using namespace cv;
using namespace std;

void HelloWorld1();
void HelloWorld2();
void HelloWorld3();

int main()
{
	HelloWorld1();
	//HelloWorld2();
	HelloWorld3();
}

void HelloWorld1() {
	string path = "C:\\Users\\thoma\\Desktop\\Backgrounds\\test.png";
	Mat img = imread(path);
	imshow("Image", img);
	waitKey(0);
}

void HelloWorld2() {

	string path = "C:\\Users\\thoma\\Videos\\2021-06-11 13-42-55.mp4";
	VideoCapture cap(path);
	Mat img;

	while (true) {

		cap.read(img);
		imshow("Image", img);
		waitKey(1);
	}
}

void HelloWorld3() {
	VideoCapture cap(0);
	Mat img;

	while (true) {

		cap.read(img);
		imshow("Image", img);
		waitKey(1);
	}
}