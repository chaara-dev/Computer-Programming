#include "..\..\common.h"

bool total_30(int num1, int num2) {
    return ((num1 * num2) == 30);
}

int main() {
    cout << total_30(6, 5);

    return 0;
}