import numpy as np
import cv2
import pyrealsense2.pyrealsense2 as rs
from .depth_filter_manager import DepthFilterManager
from .camera_constants import CameraConstants # when runnining for ros2 run
# from camera_constants import CameraConstants # when running for __main__


class DRealsenseCamera:
    """
    DRealsenseCamera
    ==================
    1. Realsense camera interface that services only depth frames
    2. use like : success, d_array = {Class Object}.get_frame_stream()
    """
    def __init__(self):
        self.pipeline = rs.pipeline()
        config = rs.config()

        self.camera_constants = CameraConstants()
        self.filter_manager = DepthFilterManager()

        resolution = self.get_resolution()
        framerate = self.get_framerate()

        config.enable_stream(rs.stream.depth, resolution[0], resolution[1], rs.format.z16, framerate)

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
    

    def apply_DepthFilter(self, depth_frame, filterType= None):
        """
        Applying preprocessing filters on depth_frame # not on depth_ColorMap!
        """
        filtered_depth = self.filter_manager.apply_DepthFilter(depth_frame, filterType)

        return filtered_depth
    

    def get_frame_stream(self):
        frames = self.pipeline.wait_for_frames()

        depth_frame = frames.get_depth_frame()

        depth_frame = self.apply_DepthFilter(depth_frame) # if you block out this code, your can observe the effect of the filter

        depth_image = np.asanyarray(depth_frame.get_data())

        return True, depth_image

    
    def release(self):
        self.pipeline.stop()
        print("Terminate Everything...")

    def view_by_cv2(self):
        print("THIS IS FOR VISUAL CHECKING!")
        
        try:
            while True:

                flag, depth_image = self.get_frame_stream()

                if flag:
                    depth_dim = depth_image.shape
                    print(depth_image)

                    depth_colormap = cv2.applyColorMap(cv2.convertScaleAbs(depth_img, alpha = 0.03), cv2.COLORMAP_JET) 
                   
                    cv2.namedWindow("Depth Camera Experiment- RGB", cv2.WINDOW_AUTOSIZE)
                    cv2.imshow("Depth Camera Experiment- RGB", depth_image)
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
    d = DRealsenseCamera()
    d.view_by_cv2()