# **hrdp_beta**
> hms robot developing platform (beta)  
Sample packages for basic robot developing infrastructure.

Undergraduate Researcher Project in [Human Machine Systems Lab.](https://faculty.korea.ac.kr/kufaculty/drsspark/index.do) in [Korea University](https://www.korea.edu/)

## **Overview**
![hrdp vs hrdp_beta](https://github.com/skykongkong8/hrdp_beta/blob/main/res/HRDP_compare_blockdiagram.drawio.png)
## Environment settings
* HW : [Jetson Nano](https://developer.nvidia.com/embedded/jetson-nano-developer-kit)
* OS + frameworks : ubuntu 20.04 + ros2-foxy download from [here](https://omorobot.com/docs/ros2-%EC%84%A4%EC%B9%98%ED%95%98%EA%B8%B0-jetson-nano/)
  * swap mem : follow [here](https://github.com/JetsonHacksNano/installSwapfile) or below
  ```git
  cd ~
  git clone https://github.com/JetsonHacksNano/installSwapfile
  cd installSwapfile
  ./installSwapfile.sh
  sudo reboot
  ```
  * CUDA : cudatoolkit 10 + cudnn7 + gcc7 linking
  > Latest cuda configuration for Jetson Nano by far! (November, 2022)
  1. install CUDA
  ```
  sudo apt install -y cuda-core-10-0\
  cuda-cublas-dev-10-0\
  cuda-cudart-dev-10-0\
  cuda-libraries-dev-10-0\
  cuda-toolkit-10-0
  ```
  2. install cudnn
  ```
  sudo apt install libcudnn7-dev
  ```
  3. export cuda path
  ```
  export PATH=/usr/local/cuda-10.0/bin${PATH:+:${PATH}}
  export LD_LIBRARY_PATH=/usr/local/cuda/lib64${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
  ```
  4. link gcc/g++ version (for opencv build)_
  ```
  sudo apt install gcc-7 g++-7
  sudo ln -s /usr/bin/gcc-7 /usr/local/cuda-10.0/bin/gcc
  sudo ln -s /usr/bin/g++-7 /usr/local/cuda-10.0/bin/g++
  ```
* Sensor
  * camera : [Intel Realsense D455](https://www.intelrealsense.com/depth-camera-d455/)
    * sdk install : [follow here](https://github.com/IntelRealSense/librealsense/tree/development/wrappers/python
) and [here](https://jstar0525.tistory.com/97)
    > * **WARNING** : cmake with python binding, CUDA, RSUSB !!!  
    ```cmake
    cmake  ../  -DBUILD_PYTHON_BINDINGS:bool=true -DFORCE_RSUSB_BACKEND=true -DBUILD_WITH_CUDA=true
    ```
    > *  *Many github issues are suffering from installing **librealsense2 with python binding at arm64 CPU architecture with ubuntu 20.04**, especially for Jetson Nano since Nvidia is not releasing the official image for it by far. However, I found the trick!*
  * lidar : [rplidar_s1](https://www.slamtec.com/en/Lidar/S1)
    * sdk install : [follow here](https://github.com/CreedyNZ/rplidar_ros2)
* Major python dependencies : [mediapipe](https://google.github.io/mediapipe/getting_started/python.html), [tensorflow 2.4](https://www.tensorflow.org/install/source?hl=ko), gTTS, SpeechRecognition, playsound

## 1. hrdp_sensors_beta
> * Responsible for getting, processing, filtering, logging all the sensor data   
> *  Currently only supports RGB & Depth camera    
   
### Sensors node
Open a new terminal and insert:
``` terminal
ros2 run hrdp_sensors_beta sensors
```
  
## 2. hrdp_perception_beta
> * Contains: [face_detection](https://github.com/skykongkong8/hrdp_beta/blob/main/src/hrdp_perception_beta/hrdp_perception_beta/vision/face_detection.py), [pose_detection](https://github.com/skykongkong8/hrdp_beta/blob/main/src/hrdp_perception_beta/hrdp_perception_beta/vision/sample_scripts/sample_body_pose_detection.py), [3d_sneakers_objectron](https://github.com/skykongkong8/hrdp_beta/blob/main/src/hrdp_perception_beta/hrdp_perception_beta/vision/shoe_3d_detection.py)
> * with tensorflow 2.4+, you can enjoy personalized detection functions with customized tf/tflie models. However, in this repository we are using jdk to use tf models without tf!  


Sample Image: 3D Sneakers Objectron -> returns Translation & Rotation  
![3D Sneakers OObjectron](https://github.com/skykongkong8/hrdp_beta/blob/main/res/sneakers_objectron.png)

> **WARNING** : you should require specific .tflite model's' for objectron node.  
You can download all the files from [here](https://github.com/google/mediapipe/tree/v0.8.10.1/mediapipe/modules/objectron), or from the older branches of [mediapipe](https://github.com/google/mediapipe) repo if deprecated, and add it to: 
```
{your_python_dist-packages}/mediapipe/modules/objectron
```
### Face detection node
Open a new terminal and insert:
```terminal
ros2 run hrdp_perception_beta face_detection
```

## 3. hrdp_actuators_beta 
### Keyboard control node
Open a new terminal and insert:
```ros
ros2 run hrdp_actuators_beta keyboard_control
```
### Voice control node
Open a new terminal and insert:
```ros
ros2 run hrdpp_actuators_beta voice_control
```

## 4. hrdp_human_interfaces
> * Functions of ears and mouth for a robot.
> * simple AI speaker functions : clock, timer, joke
