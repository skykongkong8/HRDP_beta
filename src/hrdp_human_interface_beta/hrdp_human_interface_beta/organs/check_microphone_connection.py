import speech_recognition as sr

# Check out the output of from the folling code and fix DEVIE_INDEX for desired audio input device
print("####################################")
print("DEVICE LISTS")
mic_list = sr.Microphone.list_microphone_names()
print(len(mic_list))
print("####################################\n")
for i in range(len(mic_list)):
    print(mic_list[i])
    if 'tegra' not in mic_list[i] and 'USB' in mic_list[i]:
        DEVICE_INDEX = i
        print(f"DEVICE_INDEX : {DEVICE_INDEX}")
        break

DEVICE_INDEX = 0 # FIX HERE!

r = sr.Recognizer()

with sr.Microphone(device_index = DEVICE_INDEX) as source:
    print("Say Something!")
    r.pause_threshold = 1
    r.adjust_for_ambient_noise(source)
    audio = r.listen(source, timeout=3)
    
# with open("microphone_results.wav","wb") as f:
#     f.write(audio.get_wav_data())
