#include "..\..\common.h"

int total_fingers(int people_count) {
    return people_count * 10;
}

int main() {
    int input;
    cout << "How many people are there: "; cin >> input;
    cout << "There are " << total_fingers(input) << " fingers in a group of " << input << " people";

    return 0;
}