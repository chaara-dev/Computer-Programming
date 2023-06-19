#include "..\..\common.h"

int calculate_space_left(int usb_space, double jpg_size, int gigabyte, int number_of_photos) {
    int storageRemaining = usb_space - (number_of_photos * jpg_size);
    double storageRemainingActual = (double)storageRemaining / gigabyte;
    cout << "~ " << storageRemainingActual << " gigabyes left on your 8 GB USB." << endl;

    int total_possible_photos = (int)(usb_space / jpg_size);
    int photos_remaining = total_possible_photos - number_of_photos;
    if (photos_remaining > 0) {
        cout << "You can still fit an estimated " << photos_remaining << " more photo(s) on your 8 GB USB drive." << endl;
    }
    else{
        cout << "You have gone over the space limit of your USB drive. Please delete some photos." << endl;
    }

    return 0;
}

int main() {
    // Input the number of images on your USB
    int usb_space = 8000; // megabytes (8 GB total)
    double jpg_size = 1.5; // megabytes (per photo)
    int gigabyte = 1024;   // megabytes (per gigabyte)
    int number_of_photos = 1000;
    calculate_space_left(usb_space, jpg_size, gigabyte, number_of_photos);
    return 0;
}