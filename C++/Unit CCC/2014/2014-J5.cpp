#include "..\..\common.h"

vector<string> names1_vect, names2_vect;
string input1, input2;
int person_count;

void string_split(string str, vector<string>& vect) {
    string word = "";
    for (auto x : str) {
        if (x == ' ') {
            vect.push_back(word);
            word = "";
        } else {
            word = word + x;
        }
    }
    
    if (!word.empty()) {
        vect.push_back(word);
    }
}


void compare_vects() {
    auto it = find(names2_vect.begin(), names2_vect.end(), names1_vect[0]);
    vector<string> names2_vect_new;
    int index = it - names2_vect.begin();

    for (int i = 0; i < names2_vect.size(); i++) {
        if (names2_vect[i] == names1_vect[i]) {
            cout << "bad";
            return;
        }
    }
    if (names1_vect.size() != names2_vect.size()) {
        cout << "bad";
        return;
    }


    for (int i = index; i != -10; i--) {
        if (i == -1) {
            i = names2_vect.size() - 1;
        } if (i == index + 1) {
            names2_vect_new.push_back(names2_vect[i]);
            break;
        }

        names2_vect_new.push_back(names2_vect[i]);
    }

    if (names1_vect == names2_vect_new) {
        cout << "good";
    } else {
        cout << "bad";
    }
}


int main() {
    cout << "Enter the amount of people: ";
    cin >> person_count;
    cin.ignore();
    
    cout << "Enter first list of names (Seperated by spaces): ";
    getline(cin, input1);
    cout << "Enter second list of names (Seperated by spaces): ";
    getline(cin, input2);

    string_split(input1, names1_vect);
    string_split(input2, names2_vect);

    compare_vects();

    return 0;
}