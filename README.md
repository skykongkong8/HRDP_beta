# **hrdp_beta**
> hms robot developing platform (beta)  
Sample packages for basic robot developing infrastructure.

Undergraduate Researcher Project in [Human Machine Systems Lab.](https://faculty.korea.ac.kr/kufaculty/drsspark/index.do) in [Korea University](https://www.korea.edu/)

## **Overview**
![hrdp vs hrdp_beta](https://github.com/skykongkong8/hrdp_beta/blob/main/res/HRDP_compare_blockdiagram.drawio.png)
## Environment settings
* HW : [Jetson Nano](https://developer.nvidia.com/embedded/jetson-nano-developer-kit)
* OS + frameworks : ubuntu 20.04 + ros2-foxy download from [here](https://omorobot.com/docs/ros2-%EC%84%A4%EC%B9%98%ED%95%98%EA%B8%B0-jetson-nano/)
  * swap mem : follow this [link](https://opencourse.tistory.com/224)
  * CUDA : cudatoolkit 10 + cudnn7 + gcc7 linking followed from [here](https://kyubot.tistory.com/139)
* Sensor
  * camera : [Intel Realsense D455](https://www.intelrealsense.com/depth-camera-d455/)
    * sdk install : [follow here](https://github.com/IntelRealSense/librealsense/tree/development/wrappers/python
) and [here](https://jstar0525.tistory.com/97)
    >  WARNING : cmake with python binding, CUDA, RSUSB !!!  
    > *Many github issues are suffering from installing **librealsense2 with python binding at arm64 CPU architecture with ubuntu 20.04**, especially for Jetson Nano since Nvidia is not releasing the official image for it by far. However, I found the tric!*
  * lidar : [rplidar_s1](https://www.slamtec.com/en/Lidar/S1)
    * sdk install : [follow here](https://github.com/CreedyNZ/rplidar_ros2)
* Major python dependencies : [mediapipe](https://google.github.io/mediapipe/getting_started/python.html), [tensorflow 2.4](https://www.tensorflow.org/install/source?hl=ko), gTTS, SpeechRecognition, playsound

## 1. hrdp_sensors_beta
> Responsible for getting, processing, filtering, logging all the sensor data
  * camera  
  
## 2. hrdp_percepption_beta
> Contains: [face_detection](https://github.com/skykongkong8/hrdp_beta/blob/main/src/hrdp_perception_beta/hrdp_perception_beta/vision/face_detection.py), [pose_detection](https://github.com/skykongkong8/hrdp_beta/blob/main/src/hrdp_perception_beta/hrdp_perception_beta/vision/sample_scripts/sample_body_pose_detection.py), [3d_sneakers_objectron](https://github.com/skykongkong8/hrdp_beta/blob/main/src/hrdp_perception_beta/hrdp_perception_beta/vision/shoe_3d_detection.py)  

> **WARNING** : you should require specific .tflite model's' for objectron node.  
You can download all the files from [here](https://github.com/google/mediapipe/tree/v0.8.10.1/mediapipe/modules/objectron), or from the older branches of [mediapipe](https://github.com/google/mediapipe) repo if deprecated, and add it to: 
```
{your_python_dist-packages}/mediapipe/modules/objectron
```
