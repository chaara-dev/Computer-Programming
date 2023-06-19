#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cookies = 16;
    int newCookies;

    cout << "I have 16 cookies in my cookie jar." << endl;
    cout << "How many cookes to add: "; cin >> newCookies;

    cout << endl; cout << "I now have "; cout << (cookies + newCookies); cout << " in my cookie jar." << endl;

    return 0;
}