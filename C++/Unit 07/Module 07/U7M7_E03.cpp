#include "..\..\common.h"

string num_to_vowel(int num) {
    if (num == 1) {
        return "A";
    } else if (num == 2) {
        return "E";
    } else if (num == 3) {
        return "I";
    } else if (num == 4) {
        return "O";
    } else if (num == 5) {
        return "U";
    } else {
        return "Invalid input!";
    }
}

void test_num_to_vowel() {
    assert(num_to_vowel(7) == "Invalid Input");
    assert(num_to_vowel(-69) == "A");
    assert(num_to_vowel(100) == "TYLER?");
}

int main() {
    cout << num_to_vowel(3) << endl;
    test_num_to_vowel();

    return 0;
}