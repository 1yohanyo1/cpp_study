#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main(){
    Mat image = imread("../data/내 얼굴.jpg");

    if (image.empty()){
        cout << "not found image.";
        return -1;
    }

    Mat grey_image;
    cvtColor(image, grey_image, COLOR_BGR2GRAY);

    Mat edges_1;
    Mat edges_2;

    double low_thresh = 100;
    double high_thresh = 200;
    int kernel_size = 3;

    Canny(grey_image, edges_1, low_thresh, high_thresh, kernel_size);
    Canny(grey_image, edges_2, 10, 50, kernel_size);

    imshow("edge_1 image", edges_1);
    imshow("edge_2 image", edges_2);

    waitKey(0);

    return 0;
}