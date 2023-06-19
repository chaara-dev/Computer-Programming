#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int nickelCount;
    cout << "Nickel to Dollar Converter!" << endl;
    cout << "Enter number of nickels: "; cin >> nickelCount;
    cout << endl << "That many nickels is worth ";
    cout << "$" << static_cast<float>(nickelCount * 0.05) << endl;
    return 0;
}