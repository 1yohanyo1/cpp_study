#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main(){
    Mat image = imread("../data/내 얼굴.jpg");

    if (image.empty()){
        cout << "not found image!!";
        return -1;
    }

    Mat grey_image;
    cvtColor(image, grey_image, COLOR_BGR2GRAY);

    Mat binarization_image;
    double threshold_value = 100;
    double max_value = 255;

    threshold(grey_image, binarization_image, threshold_value, max_value, THRESH_BINARY);

    imshow("origin image", image);
    imshow("binarization image", binarization_image);

    waitKey(0);

    return 0;

}