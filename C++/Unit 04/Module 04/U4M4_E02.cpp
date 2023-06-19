#include "..\..\common.h"

int cube_root_calc(double num) {
    return cbrt(num);
}

int main() {
    cout << "Cube Root: " << cube_root_calc(27);

    return 0;
}