#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
    if (argc != 3)
    {
        cout << "usage: readIMG img1 img2" << endl;
        return 1;
    }
    Mat img1, img2;
    img1 = imread(argv[1], CV_LOAD_IMAGE_COLOR);
    img2 = imread(argv[2], CV_LOAD_IMAGE_COLOR);
    imshow("img1", img1);
    imshow("img2", img2);
    waitKey(0);
    return 0;

}
