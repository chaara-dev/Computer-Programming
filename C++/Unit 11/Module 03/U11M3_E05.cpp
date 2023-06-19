#include "..\..\common.h"

class Person {
	string eye_colour, hair_colour;
    public: 
        string name, sex;
        int yob;
        double height, weight; // height(cm) & weight(kg)

        int age(int current_year);
        double converter(string choice);
        void print();

        void set_eye_colour(string new_colour);
        void set_hair_colour(string new_colour);
        string get_eye_colour();
        string get_hair_colour();

        Person(string new_name, string new_sex, int new_yob, float new_height,
            float new_weight, string new_ecolour, string new_hcolour);
};

// Creates a new Person object 
Person::Person(string new_name, string new_sex, int new_yob, float new_height,
		float new_weight, string new_ecolour, string new_hcolour) {

	name = new_name;
	sex = new_sex;
	yob = new_yob;
	height = new_height;
	weight = new_weight;
	eye_colour = new_ecolour;
	hair_colour = new_hcolour;
}

// Prints out object
void Person::print() {
	cout << name << endl;
	cout << "sex: " << sex << endl;
	cout << "YOB:  " << yob << endl;
	cout << "height: " << height << endl;
	cout << "weight: " << weight << endl;
	cout << "eye colour: " << eye_colour << endl;
	cout << "hair colour: " << hair_colour << endl;
}

/* Calculates current age based on birth year
   and current year
	Paramters: current_year the current year
	Returns: current age
*/
int Person::age(int current_year) {
	return current_year - yob;
}

/*  Converts height into ft or weight into lbs
    Paramters: choice chosen property
    Returns: converted value (int ft or lbs)
*/
double Person::converter(string choice) {
	double ans;

	switch (choice[0]) {
	case 'H':
	case 'h':
		ans = (height * 0.394) / 12.0;
		break;

	case 'W':
	case 'w':
		ans = weight * 2.204;
		break;

	default:
		ans = 0;
		break;
	}

	return ans;
}

void Person::set_eye_colour(string new_colour) {
	eye_colour = new_colour;
}

void Person::set_hair_colour(string new_colour) {
	hair_colour = new_colour;
}

string Person::get_eye_colour() {
	return eye_colour;
}

string Person::get_hair_colour() {
	return hair_colour;
}



int main() {
	Person p("Bob", "M", 1962, 170, 67, "Blue", "Blonde");
	p.print();
	cout << p.age(2017) << endl;
	cout << p.converter("height") << endl;

	p.set_eye_colour("brown");
	p.set_hair_colour("brown");

	return 0;
}