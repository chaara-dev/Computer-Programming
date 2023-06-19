#include "..\..\common.h"

string letter_to_percentage(char letter){
    switch (letter) {
        case 'A':
        case 'a':
            cout << "100% - " << "86%";
        case 'B':
        case 'b':
            cout << "85% - " << "73%";
        case 'C':
        case 'c':
            cout << "72% - 67%";
        case 'D':
        case 'd':
            cout << "59% - 50%";
        case 'I':
        case 'i':
            cout << "49% - 0%";
        default:
            cout << "Invalid input!";
    }
}


int main() {
    char input;
    cout << "Enter a letter: "; cin >> input;

    letter_to_percentage(input);

    return 0;
}