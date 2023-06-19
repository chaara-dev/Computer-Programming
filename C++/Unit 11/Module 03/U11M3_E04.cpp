#include "..\..\common.h"

class Farm {
	int horses;
    public:
        int chickens, pigs, cows;

        void print();
        int total_legs();
        void set_horses(int new_horses);
        int get_horses();
        Farm(int new_chickens, int new_pigs, int new_cows, int new_horses);
};

Farm::Farm(int new_chickens, int new_pigs, int new_cows, int new_horses) {
	chickens = new_chickens;
	pigs = new_pigs;
	cows = new_cows;
	horses = new_horses;
}

void Farm::print() {
	cout << "number of chickens: " << chickens << endl;
	cout << "number of pigs: " << pigs << endl;
	cout << "number of cows: " << cows << endl;
	cout << "number of horses: " << horses << endl;
}

int Farm::total_legs() {
	int ch_leg = chickens * 2;

	return ((pigs + cows + horses) * 4) + ch_leg;
}

void Farm::set_horses(int new_horses) {
	horses = new_horses;
}

int Farm::get_horses() {
	return horses;
}



int main() {
	Farm f(4, 2, 5, 1);
	f.print();
	cout << f.total_legs() << endl;
	cout << f.get_horses();

	return 0;
}