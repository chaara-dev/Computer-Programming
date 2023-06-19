#include "..\..\common.h"


int main() {   
    int n, m, counter = 0;
    cin >> m;
    cin >> n;

    for (int i = 1; i <= m; i ++) {
        for (int j = 1; j <= n; j ++) {
            if (i + j == 10) {
                counter ++;
            }
        }
    }

    if (counter == 1) {
        cout << "There is 1 way to get the sum 10." << endl;
    } else {
        cout << "There are " << counter << " ways to get the sum 10." << endl;
    }

    return 0;
}