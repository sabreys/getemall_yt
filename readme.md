# Getemall_yt
  **-What is Getemall_yt ?**
It is a youtube video downloader for  cmd. You can download whole channel or only one video.
 


**-getem command**
   This function downloads all videos in given channel. It will scroll down until the end than will start downloading. (it can be stucked sometimes, you need to wait until see "downloading". if you can't see, press any key in terminal. it will be fixed soon. working with selenium driver is quit hard and unstable for me)
   
  ![enter image description here](https://github.com/sabreys/getemall_yt/blob/master/images/cm%C4%B1.PNG?raw=true)
  ![enter image description here](https://github.com/sabreys/getemall_yt/blob/master/images/dfdf%C4%B1.PNG?raw=true)
   
**-get1 command**
         This function downloads  video.

    get1 "https://www.youtube.com/watch?v=ZUrXOpHb3UY"

![enter image description here](https://github.com/sabreys/getemall_yt/blob/master/images/get1.PNG?raw=true)


**-getlist command**

   This function downloads  list .
   

    getlist "https://www.youtube.com/playlist?list=PLFIM0718LjIVknj6sgsSceMqlq242-jNf"



**-get1mp3 command**

   This function downloads  video as a mp3 file.
     

    get1mp3 "https://www.youtube.com/watch?v=ZUrXOpHb3UY"

   **-getmp3list command**
   This function downloads  whole list  as a mp3 file.

    getmp3list  "https://www.youtube.com/playlist?list=PLis6bkA3ULpwGDZfSHI5-7kWWVpB3OyFm"

**-What is required?**
this program require  ffmpeg , youtube-dl and chrome driver. download  these and put in windows file or add as  enviroment path. ffmpeg and youtube-dl are really usefull tools.

**-Using as a cmd program**
if you want to use this program as a cmd command,just add to environment path. It will make this so portable. you can download your video that where you want without any service or web site, Just 1 command.
 I  use C for making cmd programs than execute python codes, so you need to change getem.c and compile for your computer.

    execlp("python", "python", "C:/your_path/get1video.py", argv[1], (char*) NULL);

**- Features that wait  to be added**
 

 - list downloader(good by spotify) :heavy_check_mark: added
 - video quality parameters
 - Download last x videos
 

**-My cmd Programs**

<p align="right">
   I make programs for cmd.You can download youtube videos,you can download whole channel and you can  encrpyt your files. 
   i will add more usefull  programs in it.
</p>

 [![ReadMe Card](https://github-readme-stats.vercel.app/api/pin/?username=sabreys&repo=sabreys_cmd)](https://github.com/sabreys/sabreys_cmd)
