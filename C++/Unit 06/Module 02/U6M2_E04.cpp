#include "..\..\common.h"

int is_concession(int age) {
    if (age <= 19 || age >= 65) {
        return true;
    } else {
        return false;
    }
}

int not_concession(int age) {
    return !is_concession(age);
}

int main() {
    cout << is_concession(21) << endl;
    cout << not_concession(21);

    return 0;
}