#include "..\..\common.h"

int main() {
    string name;

    cout << "Enter your name: "; cin >> name;

    for (int i = 0; i < name.length(); i++) {
        if (tolower(name[i]) == 'a' || tolower(name[i]) == 'e' || tolower(name[i]) == 'i' || tolower(name[i]) == 'o' || tolower(name[i]) == 'u') {
            continue;
        } else {
            cout << name[i];
        }
    }

    return 0;
}