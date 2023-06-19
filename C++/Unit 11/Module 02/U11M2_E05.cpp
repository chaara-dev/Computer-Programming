#include "..\..\common.h"

class Prism {
    public: 
        float width, height, length;
        float volume();
        Prism(float new_width, float new_height, float new_length);
};

Prism::Prism(float new_width, float new_height, float new_length) {
	width = new_width;
	height = new_height;
	length = new_length;
}

float Prism::volume() {
	return width * height * length;
}


int main() {
	Prism cube(5.0, 5.0, 5.0);
	cout << cube.height << endl;
	cout << cube.volume();

	return 0;
}