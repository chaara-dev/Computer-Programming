#include "..\..\common.h"

int main() {
    int x = 6;
    int y = 9;

    cout << (x < y) << endl; // true
    cout << (x > y) << endl; // false
    cout << (x == y) << endl; // false
    cout << (x != y) << endl; // true
    cout << (x >= y) << endl; // false
    cout << (x <= y) << endl; // true

    return 0;
}