#include "..\..\common.h"

void remove_element(vector<int> vect, int x) {
    vector<int> new_vect;
    int i = 0;
    while (i < vect.size()) {
        if (vect[i] != x) {
            new_vect.push_back(vect[i]);
        }
        i++;
    }

    for (int i = 0; i < new_vect.size(); i++) {
        cout << new_vect[i] << " ";
    }

    return;
}

int main() {
    vector<int> input = {0, -6, -1, 0, 0, 1, 2};
    remove_element(input, 1);

    return 0;
}
