#include "..\..\common.h"

vector <double> sb(vector <double> salaries, double booster) {
	vector <double> empty;
	empty.resize(0);
	if (salaries.size() == 0) {
		return empty;
	}
	else {
		double last = salaries[salaries.size() - 1];
		last += booster;
		salaries.pop_back();
		salaries = sb(salaries, booster);
		salaries.push_back(last);

		return salaries;
	}
}

int main() {
	vector <double> salaries = {855.21, 835.01, 800.7, 1017.04};
	double booster = 10 * 8 * 5;

	vector <double> result = sb(salaries, booster);
    
	for (int i = 0; i < result.size(); i++) {
		cout << fixed << setprecision(2) << result[i] << endl;
	}

	return 0;
}