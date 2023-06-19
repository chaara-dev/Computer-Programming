#include "..\..\common.h"

int main() {
    int weights[3] = {};

    int i = 0;
    while (i < 3) {
        cout << "Enter " << i + 1 << "# weight: ";
        cin >> weights[i];
        i++;
    }

    sort(weights, weights + 3);
    
    cout << weights[1];
    return 0;
}