#include "..\..\common.h"

int main() {
    int angle1, angle2, angle3;

    cout << "Enter the first angle: ";
    cin >> angle1;

    cout << "Enter the second angle: ";
    cin >> angle2;

    cout << "Enter the third angle: ";
    cin >> angle3;

    if (angle1 + angle2 + angle3 != 180) {
        cout << "Error";
        return 0;
    } else if (angle1 == 60 && angle2 == 60 && angle3 == 60) {
        cout << "Equilateral";
        return 0;
    } else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3) {
        cout << "Isosceles";
        return 0;
    } else {
        cout << "Scalene";
        return 0;
    }
}