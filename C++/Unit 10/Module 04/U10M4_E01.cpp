#include "..\..\common.h"

void vowel_count(string word) {
    int total = 0;

    for (int i = 0; i < word.length(); i++) {
        if (tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || tolower(word[i]) == 'u') {
            total++;
        }
    }

    cout << "Total number of vowels: " << total;
}

int main() {
    vowel_count("New Westminster");

    return 0;
}