#include "..\..\common.h"

int uppercase_count(string word) {
    int count = 0;
    for (int i = 0; i != word.length(); i++) {
        if (isupper(word[i])) {
            count++;
        }
    }

    return count;
}

int main() {
    cout << uppercase_count("comp Sci");

    return 0;
}