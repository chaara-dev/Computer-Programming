#include "..\common.h"

struct Cube {
    Cube(int new_side_length) {
        side_length = new_side_length;
    }
    void calc_volume() {
        cout << pow(side_length, 3);
    }
    void calc_surf_area() {
        cout << 6 * (pow(side_length, 2));
    }
    void output() {
        cout << "This object is a: CUBE" << endl;
        cout << "Side length: " << side_length;
    }

    private:
        int side_length;
};

int main() {
    Cube Box(12);

    Box.output();

    return 0;
}