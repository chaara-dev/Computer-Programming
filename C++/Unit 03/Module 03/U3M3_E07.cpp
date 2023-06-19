#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    int user_input, random, magic_number;

    cout << "Enter a number: "; cin >> user_input;
    srand(time(NULL));
    random = rand() % 100 + 1;

    magic_number = random * user_input;

    cout << "This is the magic number: " << magic_number << endl;
    cout << "This is the magic key: " << random;

    return 0;
}