#include "..\..\common.h"

int factorial(int num) {
	if (num <= 1) {
		return 1;
	} else {
		return num * factorial(num - 1);
	}
}

int main() {
	int input;
	cout << "Enter a number: "; cin >> input;

	while (input <= 0) {
		cout << endl << "Not allowed. Try again: "; cin >> input;
	}

	cout << factorial(input);
	
	return 0;
}