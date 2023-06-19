#include "..\..\common.h"

bool equal(vector <string> one, vector <string> two) {
	if (one.size() == 0 && two.size() == 0) 
		return true;
		
	else if (one.size() == 0 || two.size() == 0)
		return false;

	else {
		string last_one = one[one.size() - 1];
		string last_two = two[two.size() - 1];

		one.pop_back();
		two.pop_back();

		return last_one == last_two && equal(one, two);
	}
}

int main() {
	vector <string> a = {"hello", "chocolate", "cake"};
	vector <string> b = {"hello", "chocolate", "cake"};

	cout << equal(a, b);
    
	return 0;
}