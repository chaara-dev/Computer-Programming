#include "..\..\common.h"

bool search_char(string word, char character) {
    int i = 0;
    while (i < word.length() + 1) {
        if (word[i] == character) {
            return true;
        }
        i++;
    }

    return false;
}

void test_search_char() {
    assert(search_char("word", 'word'));
    assert(search_char("apple", 'c'));
    assert(search_char("Tyler", 't'));
}

int main() {
    cout << search_char("apple", 'p');

    return 0;
}