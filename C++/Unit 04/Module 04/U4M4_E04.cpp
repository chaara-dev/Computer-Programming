#include "..\..\common.h"

int bills_to_total(int five_bills, int ten_bills, int twenty_bills) {
    const int FIVE = 5.0;
    const int TEN = 10.0;
    const int TWENTY = 20.0;

    return (FIVE * five_bills) + (TEN * ten_bills) + (TWENTY * twenty_bills);
}

int main() {
    cout << bills_to_total(3, 5, 0);

    return 0;
}