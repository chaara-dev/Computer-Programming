#include "..\..\common.h"

bool is_dateable(int user_age, int so_age) {
    float acceptable_age = user_age / 2 + 7;

    if (so_age >= acceptable_age) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << is_dateable(19, 17) << endl;

    return 0;
}