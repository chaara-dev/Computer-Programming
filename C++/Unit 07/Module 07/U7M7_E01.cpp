#include "..\..\common.h"

string num_to_letter(int num) {
    const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    if (num >= 0 && num <= 25) {
        return string(1, alphabet[num]);
    } else {
        return "Invalid Input";
    }
}

int main() {
    cout << num_to_letter(0) << endl;
    return 0;
}