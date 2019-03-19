#include<opencv\cv.h>
#include<opencv\highgui.h>

using namespace cv;


int main(){
	//crate matrix to store image
	Mat image;
	//initialize capture

	VideoCapture cap;
	cap.open(0);

	//create window to show it
	namedWindow("window", 1);

	while(1){
		//copy webcam stream to image

	cap>>image;

	//print image to screen
	imshow("window",image);

	//delay 33ms
	waitKey(33);
	}

	return 0;
}