#include <iostream>
#include <string>

using namespace std;

int main() {
    string givenWord;

    cout << "Enter a word here: "; cin >> givenWord; cout << endl;
    cout << "Your word is " << givenWord.length() << " characters long";

    return 0;
}