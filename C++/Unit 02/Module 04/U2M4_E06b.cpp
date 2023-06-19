#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string a, b, c;

    cin >> a;
    cin.ignore();
    getline(cin, b);
    getline(cin, c);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    return 0;
}