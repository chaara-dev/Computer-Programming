#include "..\..\common.h"

int main() {
    int input;

    for (int i = 0; i != 3; i++) {
        cout << "> "; cin >> input;

        if (input != 7) {
            cout << "You lose.";
            return 0;
        }
    }

    cout << "You win.";

    return 0;
}