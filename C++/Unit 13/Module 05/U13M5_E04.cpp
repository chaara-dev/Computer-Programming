#include "..\..\common.h"

vector <double> change(vector <double> salaries, vector <double> subsidy) {
	if (salaries.size() == 0) {
		return salaries;
	} else {
		double last = salaries[salaries.size() - 1];
		last += subsidy[subsidy.size()-1];
		subsidy.pop_back();
		salaries.pop_back();
		salaries = change(salaries, subsidy);
		salaries.push_back(last);

		return salaries;
	}
}

int main() {
	vector <double> salaries = {25, 23, 17, 10.85, 11};
	vector <double> subsidy = {3, 5, 9, 12, 0};

	vector <double> result = change(salaries, subsidy);

	for (int i = 0; i < result.size(); i++) {
		cout << fixed << setprecision(2) << result[i] << endl;
	}

	return 0;
}