import speech_recognition as sr

# CHECK MICROPHONE CONNECTION!
mic_list = sr.Microphone.list_microphone_names()

for i in range(len(mic_list)):
    print(mic_list[i])
    if 'tegra' not in mic_list[i] and 'UAC' not in mic_list[i] and 'USB' in mic_list[i]:
        DEVICE_INDEX = i
        print(f"DEVICE_INDEX : {DEVICE_INDEX}")
        break
        

"""EARS MODULE FOR SPEECH RECOGNITION"""

ENGLISH = 0
KOREAN = 1
SPANISH = 2

class Ears():
    """
    Ears
    ====
    ### "STT interface in online environment"

    How to use:

    ears = Ears()  

    what_you_said = ears.listen( LANGUAGE ) 
    
    * [ ENGLISH : 0 / KOREAN : 1 / SPANISH : 2 ]
    """



    def listen(self, language):
        # obtain audio from the microphone - PREREQUISITE: PyAudio 0.2.11 or later version

        """if you want to adjust the minimum energy threshold"""
        # with m as source: r.adjust_for_ambient_noise(source)
        # print("Set minimum energy threshold to {}".format(r.energy_threshold))

        r = sr.Recognizer() # device_index = 3 for Jetson Nano
        with sr.Microphone(device_index = DEVICE_INDEX) as source:
                print("Say something!")
                r.pause_threshold = 1
                r.adjust_for_ambient_noise(source)
                audio = r.listen(source, timeout = 5) 

        # recognize speech using Google Speech Recognition
        if language == ENGLISH:
            words = r.recognize_google(audio, language= "en-US")
        elif language == KOREAN:
            words = r.recognize_google(audio, language = 'ko-KR')
        elif language == SPANISH:
            words = r.recognize_google(audio, language = 'es-ES')
        else:
            words = r.recognize_google(audio, language = 'ko-KR')
            
        return words

    
def main():
    ears = Ears()
    what_you_said = ears.listen()
    print(what_you_said)
    

if __name__ == "__main__":
    main()
    


#Notes for listen() and its internal fns - DETAILED REGULATION OPTIONS - Skykongkong8

#1 listen function changes 'source' into 'AudioData' instance. 'AudioData' can be 'recognized' by google data deisgnated languages
#2 'timeout' param is maximum waiting time(seconds) before 'speech_recognition.WaitTimeoutError'
#3 'phrase_time_limit' param is maximum seconds that letting phrase to continue before stopping and returning the part of the phrase
#4 starts when energy above 'recognizer_instance.energy_threshold' and completed after 'timeout + phrase_timeout' seconds, and this returns one of the followings: audio data / waittimeError
#5 such params are predetermined at the original __init__ function