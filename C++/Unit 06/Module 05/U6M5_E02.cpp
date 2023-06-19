#include "..\..\common.h"

int main() {
    const float apple_price = 3.80;
    const float banan_price = 1.72;
    const float orang_price = 3.56;
    string fruit;

    cout << "Welcome to NEW WEST FRUIT STORE's Price Checker!" << endl;
    cout << "Due to delays, we only have THREE fruit choices for today:" << endl;
    cout << "Apples\nBananas\nOranges\n\n";

    cout << "Enter your chosen fruit here:"; cin >> fruit;

    string new_fruit;

    for (int i = 0; i < fruit.length(); i++) {
        new_fruit += tolower(fruit[i]);
    }
    if (new_fruit[0] == 'a') {
        cout << "Our apples are $" << apple_price << " per kg.";
    } else if (new_fruit[0] == 'b') {
        cout << "Our bananas are $" << banan_price << " per kg.";
    } else if (new_fruit[0] == 'o') {
        cout << "Our oranges are $" << orang_price << " per kg.";
    } else {
        cout << "Sorry, we don't have " << fruit << " in stock right now.";
    }

    return 0;
}