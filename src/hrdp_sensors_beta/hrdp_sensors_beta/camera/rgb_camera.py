import numpy as np
import cv2
import pyrealsense2.pyrealsense2 as rs
from .camera_constants import CameraConstants # when runnining for ros2 run
# from camera_constants import CameraConstants # when running for __main__


class RGBRealsenseCamera:
    """
    RGBRealsenseCamera
    ==================
    1. Realsense camera interface that services only rgb frames
    2. use like : success, rgb_array = {Class Object}.get_frame_stream()
    """
    def __init__(self):
        self.pipeline = rs.pipeline()
        config = rs.config()

        self.camera_constants = CameraConstants()
        resolution = self.get_resolution()
        framerate = self.get_framerate()

        config.enable_stream(rs.stream.color, resolution[0], resolution[1], rs.format.bgr8, framerate)

        self.pipeline.start(config)
        
        align_to=rs.stream.color
        self.align = rs.align(align_to)

    def get_resolution(self):
        width = self.camera_constants.FrameWidth
        height = self.camera_constants.FrameHeight
        return (width, height)

    def get_framerate(self):
        framerate = self.camera_constants.FrameRate
        return framerate

    def get_rgbBool(self):
        rgbBool = self.camera_constants.RGB
        return rgbBool
        

    def get_frame_stream(self):
        frames = self.pipeline.wait_for_frames()
        rgb_frame = frames.get_color_frame()

        rgb_image = np.asanyarray(rgb_frame.get_data())

        return True, rgb_image

    def release(self):
        self.pipeline.stop()
        print("Terminate Everything...")

    def view_by_cv2(self):
        print("THIS IS FOR VISUAL CHECKING!")
        
        if not self.get_rgbBool():
            print("[WARNING] : NO RGB FRAME IN CURRENT DEPTH CAMERA!")
            exit(0)
        try:
            while True:

                flag, rgb_img = self.get_frame_stream()

                if flag:
                    rgb_dim = rgb_img.shape
                    print(rgb_img)

                   
                    cv2.namedWindow("RGBD Camera Experiment- RGB", cv2.WINDOW_AUTOSIZE)
                    cv2.imshow("RGBD Camera Experiment- RGB", rgb_img)
                    cv2.waitKey(1)

                else:
                    print("No Frames")
                    continue

        except Exception as e:
            print(e)

        finally:
            self.release()
            cv2.destroyAllWindows()



if __name__ == "__main__":
    rgbd = RGBRealsenseCamera()
    rgbd.view_by_cv2()