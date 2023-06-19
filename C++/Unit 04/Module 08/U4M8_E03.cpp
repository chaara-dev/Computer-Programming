#include "..\..\common.h"

double total_liters(int toilet, int dishes, double shower) {
    return {toilet * 6 + dishes * 19 + shower * 7 };
}

int main() {
    cout << "If a person flushes the toilet ten (10) times,";
    cout << "uses the dishwasher two (2) times, and showers for ten (10) minutes." << endl;;
    cout << "They wil have used a total of [" << total_liters(10, 2, 10) << "] liters of water.";

    return 0;
}