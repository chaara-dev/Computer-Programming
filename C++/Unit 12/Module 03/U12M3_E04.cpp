#include "..\..\common.h"

int input;
map <string, float> fruits = {
    {"apple", 4.36}, {"banana", 1.65}, {"cherry", 4.40}, {"orange", 3.43}, {"watermelon", 2.50}
    };
map <string, float> veggies = {
    {"carrot", 2.46}, {"celery", 2.65}, {"potato", 1.54}, {"onion", 2.67}, {"tomato", 2.80}
};
string product_input;
string product;
float weight;


void product_list() {
    cout << endl << "--Fruits--" << endl;
    for (auto x: fruits) {
        cout << x.first << " - $" << x.second << endl;
    }

    cout << endl << "--Veggies--" << endl;
    for (auto x: veggies) {
        cout << x.first << " - $" << x.second << endl;
    }

    return;
}

void price_calc() {
    cout << "Enter product name: "; cin >> product;
    cout << "Enter product weight: "; cin >> weight;

    auto fr = fruits.find(product);
    if (fr != fruits.end()) {
        for (auto x: fruits) {
            if (product == x.first) {
                cout << "Total price - $" << (x.second * weight);
                return;
            }
        }
    }

    auto ve = veggies.find(product);
    if (ve != veggies.end()) {
        for (auto y: veggies) {
            if (product == y.first) {
                cout << "Total price - $" << (y.second * weight);
                return;
            }
        }
    }
}

int main() {
    cout << "1. Product List" << endl << "2. Price Calculator" << endl;
    cout << "Input Number: "; cin >> input;

    if (input == 1) {
        product_list();
        main();
    } else if (input == 2) {
        price_calc();
    } else {
        cout << "not allowed";
        return 0;
    }

    return 0;
}