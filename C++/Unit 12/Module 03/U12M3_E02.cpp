#include "..\..\common.h"

int main() {
    map<string, int> numbers;

    numbers["one"] = 1;
    numbers["two"] = 2;
    numbers["three"] = 3;
    numbers["four"] = 4;
    numbers["five"] = 5;
    
    for (const auto &ele : numbers) {
        if (ele.first == "three" || ele.first == "five") { // ele.first - element.key?
            cout << ele.second << endl; // ele.second - element.value?
        }
    }

    return 0;
}