#include "..\..\common.h"

int main() {
    int input;
    int answer = 77;
    int guesses = 2;

    for (int i = 0; i != 3; i++) {
        cout << "Enter a number: "; cin >> input;

        if (input < answer) {
            cout << "You need to go higher." << endl;
            cout << "You have " << guesses-- << " guesses left." << endl;
        } else if (input > answer) {
            cout << "You need to go lower." << endl;
            cout << "You have " << guesses-- << " guesses left." << endl;
        } else if (input == answer) {
            cout << "You got it right!";
        }
    }

    return 0;
}