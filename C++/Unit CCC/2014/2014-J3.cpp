#include "..\..\common.h"

int main() {
    int round_count, david = 100, antonia = 100;
    string roll_inputs;

    cout << "Enter round count: ";
    cin >> round_count;
    cin.ignore();

    for (int i = 0; i < round_count; i++) {
        cout << "Enter numbers for round #" << i + 1 << ": ";
        getline(cin, roll_inputs);
        
        if (roll_inputs[0] - '0' > roll_inputs[2] - '0') {
            david -= roll_inputs[0] - '0';
        } else if (roll_inputs[0] - '0' < roll_inputs[2] - '0') {
            antonia -= roll_inputs[2] - '0';
        }
    }

    cout << antonia << endl << david;

    return 0;
}