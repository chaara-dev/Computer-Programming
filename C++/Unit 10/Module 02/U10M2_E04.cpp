#include "..\..\common.h"

int main() {
    string name;
    cout << "Enter your name: "; cin >> name;

    for (int i = 0; i < name.length(); i++) {
        if (name[i] != 'a' && name[i] != 'A') {
            name[i] = '*';
        } else {
            continue;
        }
    }

    cout << "Your censored name is: " << name;

    return 0;
}