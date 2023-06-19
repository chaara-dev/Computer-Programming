#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float first_float, second_float;

    cout << "Enter two numbers: \nFirst Number: "; cin >> first_float; 
    cout << "Second Number: "; cin >> second_float;

    int result = pow(first_float, second_float);

    cout << "Here is your output: " << result;

    return 0;
}