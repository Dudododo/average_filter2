#include <iostream>
#include <opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	VideoCapture cap;

	cap.open(0);

	while (1)
	{
		cv::Mat src;
		cv::Mat dst;

		cap >> src;
		cv::GaussianBlur(src, dst, Size(7, 7), 1); //均值滤波

		cv::imshow("原图", src);
		cv::imshow("均值滤波", dst);

		waitKey(30);
	}
}