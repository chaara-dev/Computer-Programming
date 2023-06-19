#include "..\..\common.h"

vector <int>char_count(string text) {
    int chars = 0;
    int spaces = 0;
    int digits = 0;
    for (int i = 0; i < text.length(); i++) {
        if (isalpha(text[i])) {
            chars++;
        } else if (isspace(text[i])) {
            spaces++;
        } else if (isdigit(text[i])) {
            digits++;
        }
    }

    vector <int>vect = {chars, digits, spaces};

    return vect;
}

int main() {
    string input;

    cout << "Enter a sentence: "; 
    getline(cin, input);

    vector <int>vect = char_count(input);
    for (int i = 0; i != vect.size(); i++) {
        cout << vect[i] << endl;
    }

    return 0;
}