#include "..\..\common.h"

bool palindrome_check(string entry){

	if (entry.length() <= 1) {
		return true;
    }   else {
		return (entry[0] == entry[entry.length()-1]) && palindrome_check(entry.substr(1, entry.length()-2));
    }
}

int main() {
	string a; 
	cout << "Enter a number: "; cin >> a;

	cout << palindrome_check(a);
    
    return 0;
}