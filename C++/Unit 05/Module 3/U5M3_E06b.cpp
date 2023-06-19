#include "..\..\common.h"

bool cake_test(string input) {
    char first_char = input[0];
    char last_char = input[input.length() - 1];

    return ('c' == first_char && 'e' == last_char);
}

int main() {
    string w1, w2, w3;
    cout << "Enter three words: \n";
    cout << "1. "; cin >> w1;
    cout << "2. "; cin >> w2;
    cout << "3. "; cin >> w3;   

    cout << cake_test(w1) << endl;
    cout << cake_test(w2) << endl;
    cout << cake_test(w3) << endl;

    return 0;
}