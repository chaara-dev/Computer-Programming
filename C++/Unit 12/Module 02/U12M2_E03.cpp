#include "..\..\common.h"

struct ClassMarks {
    ClassMarks(string new_class_name, string new_class_mark) {
        class_name = new_class_name;
        class_mark = new_class_mark;
    }
    string output(string choice = "both") {
        if (tolower(choice[0]) == 'n') {
            return class_name;
        } else if (tolower(choice[0]) == 'm') {
            return class_mark;
        } else {
            return (class_name + ", " + class_mark);
        }
    }
    private:
        string class_name;
        string class_mark;
};

int main() {
    ClassMarks a_block("History", "B+");
    ClassMarks b_block("Gym", "A");
    ClassMarks c_block("Chemistry", "B-");

    vector <ClassMarks>vect = {a_block, b_block, c_block};

    cout << vect[2].output("name");

    return 0;
}