#include "..\..\common.h"

int main() {
    string first_string, second_string;

    cout << "Enter your first string here: "; cin >> first_string;
    cout << "Enter your second string here: "; cin >> second_string;

    cout << (first_string == second_string); // false

    return 0;
}