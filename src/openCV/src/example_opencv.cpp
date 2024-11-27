#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main(){
    Mat image = imread("../data/내 얼굴.jpg");

    if(image.empty()){
        cout << "not find image file!" << endl;
        return -1;
    }

    Mat grey_image;
    cvtColor(image, grey_image, COLOR_BGR2GRAY);

    imshow("Grey Image", grey_image);

    waitKey(0);

    return 0;
}
