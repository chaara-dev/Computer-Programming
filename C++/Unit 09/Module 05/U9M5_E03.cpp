#include "..\..\common.h"

int main() {
    vector <int>my_vector = {22, 17, 20, 31, 3, 9, 98, 1, 44, 18, 21};
    vector <int>second_vector = {};

    sort(my_vector.begin(), my_vector.end());

    int i = 0;
    while (i != 9) {
        second_vector.push_back(my_vector[i]);
        i++;
    }

    int j = 0;
    cout << "[";
    while (j != second_vector.size() - 1) {
        cout << second_vector[j] << ", ";
        j++;
    }
    cout << second_vector[second_vector.size() - 1] << "]";

    return 0;
}