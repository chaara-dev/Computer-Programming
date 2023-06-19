#include "..\common.h"

int vowel_count(string arr) {
    int total = 0;

    
}



int main() {
    string arr[2][3] = {{"dog", "cat", "mouse"}, {"lion", "tiger", "monkey"}};
    int first = 0;
    int second = 0;

    for (int i = 0; i < arr[2][3].size(); i++) {
        cout << arr[first][second];
        second++;
        if (first == 2) {
            first++;
            second = 0;
        }
    }

    return 0;
}


// why does this happen