#include "..\..\common.h"

vector <string> combine_vectors(vector <string> v1, vector <string> v2) {
	vector <string> v_final(v1.size() + v2.size());

	for (int i = 0; i < v1.size(); i++) {
		v_final[i] = v1[i];
		
	}

	for (int j = 0; j < v2.size(); j++) {
		v_final[j + v1.size()] = v2[j];
		
	}

	return v_final;
}


vector <string> converter(string s) {
	if (s.length() == 1) {
		vector <string> v(1);
		v.push_back(s);
		return v;
	} else {
		vector <string> first(1);
		first.push_back(s.substr(0, 1));

		return combine_vectors(first, converter(s.substr(1, s.length())));
	}
}

int main() {
	string s = "Hello, World!";
	vector <string> v = converter(s);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}

	return 0;
}