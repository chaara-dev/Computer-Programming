#include "..\..\common.h"

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int arr3[] = {7, 8, 9};

    vector <vector <int> > vect = {vector<int>(arr1, arr1 + 3), vector<int>(arr2, arr2 + 3),  vector<int>(arr3, arr3 + 3)};
    int total = 0;

    for (int i = 0; i < vect.size(); i++) {
        for (int j = 0; j < 3; j++) {
            total += vect[i][j];
        }
    }

    cout << total;
    return 0;
}