#include "..\..\common.h"

int main() {
    int my_array[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        cout << my_array[i] * 5 << endl;
    }

    return 0;
}