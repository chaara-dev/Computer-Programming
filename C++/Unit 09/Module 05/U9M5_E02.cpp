#include "..\..\common.h"

int main() {
    string word;
    vector <char>output_word = {};

    cout << "Word: "; cin >> word;

    int i = 0;
    while (i != word.length()) {
        output_word.push_back(word[i]);
        i++;
    }

    int j = 0;
    while (j != output_word.size()) {
        cout << output_word[j] << " ";
        j++;
    }

    return 0;
}