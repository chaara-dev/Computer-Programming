#include "..\..\common.h"

int super_digit(int num) {
    if (num < 10) {
        return num;
    } else {
        string string_num = to_string(num);
        vector<int> v(string_num.size());

        for (int i = 0; i < string_num.size(); i++) {
            v[i] = stoi(string_num.substr(i, 1));
        }

        int b = 0;
        for (int j = 0; j < string_num.size(); j++) {
            b += v[j];
        }

        return super_digit(b);
    }
}

int main() {
    cout << super_digit(233);
    
    return 0;
}