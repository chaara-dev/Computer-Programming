#include "..\..\common.h"
#define space << " " <<

int numbers[3] = {};

void getnumbers(string str) {
    stringstream ss;
    int i = 0;

    ss << str;

    string temp;
    int found;
    while (!ss.eof()) {
        ss >> temp;

        if (stringstream(temp) >> found) {
            numbers[i] = found;
        }

        i++;
    }
}


void distances(int pos) {
    switch (pos) {
        case 1:
            cout << "0 " << numbers[0] space 
                numbers[0] + numbers[1] space 
                numbers[0] + numbers[1] + numbers[2] space 
                numbers[0] + numbers[1] + numbers[2] + (numbers[3] - 1);
            break;
        case 2:
            cout << numbers[0] space "0" space
                numbers[1] space
                numbers[1] + numbers[2] space
                numbers[1] + numbers[2] + (numbers[3] - 1);
            break;
        case 3:
            cout << numbers[0] + numbers[1] space
                numbers[1] space "0" space
                numbers[2] space
                numbers[2] + (numbers[3] - 1);
            break;
        case 4:
            cout << numbers[0] + numbers[1] + numbers[2] space
                numbers[1] + numbers[2] space 
                numbers[2] space "0" space
                (numbers[3] - 1);
            break;
        case 5:
        cout << numbers[0] + numbers[1] + numbers[2] + numbers[3] - 1 space
            numbers[0] + numbers[1] + numbers[2] + 2 space
            numbers[0] + numbers[1] + 4 space
            (numbers[3] - 1) space "0";
            break;
        default:
            break;
    }
}


int main() {
    string input;

    cout << "Enter the distances between four cities, seperated by spaces: ";
    getline(cin, input);

    getnumbers(input);

    for (int i = 0; i < 6; i++) {
        distances(i);
        cout << endl;
    }

    return 0;
}