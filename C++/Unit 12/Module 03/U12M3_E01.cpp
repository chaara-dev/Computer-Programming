#include "..\..\common.h"

int main() {
    map<int, char> myName;
    myName[1] = 'T';
    myName[2] = 'y';
    myName[3] = 'l';
    myName[4] = 'e';
    myName[5] = 'r';

    cout << myName.at(3);
    return 0;
}