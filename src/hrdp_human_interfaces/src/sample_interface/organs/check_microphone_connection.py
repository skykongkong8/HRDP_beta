import speech_recognition as sr

# Check out the output of from the folling code and fix DEVIE_INDEX for desired audio input device
print(sr.Microphone.list_microphone_names())
DEVICE_INDEX = 11 # FIX HERE!

r = sr.Recognizer()

with sr.Microphone(device_index = DEVICE_INDEX) as source:
    print("Say Something!")
    r.pause_threshold = 1
    r.adjust_for_ambient_noise(source)
    audio = r.listen(source, timeout=3)

with open("microphone_results.wav","wb") as f:
    f.write(audio.get_wav_data())
