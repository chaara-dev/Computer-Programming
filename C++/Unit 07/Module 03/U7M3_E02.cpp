#include "..\..\common.h"

int one_to_ten() {
    static int num = 0;
    num++;

    cout << num << endl;

    return 0;
}


int main() {
    one_to_ten();
    one_to_ten();
    one_to_ten();
    one_to_ten();
    one_to_ten();
    one_to_ten();
    one_to_ten();
    one_to_ten();
    one_to_ten();
    one_to_ten();
    
    return 0;
}