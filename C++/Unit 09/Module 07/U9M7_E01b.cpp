#include "..\..\common.h"

void descend_sort(vector <int>vect) {
    vector <int>new_vect = {};

    int i = 0;
    while (i != vect.size()) {
        new_vect.push_back(vect[i]);
        i++;
    }
    sort(new_vect.begin(), new_vect.end(), greater<int>());

    for (int i = 0; i != new_vect.size(); i++) {
        cout << new_vect[i] << " ";
    }
}

int main() {
    vector <int>inputs = {5, 2, 1, 6, 5};
    descend_sort(inputs);

    return 0;
}