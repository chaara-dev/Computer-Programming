#include "..\..\common.h"

string to_string(vector <string> v) {
	if (v.size() == 1) {
		return v[0];
	}
	else {
		string last = v[v.size() - 1];
		v.pop_back();
		return to_string(v) + last;
	}
}

int main() {
	vector <string> v = {"H", "e", "l", "l", "o", " , ", "w", "o", "r", "l", "d", "!"};
	cout << to_string(v);

	return 0;
}