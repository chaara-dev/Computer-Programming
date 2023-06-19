#include "..\..\common.h"

int main() {
    for (int i = 0; i != 51; i++) {
        if (i % 5 == 0) {
            cout << i << endl;
        } else {
            continue;
        }
    }
}