#include "target_detection/TargetDetection.hpp"

void fdds::TargetDetection::cameraSubscriptionCallback(sensor_msgs::msg::CompressedImage::SharedPtr msg)
{
    lastCameraData = msg;
}

int fdds::TargetDetection::tick()
{
    if (lastCameraData == nullptr)
        return 0;
    
    cv::Mat cv_image = cv::imdecode(cv::Mat(lastCameraData->data), cv::IMREAD_COLOR);

    // Convert to HSV
    cv::Mat hsv;
    cv::cvtColor(cv_image, hsv, cv::COLOR_BGR2HSV);

    // Define range for red color and create mask
    cv::Mat mask1, mask2;
    cv::inRange(hsv, cv::Scalar(0, 100, 100), cv::Scalar(10, 255, 255), mask1); // lower red range
    cv::inRange(hsv, cv::Scalar(345, 100, 100), cv::Scalar(359, 255, 255), mask2); // upper red range

    // Combine the masks
    cv::Mat mask;
    cv::bitwise_or(mask1, mask2, mask);

    // Apply morphological operations to clean up the mask
    cv::Mat kernel = cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(5, 5));
    cv::morphologyEx(mask, mask, cv::MORPH_CLOSE, kernel);
    cv::morphologyEx(mask, mask, cv::MORPH_OPEN, kernel);

    // Apply the mask to the original image
    cv::Mat masked_image;
    cv::bitwise_and(cv_image, cv_image, masked_image, mask=mask);

    // Convert to grayscale
    cv::Mat gray;
    cv::cvtColor(masked_image, gray, cv::COLOR_BGR2GRAY);

    // Apply Gaussian blur
    cv::Mat blurred;
    cv::GaussianBlur(gray, blurred, cv::Size(9, 9), 2);

    // Detect circles using HoughCircles
    std::vector<cv::Vec3f> circles;
    cv::HoughCircles(blurred, circles, cv::HOUGH_GRADIENT, 1, 20, 50, 30, 0, 0);

    int validCirclesCount = 0;
    for (size_t i = 0; i < circles.size(); i++) {
        if (circles[i][2] >= 50) {
            validCirclesCount++;
        }
    }

    return validCirclesCount;
}