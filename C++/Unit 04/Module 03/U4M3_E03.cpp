#include "..\..\common.h"

int my_sqrt(double num) {
    cout << sqrt(num);

    return 0;
}

int main() {
    double input;

    cout << "Enter number: "; cin >> input;

    my_sqrt(input);

    return 0;
}