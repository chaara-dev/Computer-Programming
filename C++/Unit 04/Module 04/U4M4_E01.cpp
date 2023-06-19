#include "..\..\common.h"

int cube_volume(double edge_length) {
    return pow(edge_length, 3);
}

int main() {
    cout << "Cube Volume: " << cube_volume(3);

    return 0;
}