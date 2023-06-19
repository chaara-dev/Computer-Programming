#include "..\..\common.h"

int a_count = 0;
int e_count = 0;
int i_count = 0;
int o_count = 0;
int u_count = 0;

void count_vowels(string word) {
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == 'a') {
            a_count++;
        } else if (word[i] == 'e') {
            e_count++;
        } else if (word[i] == 'i') {
            i_count++;
        } else if (word[i] == 'o') {
            o_count++;
        } else if (word[i] == 'u') {
            u_count++;
        } else {
            continue;
        }
    }
}


int main() {
    string arr[2][3] = {{"dog", "cat", "mouse"}, {"lion", "tiger", "monkey"}};
    int first = 0;
    int second = 0;

    for (int i = 0; i < 6; i++) {
        count_vowels(arr[first][second]);
        second++;
        if (second == arr[0][0].size()) {
            first = 1;
            second = 0;
        }
    }

    int result[5] = {a_count, e_count, i_count, o_count, u_count};
    cout << result[1] << endl;

    return 0;
}