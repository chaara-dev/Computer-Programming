#include "..\..\common.h"

int main() {
    float kilometer_input;

    cout << "km/h to m/s CONVERTER" << endl;
    cout << "Enter km/h here: "; cin >> kilometer_input;

    cout << fixed << setprecision(2) << (kilometer_input / 3.6);

    return 0;
}