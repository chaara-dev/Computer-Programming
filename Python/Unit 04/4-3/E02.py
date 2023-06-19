USB_SPACE = 16000 #megabytes (16 GB total)
JPG_SIZE = 1.5 #megabytes (per photo)

GIGABYTE = 1024 #megabytes (per gigabyte)
TOTAL_POSSIBLE_PHOTOS = 16000 / 1.5

# Can fit a total of ~ 10666 jpgs in our 16 gigabyte usb.

def calculate_space_left(number_of_photos):
    TOTAL_PHOTOS = int(TOTAL_POSSIBLE_PHOTOS)
    storageRemaining = USB_SPACE - (number_of_photos * JPG_SIZE)
    storageRemainingActual = storageRemaining / 1000
    print("~", storageRemainingActual, "Gigabyes left on your 16 GB USB.")

    photos_remaining = TOTAL_PHOTOS - number_of_photos
    if photos_remaining > 0:
        print("You can still fit an estimated", photos_remaining, "more photo(s) on your 16 GB USB drive.")
    else:
        print("You have gone over the space limit of your USB drive. Please delete some photos.")

# Input the number of images on your USB
calculate_space_left(728)