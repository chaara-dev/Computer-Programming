#include "..\..\common.h"

bool equal(vector <int> one, vector <int> two) {

	if (one.size() == 0 && two.size() == 0) {
		return true;
	} else if (one.size() == 0 || two.size() == 0) {
		return false;
	} else {
		int last_one = one[one.size() - 1];
		int last_two = two[two.size() - 1];

		one.pop_back();
		two.pop_back();

		return last_one == last_two && equal(one, two);
	}
}

int main() {
	string a, b;
	getline(cin, a);
	getline(cin, b);

	vector <int> v_a;
	for (int i = 0 ; i < a.length(); i++) {

		if (isspace(a[i])) {
			continue;
        } else {
			v_a.push_back(a[i]);
        }
	}

	sort(v_a.begin(), v_a.end());
		
	vector <int> v_b;
	for (int i = 0 ; i < b.length(); i++) {
		if (isspace(b[i])) {
			continue;
        } else {
			v_b.push_back(b[i]);
        }
	}

	sort(v_b.begin(), v_b.end());

	cout << equal(v_a, v_b);

	return 0;
}