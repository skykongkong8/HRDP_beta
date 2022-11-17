"""MOUTH MODULE FOR gTTS"""

from gtts import gTTS
from playsound import playsound
import os

        
def talk_en(words):
        tts = gTTS(text = words, lang = 'en')
        tts.save('sample_1.mp3')
        playsound('sample_1.mp3', True)
        os.remove('sample_1.mp3')


def talk_kr(words):
        tts = gTTS(text = words, lang = 'ko')
        tts.save('sample_1.mp3')
        playsound('sample_1.mp3', True)
        os.remove('sample_1.mp3')


def talk_es(words):
        tts = gTTS(text = words, lang = 'es')
        tts.save('sample_1.mp3')
        playsound('sample_1.mp3', True)
        os.remove('sample_1.mp3') 

def universal_talk(string, language):
    """Defined under language selection
        0 : ENGLISH
        1 : KOREAN
        2 : SPANISH
    """
    if language == 1:
        return talk_kr(string)
    elif language == 0:
        return talk_en(string)
    elif language == 2:
        return talk_es(string)

if __name__ =="__main__":
    universal_talk("This is a speaker test sound. Hello World!", 0)
    universal_talk("이것은 테스트용 음성입니다. 아 아 마이크 테스트!", 1)
    universal_talk("¡Este es un sonido de prueba de altavoz! Hola Mundo!", 2)


# maybe you should use pygame for USB speaker
# Refer to following code if that's the case.
# from pygame import mixer
# 
# def example_for_pygame_usage(words):
#         tts = gTTS(text = words, lang = 'en')
#         tts.save('sample_1.mp3')
#         mixer.init()
#         mixer.music.load()
#         mixer.music.play('sample_1.mp3')