#include "..\..\common.h"

int function() {
    int a, b;
    cin >> a >> b;

    string equals = (a == b) ? "Equal" : "Not equal";

    cout << equals;
    
    return 0;
}

int main() {
    function();

    return 0;
}