#include "..\..\common.h"

int hello(string my_name) {
    cout << "Hello, " << my_name;
    
    return 0;
}

int main() {
    string name_input;
    cout << "Enter your name: "; cin >> name_input;

    hello(name_input);

    return 0;
}