#include "..\..\common.h"

class Fruits {
    public:
        int apples;
        int oranges;
        int bananas;
        void fruit_sum();

        Fruits(int apple_count, int orange_count, int banana_count);
};

Fruits::Fruits(int apple_count, int orange_count, int banana_count) {
    apples = apple_count;
    oranges = orange_count;
    bananas = banana_count;
}

void Fruits::fruit_sum() {
    int total = apples + bananas + oranges;
    cout << "The total amount of fruits is: " << total;
}


int main() {
    Fruits Basket(14, 9, 3);

    Basket.fruit_sum();

    return 0;
}