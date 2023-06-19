#include "..\common.h"

int i = 0;
int total = 0;
vector<int> arr = {1, 2, 3, 4, 5};

void product(vector<int> array) {
    switch (i) {
        case 0:
            total += array[0];
            break;
        case 1:
            total += array[1];
            break;
        case 2:
            total += array[2];
            break;
        case 3:
            total += array[3];
            break;
        case 4:
            total += array[4];
            break;
        case 5:
            total += array[5];
            break;
        default:
            break;
    }

    i++;

    if (i == 5) {
        return;
    } else {
        product(arr);
    }
}

int main() {
    product(arr);

    cout << total;

    return 0;
}