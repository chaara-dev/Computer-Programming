#include "..\..\common.h"

inline int inline_function(int x, int y) {
    cout << (x + y) * 20;

    return 0;
}

int main() {
    int x, y;

    cin >> x >> y;

    inline_function(x, y);

    return 0;
}