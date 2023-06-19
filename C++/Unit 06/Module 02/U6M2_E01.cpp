#include "..\..\common.h"

int main() {
    string name;
    cout << "Enter your name: "; cin >> name;

    if (name != "Martine" && name != "martine") {
        cout << "Sorry " << name << ", but I'm looking for Martine";
    } else {
        cout << "Hey, what's up, Martine? ";
    }

    return 0;
}