#include "..\..\common.h"

int calc(int x, int y) {
	if (x == 1 || y == 10) {
		return x * y;
    } else {
		return x * y + calc(x - 1, y + 1);
    }
}

int main() {
	int x, y;
	cin >> x >> y;

	cout << calc(x, y);

	return 0;
}