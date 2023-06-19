#include "..\..\common.h"

int main() {
    string user_input;

    cout << "Enter your name here: "; cin >> user_input;

    while (user_input != "becky" && user_input != "Becky") {
        cout << "Who are you again? "; cin >> user_input;
    }

    cout << "Oh, hi Becky!";

    return 0;
}