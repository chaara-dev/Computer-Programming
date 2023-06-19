#include "..\..\common.h"

int main() {
    for (int i = 0; i != 11; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        } else {
            continue;
        }
    }

    cout << "-----" << endl;

    for (int j = 0; j != 5; j++) {
        cout << j << endl;
    }

    cout << "-----" << endl;

    for (int f = 5; f != 0; f--) {
        cout << f << endl;
    }

    return 0;
}