#include "..\..\common.h"

struct Cube {
    Cube(int new_side_length);
    void calc_volume();
    void calc_surf_area();
    void output();

    private:
        int side_length;
};

Cube::Cube(int new_side_length) {
    side_length = new_side_length;
}

void Cube::calc_volume() {
    cout << pow(side_length, 3);
}

void Cube::calc_surf_area() {
    cout << 6 * (pow(side_length, 2));
}

void Cube::output() {
    cout << "This object is a: CUBE" << endl;
    cout << "Side length: " << side_length;
}


struct Cone {
    Cone(int new_height, int new_slant_height, int new_base_radius);
    void calc_volume();
    void calc_surf_area();
    void output();

    private:
        int height;
        int slant_height;
        int base_radius;
};

Cone::Cone(int new_height, int new_slant_height, int new_base_radius) {
    height = new_height;
    slant_height = new_slant_height;
    base_radius = new_base_radius;
}

void Cone::calc_volume() {
    cout << M_PI * pow(base_radius, 2) * (height / 3);
}

void Cone::calc_surf_area() {
    cout << M_PI * base_radius * (base_radius + sqrt(pow(height, 2) + pow(base_radius, 2)));
}

void Cone::output() {
    cout << "This object is a: CONE" << endl;
    cout << "Height: " << height << endl;
    cout << "Slant height: " << slant_height << endl;
    cout << "Base radius: " << base_radius;
}



int main() {
    pair <vector<int>, vector<int>> p1 ({12}, {8, 4, 7});

    Cube Box(p1.first[0]);
    Cone Hat(p1.second[0], p1.second[1], p1.second[2]);

    Box.output();
    cout << endl << endl;
    Hat.output();

    return 0;
}