#include "..\..\common.h"

int main() {
    int input;
    string total;
    cout << "Welcome to the New West Beverage Store" << endl;
    cout << "We currently offer the following beverages" << endl;

    cout << "1. 7 UP\n2. Pepsi\n3. Coca Cola\n4. Fanta\n5. Root Beer" << endl;

    cout << "Please select a by typing the corresponding number here: "; cin >> input;

    switch(input) {
        case 1:
            total = "2.25";
            break;
        case 2:
            total = "2.50";
            break;
        case 3:
            total = "2.00";
            break;
        case 4:
            total = "2.60";
            break;
        case 5:
            total = "1.80";
            break;
        default:
            cout << "Sorry, that input isn't allowed";
            return 0;
    }

    cout << "The price to purchase your chosen drink is $" << total << ". Thanks for coming!";

    return 0;
}