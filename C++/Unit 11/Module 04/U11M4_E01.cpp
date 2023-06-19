#include "..\..\common.h"

struct Court {
    Court(string new_type, int new_length, int new_width);
    void area();
    void permimeter();
    void convert(string choice);
    void output();

    private:
        string type;
        int length;
        int width;
};

Court::Court(string new_type, int new_length, int new_width) {
    type = new_type;
    length = new_length;
    width = new_width;
}

void Court::area() {
    cout << length * width << endl;
}

void Court::permimeter() {
    cout << 2 * (length + width) << endl;
}

void Court::convert(string choice) {
    if (choice[0] == tolower('l')) {
        cout << length * 3.281 << endl;   
    } else if (choice[0] == tolower('w')) {
        cout << width * 3.281 << endl;
    }
}

void Court::output() {
    cout << "Type: " << type << endl;
    cout << "Length: " << length << " meters" << endl;
    cout << "Width: " << width << " meters" << endl;
}

int main() {
    Court Tennis("Tennis", 29, 15);

    Tennis.output();
    Tennis.area();
    Tennis.permimeter();
    Tennis.convert("length");

    return 0;
}