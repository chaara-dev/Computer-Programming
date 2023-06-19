#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int birth_year, current_year;

    cout << "Enter the current year: "; cin >> current_year;
    cout << "Enter your birth year: "; cin >> birth_year;

    cout << "You are approximately " << current_year - birth_year << " year(s) old.";

    return 0;
}