#include "..\..\common.h"

int calc(int num) {
	if (num <= 2) {
		return 1;
	} else {
		return calc(num - 1) + calc(num - 2);
	}
}

int main() {
	int x;
	cout << "Enter number: "; cin >> x;

	while (x <= 0) {
		cout << endl << "Invalid. Try again: "; cin >> x;
	}

	cout << calc(x);

	return 0;
}