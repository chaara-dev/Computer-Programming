#include "..\..\common.h"

int main() {
    string input;

    cout << "Enter phrase> "; cin >> input;

    string shorts[12] = {"CU", ":-)", ":-(", ";-)", ":-P", "(~.~)", "TA", "CCC", "CUZ", "TY", "YW", "TTYL"};
    string longs[12] = {"see you", "I'm happy", "I'm unhappy", "wink", "stick out my tongue", "sleepy", "totally awesome", "Canadian Computing Competition", "because", "thank-you", "you're welcome", "talk to you later"};


    int pos = 0;
    bool found = false;
    while (pos < 12) {
        if (shorts[pos] == input) {
            found = true;
            break;
        }
        pos++;
    }

    if (!found) {
        cout << input;
    } else {
        cout << longs[pos];
    }

    
    return 0;
}