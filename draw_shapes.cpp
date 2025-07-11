#include <opencv2/opencv.hpp>

int main() {
    // Create a blank image (500x500 pixels, 8-bit, 3 channels)
    cv::Mat image = cv::Mat::zeros(500, 500, CV_8UC3);

    // Draw a line from (50, 50) to (450, 50)
    cv::line(image, cv::Point(50, 50), cv::Point(450, 50), cv::Scalar(255, 0, 0), 2);

    // Draw a rectangle from top-left (100, 100) to bottom-right (400, 200)
    cv::rectangle(image, cv::Point(100, 100), cv::Point(400, 200), cv::Scalar(0, 255, 0), 3);

    // Draw a filled circle at (250, 300) with radius 50
    cv::circle(image, cv::Point(250, 300), 50, cv::Scalar(0, 0, 255), cv::FILLED);

    // Draw an ellipse centered at (250, 400)
    cv::ellipse(image, cv::Point(250, 400), cv::Size(100, 50), 0, 0, 360, cv::Scalar(255, 255, 0), 2);

    // Add text at (50, 480)
    cv::putText(image, "OpenCV Drawing", cv::Point(50, 480),
                cv::FONT_HERSHEY_SIMPLEX, 0.8, cv::Scalar(255, 255, 255), 2);

    // Show the image in a window
    cv::imshow("Shapes", image);
    cv::waitKey(0); // Wait for any key press
    return 0;
}