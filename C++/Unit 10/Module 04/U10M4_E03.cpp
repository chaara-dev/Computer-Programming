#include "..\..\common.h"

void replace_vowels(string& word, char c) {
    for (int i = 0; i < word.length(); i++) {
        if (tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || tolower(word[i]) == 'u') {
            word[i] = c;
        }
    }
}

void replace_vowels_vector(vector<string>& entry, char c) {
    for (int i = 0; i < entry.size(); i++) {
        replace_vowels(entry[i], c);
    }

    for (int j = 0; j < entry.size(); j++) {
        cout << entry[j] << endl;
    }
}

int main() {
    vector<string> entry = {"apple", "banana", "orange"};
    replace_vowels_vector(entry, 'e');

    return 0;
}