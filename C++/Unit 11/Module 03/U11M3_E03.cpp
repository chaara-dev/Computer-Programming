#include "..\..\common.h"

class Apple {
	float indiv_weight;
    public:
        int num;
        string colour;
        void print();
        float convert_weight();
        float total_weight();
        Apple(int new_num, string new_colour, float new_indiv_weight);
        void set_indiv_weight(float new_indiv_weight);
        float get_indiv_weight();
};

Apple::Apple(int new_num, string new_colour, float new_indiv_weight) {
	num = new_num;
	colour = new_colour;
	indiv_weight = new_indiv_weight;
}

void Apple::print() {
	cout << "number of apples: " << num << endl;
	cout << "colour: "<< colour << endl;
	cout << "weight of each apple: " << indiv_weight << endl;
}


float Apple::convert_weight() {
	return indiv_weight / 1000;
}

float Apple::total_weight() {
	return indiv_weight * num;
}

void Apple::set_indiv_weight(float new_indiv_weight) {
	indiv_weight = new_indiv_weight;
}

float Apple::get_indiv_weight() {
	return indiv_weight;
}



int main() {
	Apple a(12, "green", 100);
	a.print();
	cout << a.convert_weight() << endl;
	cout << a.total_weight();

	a.set_indiv_weight(150);

	return 0;
}
