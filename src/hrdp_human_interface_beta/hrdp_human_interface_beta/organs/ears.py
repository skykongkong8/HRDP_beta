import speech_recognition as sr
from .check_microphone_connection import DEVICE_INDEX

"""EARS MODULE FOR SPEECH RECOGNITION"""

class Ears():
    def listen(self)->list:
        # obtain audio from the microphone - PREREQUISITE: PyAudio 0.2.11 or later version

        """if you want to adjust the minimum energy threshold"""
        # with m as source: r.adjust_for_ambient_noise(source)
        # print("Set minimum energy threshold to {}".format(r.energy_threshold))

        r = sr.Recognizer() # device_index = 3 for Jetson Nano
        with sr.Microphone(device_index = DEVICE_INDEX) as source:
                # r.adjust_for_ambient_noise(source, duration =1)
                print("Say something!")
                r.pause_threshold = 1
                r.adjust_for_ambient_noise(source)
                audio = r.listen(source, timeout=3) 

        # recognize speech using Google Speech Recognition
        # try:
        eng = r.recognize_google(audio, language="en-US", show_all = True)
        kor = r.recognize_google(audio, language = 'ko-KR', show_all = True)
        esp = r.recognize_google(audio, language = 'es-ES', show_all = True)
        # except:
        #     print('Unknown Error! Please restart the program')
        #     return

        # try:
        #     print("Google Speech Recognition thinks you said " + eng + '\n or ' + kor +'\n or '+ esp)
        # except sr.UnknownValueError:
        #     print("Google Speech Recognition could not understand audio")
        #     pass
        # except sr.RequestError as e:
        #     print("Could not request results from Google Speech Recognition service; {0}".format(e))
        # except Exception as e:
        #     print(e)
        #     pass
        return [eng, kor, esp]

        # return eng

if __name__ == "__main__":
    ears = Ears()
    what_you_said = ears.listen()
    print(what_you_said)



#Notes for listen() and its internal fns - DETAILED REGULATION OPTIONS - Sungsik Kong

#1 listen function changes 'source' into 'AudioData' instance. 'AudioData' can be 'recognized' by google data deisgnated languages
#2 'timeout' param is maximum waiting time(seconds) before 'speech_recognition.WaitTimeoutError'
#3 'phrase_time_limit' param is maximum seconds that letting phrase to continue before stopping and returning the part of the phrase
#4 starts when energy above 'recognizer_instance.energy_threshold' and completed after 'timeout + phrase_timeout' seconds, and this returns one of the followings: audio data / waittimeError
#5 such params are predetermined at the original __init__ function