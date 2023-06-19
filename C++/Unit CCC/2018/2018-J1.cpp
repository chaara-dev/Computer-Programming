#include "..\..\common.h"

int main() {
    int num[4] = {};
    for (int i = 0; i < 4; i++) {
        cout << "Enter number #" << i + 1 << ": ";
        cin >> num[i];
    }

    if (num[0] != 8 && num[0] != 9) {
        cout << "answer";
        return 0;
    } else if (num[1] == num[2]) {
        cout << "ignore";
        return 0;
    } else if (num[3] != 8 && num[3] != 9) {
        cout << "answer";
        return 0;
    }
    
    cout << "answer";
    return 0;
}