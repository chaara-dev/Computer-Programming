#include "..\..\common.h"

void replace_vowels(string word, char c) {
    for (int i = 0; i < word.length(); i++) {
        if (tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || tolower(word[i]) == 'u') {
            word[i] = c;
        }
    }

    cout << word;
}

int main() {
    replace_vowels("apple", 'e');

    return 0;
}