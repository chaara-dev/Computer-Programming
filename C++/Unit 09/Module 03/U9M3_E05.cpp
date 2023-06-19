#include "..\..\common.h"

int main() {
    int number_guesses[3] = {};
    int number_keys[3] = {4, 2, 0};

    cout << "GUESS THE MYSTERY CODE" << endl;

    cout << "First number: "; cin >> number_guesses[0];
    cout << "Second number: "; cin >> number_guesses[1];
    cout << "Third number: "; cin >> number_guesses[2];


    int i = 0;
    bool correct = true;
    while (i != 3 && correct == true) {
        if (number_guesses[i] != number_keys[i]) {
            correct = false;
        }
        i++;
    }

    if (correct == true) {
        cout << "You guessed it!";
    } else if (correct == false) {
        cout << "Try again next time.";
    }

    return 0;
}