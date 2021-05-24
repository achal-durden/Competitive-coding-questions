from typing import Counter
import cv2
import numpy as np

# circles = np.zeroes((4,2),np.int)
# counter = 0

# def mouse(event,x,y,flags,params):
#     global Counter
#     if event == cv2.EVENT_LBUTTONDOWN:
#         print(x,y)
#         circles[counter] = x,y
#         counter = counter +1


img  = cv2.imread("mm.png")
# #
# while True:
#     if counter == 4:
#         w,h = 250,250
#         pt1 = np.float32(circles[0],circles[1],circles[2],circles[3])
#         pt2 = np.float32([0,0],[w,0],[0,h],[w,h])
#         matrix = cv2.getPerspectiveTransform(pt1,pt2)
#         imgo = cv2.warpPrespective(img,matrix,(w,h))
cv2.imshow("image",imgo)

#     for x in range(0,4):
#         cv2.circle(img , circles[x][0]
# cv2.imshow("image",img)
# cv2.setMouseCallback("image",mouse)
cv2.waitKey(1)