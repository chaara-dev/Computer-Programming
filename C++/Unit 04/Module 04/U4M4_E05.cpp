#include "..\..\common.h"

int circle_area(double radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    float small = circle_area(5.0);

    float big = circle_area(6.0);

    cout << big - small;

    return 0;
}