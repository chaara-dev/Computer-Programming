#include "..\..\common.h"

int polynomial_calc(int x, int y) {
    int output = (
        ((7 * x) + (8 * y)) / (2 * y));
    return output;
}

int main() {
    cout << polynomial_calc(2, 2);

    return 0;
}