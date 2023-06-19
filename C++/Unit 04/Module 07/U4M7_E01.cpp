#include "..\..\common.h"

int space_left(int picture_num) {
    double flashd_space = 8 * 1000; // megabytes of space available
    const double PICTURE_SIZE = 1.5;
    double occupied_space = picture_num * PICTURE_SIZE;// megabytes of space used

    return (flashd_space - occupied_space);
}

int main() {
    cout << space_left(100);

    return 0;
}