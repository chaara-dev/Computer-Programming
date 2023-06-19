#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int givenSideLength;

    cout << "Enter side length: "; cin >> givenSideLength; cout << endl;
    cout << "Side length is: "; cout << pow(givenSideLength, 3);
    return 0;
}