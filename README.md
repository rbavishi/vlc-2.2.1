### VLC - 2.2.1

* Customized version of VLC-2.2.1

#### Added Features

* Subtitle-Split - Store subtitles as a text-file for any range of times. Press `y` to record the starting time, and then press `y` again to record the end-time. 

Very useful for BBC Art Documentaries and quiz shows like University Challenge. Helps create an archive of text descriptions for paintings and classical music. 

#### Libraries Required - 

* `pysrt` in Python - pip-installable

* `nltk` in Python - Optional. I'm using it to create default file-names for now. A sort of experimentation with NLP and Machine Learning. Horrible results currently, but might improve in the future. Disable the default-filename procedure in the subtitle-extract.py file.
