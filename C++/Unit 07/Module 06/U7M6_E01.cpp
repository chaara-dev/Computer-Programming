#include "..\..\common.h"

bool second_letter_a(string word) {
    if (word.length() < 1) {
        return 0;
    } else {
        return word[1] == 'a';
    }
}

int main() {
    cout << second_letter_a("");
    return 0;
}