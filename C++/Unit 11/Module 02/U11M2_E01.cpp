#include "..\..\common.h"

class Date {
    public:
        int month;
        int day;
        int year;
        void output();

        Date(int new_month, int new_day, int new_year);
};

Date::Date(int new_month, int new_day, int new_year) {
    if (new_month <= 0 && new_month > 12) {
        cout << "Invalid.";
    } else {
        month = new_month;
    }

    if (new_day <= 0 && new_day > 31) {
        cout << "Invalid.";
    } else {
        day = new_day;
    }

    if (new_year >= 0) {
        year = new_year;
    }
}


void Date::output() {
    cout << "Day: " << day << endl;
    cout << "Month: " << month << endl;
    cout << "Year: " << year;
}

int main() {
    int input1, input2, input3;

    cout << "Enter day: "; cin >> input1;
    cout << "Enter month: "; cin >> input2;
    cout << "Enter year: "; cin >> input3;
    cout << endl << endl;

    Date Birthday(input1, input2, input3);

    Birthday.output();
    
    return 0;
}