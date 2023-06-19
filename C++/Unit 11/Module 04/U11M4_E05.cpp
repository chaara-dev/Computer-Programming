#include "..\..\common.h"

enum Marks {
    marks_a,
    marks_b,
    marks_c = 75
};

int main() {
    cout << Marks::marks_c;

    return 0;
}