/* Copyright 2022
 * Author(s) 
 * Tharun V. Puthanveettil, Pavan Mantripragada, Yashveer Jain
 */
#pragma once

#include <iostream>
#include "opencv2/opencv.hpp"

/**
 * @brief Camera class
 * @details Handles the camera stream
 */
class Camera {
 private:
    /** @brief video capture object to capture frames */
    cv::VideoCapture video_cap;
        /** @brief camera extrinsics parameters */
    cv::VideoCapture cameraExtrinsics;

 public:
        /**
        * @brief Construct a new camera object
        * @details intialize the video capture to read the camera streams
        *
        * @param cam_id device id to select a camera
        */
        explicit Camera(int cam_id = 0);

        /**
        * @brief read a frame 
        * 
        * @return the frame which is read
        */
        cv::Mat read_frame();

        /**
        * @brief Destroy the camera object
        * @details release the video capture stream 
        */
        ~Camera();
};
