#include "..\..\common.h"

void vowel_count(string word) {
    int i = 0;
    int total = 0;

    while (i < word.length()) {
        if (tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || tolower(word[i]) == 'u') {
            total++;
        }
        i++;
    }

    cout << "Total number of vowels: " << total;
}

int main() {
    vowel_count("New Westminster");

    return 0;
}