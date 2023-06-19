#include "..\..\common.h"

bool password_check(string password) {
    bool checked = false;
    for (int i = 0; i < password.length(); i++) {
        if (int(password[i]) > 32 || int(password[i]) < 127) {
            checked = true;
        } else {
            checked = false;
            break;
        }
    }
    if (password.length() > 30 || password.length() < 8) {
        checked = false;
    }

    if (checked == true) {
        return true;
    } else {
        return false;
    }
}


int main() {
    string input;

    cout << "Enter a password: "; cin >> input;

    if (password_check(input) == true) {
        cout << "SAFE password.";
    } else {
        cout << "UNSAFE password.";
    }

    return 0;
}