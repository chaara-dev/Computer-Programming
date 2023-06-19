#include "..\..\common.h"

int multiply() {
    float num_one, num_two, num_three;
    cout << "Enter three numbers:\n";
    cin >> num_one;
    cin >> num_two;
    cin >> num_three;
    cout << num_one * num_two * num_three;

    return 0;
}

int main() {
    multiply();

    return 0;
}