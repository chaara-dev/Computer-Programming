#include "..\..\common.h"

bool chicken_legs(string legs) {
    if ((legs[0] == 't' || legs[0] == 'T') && (legs[1] == 'w' || legs[1] == 'W') && (legs[2] == 'o' || legs[2] == 'O')) {
        return true;
    } else {
        return false;
    };
}

int main() {
    cout << chicken_legs("two");

    return 0;
}