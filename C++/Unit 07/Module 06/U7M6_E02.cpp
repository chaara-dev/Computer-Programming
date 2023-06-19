#include "..\..\common.h"

bool is_multiple(int number, int factor) {
    if (factor == 0) {
        return 0;
    } else {
        return number % factor == 0;
    }

    return 0;
}

int main() {
    cout << is_multiple(10, 0);
    return 0;
}