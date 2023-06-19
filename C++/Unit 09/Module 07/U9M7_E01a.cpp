#include "..\..\common.h"

int pos_max(vector <int>sequence) {
    assert(sequence.size() > 0);
    int best = sequence[0];
    int pos = 0;
    int counter = 1;
    while (counter < sequence.size()) {
        if (best < sequence[counter]) {
            best = sequence[counter];
            pos = counter;
        }
        counter++;
    }
    return pos;
}

void test_pos_max() {
    // Test the correctness of pos_max
    vector <int>vect = {6, 1, 5, -2, 1};
    assert(pos_max(vect) == 0);
    vect.clear();
    vect.push_back(0);
    assert(pos_max(vect) == 0);
    return;
}

int main() {
    test_pos_max();
    return 0;
}