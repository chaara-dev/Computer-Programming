#include "..\..\common.h"

int main() {
    int guess;
    int count = 0;

    cout << "Guess the mystery number" << endl;

    cin >> guess;

    while (guess != 16 && count != 2)
    {
        cin >> guess;
        count++;
        if (guess == 16) {
            cout << "You guessed right";
        }
        else {
            cout << "You guessed wrong";
        }
    }

    return 0;
}