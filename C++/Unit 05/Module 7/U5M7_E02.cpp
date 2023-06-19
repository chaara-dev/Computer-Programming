#include "..\..\common.h"

bool word_check(string word) {
    return (word.length() % 2 == 0 && word[word.length() - 1] == 's' || word[word.length() - 1] == 'S');
}

int main() {
    cout << word_check("apples");

    return 0;
}