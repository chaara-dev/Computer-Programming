#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int given_days;

    cout << "Enter number of days: "; cin >> given_days;
    cout << "That's a total of " << 86400 * given_days << " seconds.";

    return 0;
}