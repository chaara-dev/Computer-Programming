#include "..\..\common.h"

double sphere_volume(double radius) {
    return ((4/3) * M_PI * pow(radius, 3));
}

float hemisphere_volume(double radius) {
    return sphere_volume(radius) / 2;
}

int main() {
    cout << fixed << setprecision(5) << hemisphere_volume(1);

    return 0;
}