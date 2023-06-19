#include "..\..\common.h"

/**
  An object of this class contains the number of
  rooms in a bldg, and the number of chairs, windows, 
  doors in each room
*/
class SchoolBldg {
    public:
        int rooms, chairs, windows, doors;
        void print();
	    SchoolBldg(int new_rooms, int new_chairs, int new_windows, int new_doors);
};

// Creates a new SchoolBldg object 
SchoolBldg::SchoolBldg(int new_rooms, int new_chairs, int new_windows, int new_doors) {
   rooms = new_rooms;
   chairs = new_chairs;
   windows = new_windows;
   doors = new_doors;
}

void SchoolBldg::print() {
	cout << "# of rooms: " << rooms << endl;
	cout << "# of chairs in each room: " << chairs << endl;
	cout << "# of windows in each room: " << windows << endl;
	cout << "# of windows in each room: " << doors << endl;
	
}

vector <int>total(SchoolBldg sb) {
	int a[] = {sb.rooms * sb.chairs, sb.rooms * sb.windows, sb.rooms * sb.doors};
	vector<int> b(a, a + 4); 
	return b;
}


int main() {
	SchoolBldg s(6, 20, 2, 2);
	s.print();

	return 0;
}