# Uses the pytube module to download videos from youtube and saves it to the specified path

import pytube
import os

def downloadYouTube(videourl, path):

    yt = pytube.YouTube(videourl)
    yt = yt.streams.filter(progressive=True, file_extension='mp4').order_by('resolution').desc().first()
    if not os.path.exists(path):
        os.makedirs(path)
    yt.download(path)

video = input("Enter the videos url : ")
save_path = input("Enter the path to save : ")

downloadYouTube(video, save_path)