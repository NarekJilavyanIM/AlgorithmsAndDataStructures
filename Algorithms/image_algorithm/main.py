import numpy as np
from PIL import Image
from numpy import asarray

filename = "old.jpeg"
newFilename = "new.jpeg"
border = 10
with Image.open(filename) as image:
    width, height = image.size

    data = asarray(image).copy()
    newData = np.empty(shape=(height*2+border*3, width*2+border*3, 3))

    for i in range(height):
        for j in range(width):
            r, g, b = data[i, j]
            newData[i+border, j+border]=[r, g, b]
            newData[i+height+border*2, j+border]=[r, g, 0]
            newData[i+border, j+width+border*2]=[g, b, r]
            newData[i+height+border*2, j+width+border*2]=[255-r, 255-g, 255-b]


    im = Image.fromarray(np.uint8(newData))
    im.save(newFilename)
