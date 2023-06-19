#include "..\..\common.h"

bool equal(string one, string two) {
	if (one.length() == 0 && two.length() == 0) {
		return true;
    } else if (one.length() == 0 || two.length() == 0) {
		return false;
    } else {
		return one[0] == two[0] && equal(one.substr(1, one.length()), two.substr(1, two.length()));
    }
}

int main() {
	string a, b;
	cin >> a >> b; 

	cout << equal(a, b);

	return 0;
}