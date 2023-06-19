#include "..\..\common.h"

class Sphere {
    int radius;

    public:
        void calc_volume();
        void calc_surf_area();
        void output();
        Sphere(int new_radius) {
            radius = new_radius;
        };
};

void Sphere::calc_volume() {
    cout << (4/3) * M_PI * pow(radius, 2);
}

void Sphere::calc_surf_area() {
    cout << 4 * M_PI * pow(radius, 2);
}

void Sphere:: output() {
    cout << "This object is a: SPHERE" << endl;
    cout << "Radius: " << radius;
    cout << endl << endl;
}


class Cylinder {
    int height;
    int base_radius;

    public:
        void calc_volume();
        void calc_surf_area();
        void output();
        Cylinder(int new_height, int new_base_radius) {
            height = new_height;
            base_radius = new_base_radius;
        };
};

void Cylinder::calc_volume() {
    cout << M_PI * pow(base_radius, 2) * height;
}

void Cylinder::calc_surf_area() {
    cout << 2 * M_PI * base_radius * height + 2 * M_PI * pow(base_radius, 2);
}

void Cylinder::output() {
    cout << "This object is a: CYLINDER" << endl;
    cout << "Radius: " << base_radius << endl;
    cout << "Height: " << height;
    cout << endl << endl;
}


int main() {
    enum Radius {
        radius_a,
        radius_b = 5,
        radius_c
    };


    Sphere orb(radius_b);
    Cylinder tube(4, radius_c);

    orb.output();
    cout << endl << "-----" << endl;
    tube.output();

    return 0;
}