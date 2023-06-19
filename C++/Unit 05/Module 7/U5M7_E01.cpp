#include "..\..\common.h"

bool common_multiple(int x) {
    return (x != 0 && ((x % 5 == 0) && (x % 3 == 0)));
}

int main() {
    cout << common_multiple(45);

    return 0;
}