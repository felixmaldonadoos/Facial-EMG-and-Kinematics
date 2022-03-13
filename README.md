# Facial-EMG-and-Kinematics

## WORK IN PROGRESS

Studying facial muscle activation and their relationship with facial kinematics via facial landmarks. Utilizes an Arduino to generate a square wave with a specific duty cycle 
and frequency and synchronously trigger EMG and image acquisition.

This repo is meant for me to track my progress in analyzing and structuring a class to preprocess and extract information from electromyogram (EMG) and kinematic data 
(orofacial landmark data). 


## kin_preprocessing.ipynb
  BMES 551 final project. Comparing different filters for facial kinematic data with an emphasis in temporal resolution. Intended to later  be fed as an input to ML algorithms for the detection of motor neuron stimulation time. 
  
## main.ipynb
  A class that processes both EMG and kinematic data. Produces a final plot for visual comparison. 
  
 ## trigger.ino
  Hardware trigger for synchronized data acquisition between Delsys and Basler camera. EMG is triggered by analog signal and camera by digital signal at 100 Hz. Code is easily modified for other devices or any number of devices. 
  
 ## /data
  Sample EMG and facial landmark datasets. Some are cleaner than others. 
