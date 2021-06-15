## Check List

- [x]  aruco marker 작동 확인
- [ ]  xarm6 작동 확인
- [x]  startup process 작동 확인
- [ ]  IP setting 확인

## Detail

- [ ]  Ubuntu Mate

    ```jsx
    mate-control-center
    ```

- [ ]  ROS
- [ ]  realsense sdk, ros

    [ROS & ROS2](https://dev.intelrealsense.com/docs/ros-wrapper)

    ```jsx
    sudo apt install ros-melodic-realsense2-camera
    ```

    ### device를 찾지 못하는 issue (udev rules 추가)

    [IntelRealSense/librealsense](https://github.com/IntelRealSense/librealsense/blob/master/config/99-realsense-libusb.rules)

- [ ]  aruco marker

    [Online ArUco markers generator](https://chev.me/arucogen/)

- [ ]  moveit

    [Moveit Dependancy](https://www.notion.so/Moveit-Dependancy-3a16abe5508c4eeeb2cfe164eeb52dc4) 

    ```jsx
    sudo apt install ros-melodic-combined-robot-hw
    ```

- [ ]  startup process

    [Linux Startup Process](https://www.notion.so/Linux-Startup-Process-526c2ee05a3e4a959724fc506ea19fdd) 

    TCPserver.launch : realsense, xarm, tcp_client, tcp_server

- [ ]  IP setting

    ![https://s3-us-west-2.amazonaws.com/secure.notion-static.com/6c5e698b-47da-49d4-a41e-b73c00559d0a/Untitled.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/6c5e698b-47da-49d4-a41e-b73c00559d0a/Untitled.png)