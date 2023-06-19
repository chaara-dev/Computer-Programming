#include "..\..\common.h"

int main() {
    string my_string;

    cout << "Enter string: "; cin >> my_string;

    cout << "~~~~~~~~~~~~~~~~~~~" << endl;
    cout << isalpha(my_string[0]) << endl;
    cout << islower(my_string[0]) << endl;
    cout << isupper(my_string[0]) << endl;
    cout << isdigit(my_string[0]) << endl;
    cout << isspace(my_string[0]) << endl;
}