#include "..\..\common.h"

bool palindrome_check(string entry){

	if (entry.length() <= 1) {
		return true;
    } else {
		return (entry[0] == entry[entry.length()-1]) && palindrome_check(entry.substr(1, entry.length() - 2));
    }

}

int main() {
	string a;
	int best = 0;
    
	cout << "Enter word here: "; cin >> a;

	for (int i = 0; i <= a.length(); i++) {
		for (int j = i; j <= a.length(); j++) {
			if (j - i > best && palindrome_check(a.substr(i, j))) {
				best = j - i;
			}
		}
	}

	cout << best;
	
    return 0;
}