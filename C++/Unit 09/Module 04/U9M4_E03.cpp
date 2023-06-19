#include "..\..\common.h"

int main() {
    int vector_size, value, index;
    vector <int>list = {};

    cout << "Enter the length of the vector here: "; cin >> vector_size;

    if (vector_size > 50 || vector_size < 1) {
        cout << "Sorry, you can't do that.";
        return 0;
    }

    int i = 0;
    while (i < vector_size) {
        cin >> value;
        list.push_back(value);
        i++;
    }

    cout << "Which index do you want to output: "; cin >> index;
    if (index > list.size() || index < 0) {
        cout << "Sorry, you can't do that.";
        return 0;
    }

    cout << list[index];
}