#include "..\..\common.h"

bool hasDistinctDigits(int input) {
    string yearStr = to_string(input);
    int count[10] = {0};

    for (char digit : yearStr) {
        int num = digit - '0';
        if (count[num] > 0) {
            return false;
        }

        count[num]++;
    }

    return true;
}

int main() {
    int year;
    
    cout << "Enter year: ";
    cin >> year;

    while (1 != 0) {
        year++;
        if (hasDistinctDigits(year)) {
            break;
        }
    }

    cout << year;

    return 0;
}