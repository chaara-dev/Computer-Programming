#include "..\..\common.h"

bool se_letters(string word) {
    return (isalpha(word[0]) && isalpha(word[word.length() - 1]));
}

int main() {
    cout << se_letters("tyler");

    return 0;
}