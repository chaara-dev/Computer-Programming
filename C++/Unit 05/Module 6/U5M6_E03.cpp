#include "..\..\common.h"
// There's gotta be an easier way than what I did.
// In my defense however, I did this file at 12:30 AM.

bool is_rainbow(string color) {
    string newcolors;
    int i = 0;

    while (i < color.length()) {
        newcolors.append(1, tolower(static_cast<char> (color[i])));
        i++;
    };

    return (
        newcolors == "red" ||
        newcolors == "orange" ||
        newcolors == "yellow" ||
        newcolors == "green" ||
        newcolors == "blue" ||
        newcolors == "indigo" ||
        newcolors == "violet"
    );
}

bool not_rainbow(string color) {
    return !is_rainbow(color);
}

int main() {
    cout << is_rainbow("greEn") << endl;
    cout << not_rainbow("GREen");
}