#include <iostream>
#include <string>

using namespace std;

int main() {
    string userInput;

    cout << "Enter a word: "; cin >> userInput; cout << endl;

    cout << userInput[0] << userInput.substr(userInput.length() / 2, userInput.length() / 2 - 1);

    return 0;
}