#include "..\..\common.h"

bool is_word(string word) {
    if (word == "") {
        return false;
    } else if (isalpha(word[0]) && isalpha(word[word.length() - 1])) {
        return true;
    } 
    
    return "Error.";
}

int main() {
    cout << is_word("appl3z");

    return 0;
}