#include "..\..\common.h"

float feet_to_inches(float input) {
    return input * 12;
}

int calculate_box_count(double width, double height, double length) {
    int room_volume = feet_to_inches(49.2) * feet_to_inches(20) * feet_to_inches(23);
    int box_volume = width * height * length;

    float amount = room_volume / box_volume;

    cout << amount << " boxes can fit in a room with the volume of " << room_volume;

    return 0;
}

int main() {
    calculate_box_count(8, 12, 10);
    return 0;
}