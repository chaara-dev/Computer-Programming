#include "..\..\common.h"

int main() {
    float orange_price = 3.56;
    float apple_price = 3.80;
    float banana_price = 1.72;
    float orange_input, apple_input, banana_input;

    cout << "Welcome to New Westminster's Fruit Store Cost Calculator!";

    cout << "FRUITS PRICE LIST: \nOranges: " << orange_price << "\nApples: " << apple_price << endl;
    cout << "Bananas: " << banana_price << endl << endl;

    cout << "How many kilograms of fruit do you want?" << endl;

    cout << "Oranges -> "; cin >> orange_input;
    cout << "Apples -> "; cin >> apple_input;
    cout << "Bananas ->"; cin >> banana_input;

    float total_price = (orange_input * orange_price) + (apple_input * apple_price) + (banana_input * banana_price);

    
    cout << "You have $" << fixed << setprecision(2) << total_price << " worth of fruits.";

    return 0;
}