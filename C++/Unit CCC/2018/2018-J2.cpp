#include "..\..\common.h"

int main() {
    int spots, count = 0;
    string day1, day2;

    cout << "Enter number of spaces: ";
    cin >> spots;

    cout << "Enter filled spots on day 1 (C for occupied space, and . for unoccupied): ";
    cin >> day1;
    cout << "Enter filled spots on day 2 (C for occupied space, and . for unoccupied): ";
    cin >> day2;


    for (int i = 0; i < spots; i++) {
        if (isalpha(day1[i]) && isalpha(day2[i])) {
            count++;
        }
    }

    std::cout << count;
    return 0;
}