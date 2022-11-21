import cv2
import mediapipe as mp

class FaceDetector:
    def __init__(self):
        self.face_counts = 0
        self.mp_face_detection = mp.solutions.face_detection
        self.mp_drawing = mp.solutions.drawing_utils

    def detect(self, image):
        with self.mp_face_detection.FaceDetection(
            model_selection=1, min_detection_confidence=0.5) as face_detection:
            image.flags.writeable = False
            image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
            results = face_detection.process(image)
            if results.detections:
                self.face_counts = len(results.detections)
