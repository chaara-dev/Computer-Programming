#include <iostream>

using namespace std;

int calculatePower(int num, int pow) {
    int current = num;
    for (int i = 0; i < (pow - 1); i++) {
        current *= num;
    }
    return current;
}

int main() {
    int altitude, humidity, margaret_wait;
    bool found = false;
    int hour = 0;

    cout << "Enter humidity: "; cin >>humidity;
    cout << "Enter max time margaret will wait: "; cin >> margaret_wait;

    for (int time = 1; time <= margaret_wait; time++) {
        altitude = (-6 * calculatePower(time, 4)) + (humidity * calculatePower(time, 3)) + (2 * calculatePower(time, 2)) + time;
        if (altitude <= 0) {
            found = true;
            hour = time;
            break;
        }
    }

    if (found) {
        cout << "The balloon first touches the ground at hour: " << hour << endl;
    } else {
        cout << "The balloon does not touch the ground in the given time." << endl;
    }

    return 0;
}