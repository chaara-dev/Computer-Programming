USB_SPACE = 16000 #megabytes (16 GB total)
JPG_SIZE = 1.5 #megabytes (per photo)

GIGABYTE = 1024 #megabytes

# Can fit a total of ~ 10666 jpgs in our 16 gigabyte usb.

def space_left(number_of_photos):
    storageRemaining = USB_SPACE - (number_of_photos * JPG_SIZE)
    storageRemainingActual = storageRemaining / 1000
    print(storageRemainingActual, "Gigabyes left on your 16 GB USB.")

space_left(100)