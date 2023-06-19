#include "..\..\common.h"


void count_vowels(string text) {
    map <char, int> vowels;
    vowels['a'] = 0;
    vowels['e'] = 0;
    vowels['i'] = 0;
    vowels['o'] = 0;
    vowels['u'] = 0;
    for (int i = 0; i < text.length(); i++) {
        if (tolower(text[i]) == 'a') {
            vowels['a']++;
        } else if (tolower(text[i]) == 'e') {
            vowels['e']++;
        } else if (tolower(text[i]) == 'i') {
            vowels['i']++;
        } else if (tolower(text[i]) == 'o') {
            vowels['o']++;
        } else if (tolower(text[i]) == 'u') {
            vowels['u']++;
        }
    }

    for (const auto &ele : vowels) {
        cout << ele.second << ", ";
    }
}

int main() {
    string input;
    getline(cin, input);

    cout << "A, E, I, O, U," << endl;
    count_vowels(input);

    return 0;
}