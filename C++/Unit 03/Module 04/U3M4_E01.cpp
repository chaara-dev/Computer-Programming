#include "..\..\common.h"

int main() {
    const float NICKEL_IN_DOLLARS = 20;
    float dollar_input;

    cout << "Enter dollar value: "; cin >> dollar_input;
    cout << "You have " << NICKEL_IN_DOLLARS * dollar_input << " nickel(s) in total.";

    return 0;
}