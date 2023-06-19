#include "..\..\common.h"

vector <vector <int> >combine_vectors() {
    vector <int>v1 = {1, 1, 1};
    vector <int>v2 = {2, 2, 2};
    vector <int>v3 = {3, 3, 3};

    vector <vector <int> >output = {v1, v2, v3};

    return output;
}

void test_combine_vectors() {
    assert(combine_vectors);
}


int main() {
    test_combine_vectors();

    return 0;
}