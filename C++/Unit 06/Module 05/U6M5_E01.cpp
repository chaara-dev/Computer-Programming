#include "..\..\common.h"

bool is_vowel(string letter) {
    if (letter == "A" || letter == "a") {
        return true;
    } else if (letter == "E" || letter == "e") {
        return true;
    } else if (letter == "I" || letter == "i") {
        return true;
    } else if (letter == "O" || letter == "o") {
        return true;
    } else if (letter == "U" || letter == "u") {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << is_vowel("A");

    return 0;
}