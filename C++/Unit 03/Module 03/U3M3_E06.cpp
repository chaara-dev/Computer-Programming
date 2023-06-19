#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

int main() {
    const float NICKEL_DOLLAR_VALUE = 0.05;
    int nickels_num;

    cout << "Enter number of nickels: "; cin >> nickels_num;
    cout << "You have a total of $" << nickels_num * NICKEL_DOLLAR_VALUE;

    return 0;
}