#include "..\..\common.h"

int main() {
    for (int i = 0; i != 10; i++) {
        if (i == 5) {
            break;
        }
        cout << i << endl;
    }

    cout << "----------" << endl;

    int j = 0;
    while (j < 10) {
        if (j == 5) {
            break;
        }
        j++;
        cout << j << endl;
    }

    return 0;
}