#include "..\..\common.h"

bool is_word(string word) {
    if (word.length() > 0 || isalpha(word[0])) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << is_word("");
    return 0;
}