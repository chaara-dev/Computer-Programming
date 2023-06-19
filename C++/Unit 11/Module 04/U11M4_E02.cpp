#include "..\..\common.h"

struct Road {
    Road(string new_name, int new_length, int new_width, int new_lane_count) {
        name = new_name;
        length = new_length;
        width = new_width;
        lane_count = new_lane_count;
    };
    void convert(string type, string unit);
    void lane_width(int lanes);
    void output();

    private:
        string name;
        int length;
        int width;
        int lane_count;
};

void Road::convert(string type, string unit) {
    if (type[0] == tolower('w')) {
        if (unit[0] == tolower('k')) {
            cout << width / 1000 << endl;
        } else if (unit[0] == tolower('m')) {
            cout << width * 1000 << endl;
        }
    } else if (type[0] == tolower('l')) {
        if (unit[0] == tolower('k')) {
            cout << length / 1000 << endl;
        } else if (unit[0] == tolower('m')) {
            cout << length * 1000 << endl;
        }
    } else {
        cout << "Sorry, can't do that." << endl;
    }
}

void Road::lane_width(int lanes) {
    float lane_width = width / lanes;

    cout << fixed << setprecision(2) << lane_width;
}

void Road::output() {
    cout << "Name: " << name << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Lane Count: " << lane_count << endl;
}


int main() {
    Road idk("Eighth Street", 3, 40, 2);

    idk.convert("width", "kilometers");
    idk.lane_width(2);

    return 0;
}