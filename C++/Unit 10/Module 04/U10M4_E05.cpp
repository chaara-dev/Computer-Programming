#include "..\..\common.h"

int main() {
    int input;
    cout << "Enter a number: "; cin >> input;

    int num1 = 0;
    int num2 = 1;
    int num3 = 1;
    for (int i = 0; i != input; i++) {
        int output = num1 + num2;

        num1 = num2;
        num2 = output;

        if (i == input - 1) {
            cout << output << endl;
        }
    }

    return 0;
}