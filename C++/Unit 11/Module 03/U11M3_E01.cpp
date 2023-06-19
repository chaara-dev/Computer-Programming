#include "..\..\common.h"

class Time{
    public:
        int hour, minute;
        bool morning();
        bool afternoon();
        void print();
        Time(int new_hour, int new_minute);
};

Time::Time(int new_hour, int new_minute) {
	hour = new_hour;
	minute = new_minute;
}

bool Time::morning() {
	if (hour < 12) {
		return true;
	}
	else {
		return false;
	}
}

bool Time::afternoon() {
	if (hour < 18) {
		return true;
	}
	else {
		return false;
	}
}

void Time::print() {
	cout << "The time is currently " << hour << ":" << minute;
}


int main() {
	int h, m;
	cin >> h;
	cin >> m;

	Time now(h, m);
	now.print();

	if (now.morning()) {
		cout << "\nGood morning";
	}

	else if (now.afternoon()) {
		cout << "\nGood afternoon";
	}

	else {
		cout << "\nGood evening";
	}

	return 0;
}