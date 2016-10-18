#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/video.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace std;
using namespace cv;

const string SAMPLE_IMAGE_PATH = "Media/Trinity-Crest.jpg";

int main(int argc, const char** argv)
{
	Mat sampleImage;
	sampleImage = imread(SAMPLE_IMAGE_PATH);
	if (sampleImage.empty())
	{
		cout << "Could not open " << SAMPLE_IMAGE_PATH << endl;
		return -1;
	}

	imshow("Sample Image", sampleImage);
	cvWaitKey();
}