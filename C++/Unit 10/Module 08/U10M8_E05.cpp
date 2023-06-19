#include "..\..\common.h"

bool possible_baby (string m, string d, string b) {
	bool okay = true;
	for (int i = 0 ; i <= 4 && okay ; i++)
	    if (b[i] >= 'A' && b[i] <= 'E') {
		    okay = (m[i * 2] >= 'A' && m[i * 2] <= 'E') ||
		    (m[i * 2 + 1] >= 'A' && m[i * 2 + 1] <= 'E') ||
		    (d[i * 2] >= 'A' && d[i * 2] <= 'E') ||
		    (d[i * 2 + 1] >= 'A' && d[i * 2 + 1] <= 'E');
        } else {
		    okay = ((m[i * 2] >= 'a' && m[i * 2] <= 'e') ||
			(m[i * 2 + 1] >= 'a' && m[i * 2 + 1] <= 'e')) &&
		    ((d[i * 2] >= 'a' && d[i * 2] <= 'e') ||
			(d[i * 2 + 1] >= 'a' && d[i * 2 + 1] <= 'e'));
        }
	return okay;
}

int main() {	
	string mon, dad;
	int babies;

	cin >> mon;
	cin >> dad;
	cin >> babies;

	for (int i = 0; i < babies; i++) {
		string baby;
		cin >> baby;
		bool p = true;

		p = possible_baby(mon, dad, baby);

		if(p == true)
		{
			cout << "Possible baby." << endl;
		}
		else
		{
			cout << "Not their baby!" << endl;
		}

	}

	return 0;
}