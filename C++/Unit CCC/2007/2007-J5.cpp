#include "..\..\common.h"

int minimum, maximum, extra_stops;
int _size = 13;
int ways = 0;
int motel[50] = {990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4970, 5030, 5990, 6010, 7000};

bool between(int a, int b, int c){
    return (a <= b && b <= c);
}

void findPath(int distance) {
    if (distance == 7000) {
        ways++;
    } else {
        for (int i = 0; i < _size; i++) {
            if (between(minimum, motel[i] - distance, maximum)) {
                findPath(motel[i]);
            }
        }
    }
}

int main(){
    cout << "Enter minimum distance: ";
    cin >> minimum;
    
    cout << "Enter maximum distance: ";
    cin >> maximum;

    cout << "Enter hotel amount: ";
    cin >> extra_stops;
    
    for (int i = 0; i < extra_stops; i++){
        cout << "Enter hotel distance: ";
        cin >> motel[i+_size];
    }

    _size = _size + extra_stops;
    findPath(0);
    cout << ways << endl;

    return 0;
}