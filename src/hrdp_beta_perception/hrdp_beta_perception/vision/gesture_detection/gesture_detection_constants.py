# DETECTION CONSTANTS
import os

# FHD
WIDTH = 1280
HEIGHT = 720

# transformer model constants
seq_length = 30
MODEL_NAME = f"converted_model_transformer_sungsik"
MODEL_PATH = f"{os.getcwd()}/Detection/{MODEL_NAME}.tflite"


upper_thres = 0.9
lower_thres = 0.85

CONTINUOUS_LABEL_TIME : int = 1

# meidapipe
max_num_hands = 1
min_detection_confidence = 0.5
min_tracking_confidence = 0.5
