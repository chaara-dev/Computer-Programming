#include "..\..\common.h"

void reverse_str(string s) {
	if (s.length() <= 1) {
		cout << s << endl;
	} else {
		cout << s[s.length() - 1];
		reverse_str(s.substr(0, s.length() - 1));
	}
}

int main() {
    string s;

    cout << " Please enter a string " << endl; getline(cin, s);
    
    reverse_str(s);
    return 0;    
}