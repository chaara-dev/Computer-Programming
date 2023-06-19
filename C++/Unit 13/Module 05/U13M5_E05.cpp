#include "..\..\common.h"

vector <double> combine_vectors(vector <double> v1, vector <double> v2) {

	vector <double> v_final(v1.size() + v2.size());
	for (int i = 0; i < v1.size(); i++) {
		v_final[i] = v1[i];
	}

	for (int j = 0; j < v2.size(); j++) {
		v_final[j + v1.size()] = v2[j];
	}

	return v_final;
}


vector <double> converter(vector <double> data) {

	if (data.size() > 3) {
		vector <double> first = {(data[0] - 32) * 5 / 9};
		data.erase(data.begin(), data.begin() + 1);

		return combine_vectors(first, converter(data));
	} else {
		if (data.empty()) {
			vector <double> empty(0);

			return empty;
		}

		vector <double> first = {data[0] * 3.6};

		data.erase(data.begin(), data.begin() + 1);

		return combine_vectors(first, converter(data));
	}
}

int main() {
	
	double arr_data[] = {59, 64, 50, 5, 10, 7};
	vector <double> data (arr_data, arr_data + 6);

	vector <double> result = converter(data);
	
	for (int i = 0; i < result.size(); i++) {
		cout << fixed << setprecision(2) << result[i] << endl;
	}

	return 0;
}