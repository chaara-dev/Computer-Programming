#include "..\..\common.h"

int main() {
    string str1;
    string str2;

    cout << "Enter first sentence: "; getline(cin, str1);
    cout << "Enter second sentence: "; getline(cin, str2);
    cout << endl;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
    regex whitespace("\\s*");

    str1 = regex_replace(str1, whitespace, "");
    str2 = regex_replace(str2, whitespace, "");

    if (str1 == str2) {
        cout << "Is an anagram.";
    } else {
        cout << "Is not an anagram.";
    }

    return 0;
}