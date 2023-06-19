#include "..\..\common.h"

bool is_perfectsq(long x) {
    return (floor(sqrt(x)) * floor(sqrt(x)) == x);
}

int main() {
    cout << is_perfectsq(64);

    return 0;
}