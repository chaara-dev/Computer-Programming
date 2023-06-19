#include "..\..\common.h"

int calc_min(vector <int> v) {
	if (v.size() == 1) {
		return v[0];
	} else {
		int last = v[v.size() - 1];
		v.pop_back();

		return min(last, calc_min(v));
	}
}

int main() {
	int a[] = {2, 3, -4, 5, 6, 10, 30, -20};
	vector <int> my_vector(a, a + 8);

	cout << calc_min(my_vector);

	return 0;
}