import cv2
import numpy as np

l = 640
h = 480

cap = cv2.VideoCapture(0)
cap.set(3,l)
cap.set(4,h) 

def empty():
    pass

cv2.namedWindow("HSV")
cv2.resizeWindow("HSV",640,240)

cv2.createTrackbar("hue min","HSV",0,179,empty)
cv2.createTrackbar("hue max","HSV",179,179,empty)
cv2.createTrackbar("sat min","HSV",0,255,empty)
cv2.createTrackbar("sat max","HSV",255,255,empty)
cv2.createTrackbar("val min","HSV",0,255,empty)
cv2.createTrackbar("val max","HSV",255,255,empty)

while True:
    _,img = cap.read()
    imghsb = cv2.cvtColor(img,cv2.COLOR_BGR2HSV)
    cv2.imshow('image',imghsb)
    if cv2.waitKey(1) & 0xFF == ord("q"):
        break
cap.release()
cap.destroyAllWindow()    