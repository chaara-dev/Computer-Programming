#include "..\..\common.h"

int vector_min (vector <int> v) {
	if (v.size() == 1) {
		return v[0];
	}
	else {
		int last = v[v.size() - 1];
		v.pop_back();
		return min(last, vector_min(v));
	}
}

int max_num(vector <int> a, vector <int> b) {
	
	if (a.size() == 1 && b.size() == 1) {
		return max(a[0], b[0]);
	} else {
		int a_last = a[a.size() - 1];
		int b_last = b[b.size() - 1];
		a.pop_back();
		b.pop_back();


		return max(max(max_num(a, b), a_last), max(max_num(a, b), b_last));
	}
}


int main() {
	vector <int> a = {2, 3, 9, -5, 1};
	vector <int> b = {96, 22, 43, 9, -33};
	vector <int> c = {81, 72, 144, 0, 6};

	pair <int, int> d(max_num(a, b), vector_min(c));
	cout << d.first << endl;
	cout << d.second;


	return 0;
}