#include "..\..\common.h"

int product(vector <int> v) {
	if (v.size() == 0) {
		return 1;
	} else {
		int last = v[v.size() - 1];
		v.pop_back();
        
		return last * product(v);
	}
}

int main() {
	int a[] = {7, 2, 8, 9, 11};
	vector <int> v(a, a + 5);

	cout << product(v);

	return 0;
}