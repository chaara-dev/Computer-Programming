#include "..\..\common.h"

void v_replace() {
    vector <string>list = {"c", "a", "t"};
    int index = 1;
    string e = "o";

    list[index] = e;

    int i = 0;
    while (i != list.size()) {
        cout << list[i] << " ";
        i++;
    }
}

int main() {
    v_replace();

    return 0;
}