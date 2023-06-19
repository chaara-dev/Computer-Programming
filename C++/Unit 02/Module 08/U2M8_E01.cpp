#include <iostream>
#include <string>

using namespace std;

int main() {
    string word = "Good morning";

    cout << word << endl;
    word.erase(5, 11);
    word.insert(4, " afternoon");

    cout << word;

    return 0;
}