#include <opencv2/opencv.hpp>
int main() {
    cv::Mat img = cv::imread("sample.jpg", cv::IMREAD_GRAYSCALE);
    if (img.empty()) {
        std::cerr << "Image not loaded.\n";
        return -1;
    }
    cv::imshow("Grayscale Image", img);
    cv::waitKey(0);
    return 0;
}