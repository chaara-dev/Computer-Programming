#include "..\..\common.h"

int main() {
    pair <vector<int>, string> p1 ({1}, "Booyah,");
    pair <vector<int>, string> p2 ({5}, "Bitch");

    swap(p1, p2);

    cout << p1.first[0] << endl << p2.first[0];

    return 0;
}