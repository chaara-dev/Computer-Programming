#include "..\..\common.h"

int main() {
    vector <int>numbers = {4, 2, 0, 2, 3, 9, 0};
    vector <char>letters = {'c', 'a', 't', 'd', 'o', 'g'};

    cout << *max_element(numbers.begin(), numbers.end()) << endl;
    cout << *min_element(numbers.begin(), numbers.end()) << endl << endl;

    cout << *max_element(letters.begin(), letters.end()) << endl;
    cout << *min_element(letters.begin(), letters.end());

    return 0;
}