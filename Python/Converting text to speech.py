from gtts import gTTS
import os

myText = " Don't judge each day by the harvest you reap, but by the seeds that you plant."

language = 'en'
output = gTTS(text=myText,lang=language,slow=False)

output.save("output.mp3")

os.system("start output.mp3")
