#include "..\..\common.h"

vector <vector <char> > combine_vectors(vector <char> v1, vector <char> v2, vector <char> v3, vector <char> v4, vector <char> v5) {
	vector <vector <char> > v_final;
	for (int i = 0; i < 5; i++) {
		switch (i) {
            case 0:
                v_final.insert(v_final.begin() + i, v1);
                break;
            case 1:
                v_final.insert(v_final.begin() + i, v2);
                break;
            case 2:
                v_final.insert(v_final.begin() + i, v3);
                break;
            case 3:
                v_final.insert(v_final.begin() + i, v4);
                break;
            case 4:
                v_final.insert(v_final.begin() + i, v5);
                break;
            default:
                break;
		}
	}

	return v_final;
}


char vector_min(vector <char> v) {
	if (v.size() == 1) {
		return v[0];
	} else {
		char last = v[v.size() - 1];
		v.pop_back();
		return min(last, vector_min(v));
	}
}

char vector_max(vector <char> v) {
	if (v.size() == 1) {
		return v[0];
	} else {
		char last = v[v.size() - 1];
		v.pop_back();
		return max(last, vector_max(v));
	}
}


int main() {
    vector <char> a1 = {'j', 'z', 'm', 'h'};
	vector <char> a2 = {'x', 'f', 'e', 'p'};
	vector <char> a3 = {'n', 'm', 'l', 'p'};
	vector <char> a4 = {'v', 'l', 'r', 's'};
	vector <char> a5 = {'p', 't', 'o', 'w'};

	vector <vector <char> > a = combine_vectors(a1, a2, a3, a4, a5);

	string word = "";
	for (int i = 0; i < a.size(); i++) {
		word += vector_min(a[i]);
	}

	word += ", ";

    vector <char> b1 = {'w', 'c', 'h', 'i'};
	vector <char> b2 = {'g' ,'k', 'o', 'e'};
	vector <char> b3 = {'q', 'm', 'i', 'r'};
	vector <char> b4 = {'g', 'l', 'f', 'j'};
	vector <char> b5 = {'d', 'c', 'a', 'b'};

	vector <vector <char> > b = combine_vectors(b1, b2, b3, b4, b5);

	for (int j = 0; j < b.size(); j++) {
		word += vector_max(b[j]);
	}
	
	cout << word;
	return 0;
}