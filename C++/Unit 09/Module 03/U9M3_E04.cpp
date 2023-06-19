#include "..\..\common.h"

int main() {
    string word;
    cout << "Enter a word: "; cin >> word;

    string cstr[100] = {};


    int i = 0;
    while (i != word.length()) {
        cstr[i] = word[i];
        i++;
    }


    word[0] = 'A';

    cout << word;

    return 0;
}