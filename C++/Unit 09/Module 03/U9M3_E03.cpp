#include "..\..\common.h"

int main() {
    int input, value;
    cout << "Enter the length of the string array here: "; cin >> input;

    if (input > 15 || input < 0) {
        // Shortened down from 100 to make it easier to fill in all the inputs
        cout << "Sorry, you can't do that";
        return 0;
    }

    string* list = new string[input];

    for (int i = 0; i < input; i++) {
        cout << "Enter value #" << i + 1 << ": "; cin >> value;
        
        list[i] = to_string(value);
    }

    int j = 0;

    cout << "[";
    while (j < input) {
        cout << list[j];
        if (j < input - 1) {
            cout << ", ";
        }
        j++;
    }
    cout << "]";

    delete[] list;

    return 0;
}