#include "..\..\common.h"

int calculate_age(int current_year, int birth_year) {
    cout << "You are around " << current_year - birth_year << " years old.";

    return 0;
}

int main() {
    calculate_age(2023, 2006);

    return 0;
}