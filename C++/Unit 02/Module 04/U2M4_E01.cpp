#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string fname;
    string lname;
    cout << "Enter your first name: "; cin >> fname;
    cout << "Your first name is: "; cout << fname << endl;

    cout << "Enter your last name: "; cin >> lname;
    cout << "Your last name is: "; cout << lname << endl << endl;

    cout << "Your full name is: "; cout << fname; cout << " "; cout << lname;
    return 0;
}