#include "..\..\common.h"

int main() {
    vector <int>code = {2, 0, 4};
    string ready;
    int num1, num2, num3;
    int hint_choice, hint_input;

    cout << "GUESS THE MYSTERY CODE 2.0" << endl;
    cout << "Would you like to guess now? (yes/no): "; cin >> ready;

    if (ready[0] == 'y') {
        cout << "First number: "; cin >> num1;
        cout << "Second number: "; cin >> num2;
        cout << "Third number: "; cin >> num3;
    } else if (ready[0] == 'n') {
        cout << "We have a variety of hints availableto choose from, which would you like?" << endl;
        cout << "1. Check if an inputted number is in the code." << endl;
        cout << "2. Check position of inputted number." << endl;
        cout << "3. Find the biggest and smallest numbers in the code." << endl;
        cout << "4. Find how many times a number appears in the code." << endl << endl;

        cout << "Enter the number of your chosen hint: "; cin >> hint_choice;

        if (hint_choice == 1) {
            cout << "Enter a number: "; cin >> hint_input;

            if (hint_input == code[0] || hint_input == code[1] || hint_input == code[2]) {
                cout << "Your number IS in the code.";
            } else {
                cout << "Your number IS NOT in the code.";
            }
        } else if (hint_choice == 2) {
            cout << "Enter a number: "; cin >> hint_input;

            int i = 0;
            int yes_no = false;
            while (i != code.size()) {
                if (hint_input == code[i]) {
                    yes_no = true;
                    int index = i;
                    break;
                } else {
                    yes_no = false;
                    break;
                }
                i++;
            }

            if (yes_no == true) {
                cout << "Your number is in position " << i + 1;
            } else if (yes_no == false) {
                cout << "Your number is not in the code.";
            }
        } else if (hint_choice == 3) {
            cout << "The biggest number in the code is 4" << endl;
            cout << "The smalles number in the code is 0" << endl;
        } else if (hint_choice == 4) {
            cout << "Enter a number:"; cin >> hint_input;

            int i = 0;
            int count = 0;
            while (i != code.size()) {
                if (hint_input == code[i]) {
                    count++;
                }
                i++;
            }

            cout << "Your number appears " << count << " time(s) in the code.";
        }
    }

    return 0;
}