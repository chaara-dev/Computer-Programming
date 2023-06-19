#include "..\..\common.h"

int main() {
    vector <string>my_name = {"T", "y", "l", "e", "r"};

    sort(my_name.begin(), my_name.end());

    int i = 0;
    while (i != my_name.size()) {
        cout << my_name[i];
        i++;
    }

    return 0;
}