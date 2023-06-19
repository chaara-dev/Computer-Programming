#include "..\..\common.h"

int main() {
    string input1, input2, input3, input4;
    int index;
    char e;

    cout << "list[0]: "; cin >> input1;
    cout << "list[1]: "; cin >> input2;
    cout << "list[2]: "; cin >> input3;
    cout << "list[3]: "; cin >> input4;

    string list[4] = {input1, input2, input3, input4};

    cout << endl << "e: "; cin >> e;
    cout << "index: "; cin >> index;

    while (index > 3 && index < 0) {
        cout << "Sorry, that isn't a valid input";
    }

    list[index] = e;

    cout << endl << endl;

    int i = 0;

    cout << "[";
    while (i < 4) {
        cout << list[i];
        if (i == 0 || i == 1 || i == 2) {
            cout << ", ";
        }
        i++;
    }
    cout << "]";

    return 0;
}