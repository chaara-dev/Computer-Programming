#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int pi = 3.14159265358979;
    cout << 2 * M_PI * (9 / 2);
    return 0;
}

// `#include <cmath>` Doesn't work for pi. `M_PI` isn't defined.