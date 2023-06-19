#include "..\..\common.h"

class School_Day {
    public:
        string a_block;
        string b_block;
        string c_block;
        string d_block;
        void output();
        
        School_Day(string a_block__, string b_block__, string c_block__, string d_block__);
};

School_Day::School_Day(string a_block__, string b_block__, string c_block__, string d_block__) {
    a_block = a_block__;
    b_block = b_block__;
    c_block = c_block__;
    d_block = d_block__;
}

void School_Day::output() {
    cout << "A: " << a_block << endl;
    cout << "B: " << b_block << endl;
    cout << "C: " << c_block << endl;
    cout << "D: " << d_block;
}


int main() {
    School_Day Adam("Math", "Chemistry", "English", "Gym");

    Adam.output();

    return 0;
}