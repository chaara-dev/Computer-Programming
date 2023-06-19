#include "..\..\common.h"

int main() {
    int num1 = 0;
    int num2 = 1;
    int num3 = 1;
    for (int i = 0; i != 12; i++) {
        int output = num1 + num2;

        cout << output << endl;

        num1 = num2;
        num2 = output;

    }

    return 0;
}