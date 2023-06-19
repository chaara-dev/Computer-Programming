#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cout << "Enter a word: "; cin >> input;

    cout << "First character: " << input[0] << endl;
    cout << "Second character: " << input[1] << endl;

    return 0;
}