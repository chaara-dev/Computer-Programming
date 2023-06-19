#include "..\..\common.h"

int main() {
    string input;
    cout << "Enter sign word: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] != 'X' && input[i] != 'H' && input[i] != 'I' && input[i] != 'O' && input[i] != 'N' && input[i] != 'S' && input[i] != 'Z') {
            cout << "NO";
            return 0;
        } else {
            cout << "YES";
            return 0;
        }
    }
}