#include "..\..\common.h"

int main() {
    const float APPLE_PRICE = 3.80;
    const float BANAN_PRICE = 1.72;
    const float ORANG_PRICE = 3.56;
    string yes_or_no, fruit_choice;
    int fruit_quant;
    float total;
    string fruit_names[] =  {"apples", "apple", "oranges", "orange", "bananas", "banana"};
    cout << "Welcome to NEW WEST FRUIT STORE's Price Checker!" << endl;
    cout << "Due to delays, we only have 3 fruits available today:" << endl;
    cout << "> Apples\n> Bananas\n> Oranges\n\n";
    cout << "Do you wish to buy any fruits from the list above? (Y/N): "; cin >> yes_or_no;
    if (yes_or_no[0] == 'Y' || yes_or_no[0] == 'y') {
        cout << "Enter the fruit you want: "; cin >> fruit_choice;
        cout << "Enter how much you want: "; cin >> fruit_quant;

        int i = 0;
        bool valid = false;
        while (i < fruit_names->length() && valid == false) {
            if (fruit_choice == fruit_names[i]) {
                valid = true;
            }
            i++;
        }

        if (valid == true) {
            if (fruit_choice[0] == 'a') {
                total = fruit_quant * APPLE_PRICE;
            } else if (fruit_choice[0] == 'b') {
                total = fruit_quant * BANAN_PRICE;
            } else if (fruit_choice[0] == 'o') {
                total = fruit_quant * ORANG_PRICE;
            }
        } else {
            cout << "Sorry, we don't have " << fruit_choice << " in stock right now.";
        }

        cout << "Your total is $" << total;
    } else if (yes_or_no[0] == 'N' || yes_or_no[0] == 'n') {
        cout << "Thank you for visiting our store.";
    } else {
        cout << "Sorry, I didn't understand. Thanks for coming anyways!";
    }

    return 0;
}