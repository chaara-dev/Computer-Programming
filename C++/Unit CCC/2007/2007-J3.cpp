#include "..\..\common.h"

int main() {
    int briefcases[10] = {100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000};

    int num_cases_open, eliminated, num_elims, total, offer;

    cout << "Enter number of cases open: ";
    cin >> num_cases_open;

    for (int i = 0; i < num_cases_open; i++) {
        cout << "Enter number of eliminated case: ";
        cin >> eliminated;

        briefcases[eliminated - 1] = 0;
        num_elims++;
    }

    cout << "Enter Banker's offer: ";
    cin >> offer;

    for (int i = 0; i < 9; i++) {
        total += briefcases[i];
    }

    if (offer > (total / num_elims)) {
        cout << "deal";
    } else if (offer < total / num_elims) {
        cout << "no deal";
    } else {
        cout << "error";
    }

    return 0;
}