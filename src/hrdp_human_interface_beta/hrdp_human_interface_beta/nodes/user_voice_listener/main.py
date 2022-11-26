import rclpy
from .user_voice_listener import UserVoiceListener

def main(args = None):
    
    user_voice_listener = UserVoiceListener()
    user_voice_listener.run()


if __name__ == "__main__":
    main()

