#include <iostream>
#include <string>

using namespace std;

int main() {
    string word = "Supercalifragilisticexpialidocious";

    cout << word.substr(0, (word.length() / 2)) << endl;
    cout << word.substr(((word.length() / 2) + 1), word.length());

    return 0;
}