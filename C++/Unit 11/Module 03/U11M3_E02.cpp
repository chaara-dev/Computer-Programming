#include "..\..\common.h"

class Triangle {
    double leg1, leg2;
    public:
        double hypotenuse();
        Triangle(double new_leg1, double new_leg2);
        void set_leg1(double new_leg1);
        void set_leg2(double new_leg2);
        double get_leg1();
        double get_leg2();
        void print();
};

Triangle::Triangle(double new_leg1, double new_leg2) {
	leg1 = new_leg1;
	leg2 = new_leg2;
}
void Triangle::set_leg1(double new_leg1) {
	leg1 = new_leg1;
}

void Triangle::set_leg2(double new_leg2) {
	leg2 = new_leg2;
}

double Triangle::get_leg1() {
	return leg1;
}

double Triangle::get_leg2() {
	return leg2;
}

double Triangle::hypotenuse() {

	return pow((pow(leg1, 2) + pow(leg2, 2)), 0.5);
}

void Triangle::print() {
	cout << "I am a right triangle" << endl;
	cout << "My leg lengths are " << leg1 << "and " << leg2 << endl;
	cout << "Which makes my hypotenuse " << hypotenuse();
}



int main() {
	cout << "Enter the largest angle of your triangle: " << endl;
	double angle;
	double l1 = 0;
	double l2 = 0;
	cin >> angle;

	if (angle == 90) {
		cout << "Enter the length of the 2 legs of your triangle: " << endl;
		cin >> l1;
		cin >> l2;
	}

	else {
		cout << "That is not a right triangle" << endl;
	}

	Triangle righttriangle(l1, l2);
	righttriangle.set_leg1(5);
	righttriangle.set_leg2(5);

	righttriangle.print();

	return 0;
}
