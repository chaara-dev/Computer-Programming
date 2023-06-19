#include "..\..\common.h"

bool is_dateable(int user_age, int so_age) {
    float acceptable_age = user_age / 2 + 7;

    if (so_age >= acceptable_age) {
        return true;
    } else {
        return false;
    }
}

void test_is_dateable() {
    assert(is_dateable(12, 40));
    assert(is_dateable(0, 0));
    assert(is_dateable(100000, 100000));
    assert(is_dateable(19, 19));
}

int main() {
    cout << is_dateable(19, 17) << endl;
    test_is_dateable();

    return 0;
}