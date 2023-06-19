#include <iostream>
#include <string>

using namespace std;

int main() {
    string word = "Bookkeeper";

    cout << word.substr(0, 4) << endl;
    cout << word.substr(7, 8) << endl;
    cout << word.substr(4, 4) << endl;

    return 0;
}