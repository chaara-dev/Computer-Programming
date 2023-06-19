#include "..\..\common.h"

int past_eighteen(int age) {
    if (age >= 18) {
        return (age - 18);
    } else {
        return (18 - age);
    }
}

int main() {
    cout << past_eighteen(16);

    return 0;
}