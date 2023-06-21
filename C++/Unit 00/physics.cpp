#include <iostream>
#include <cmath>
#include <string>
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif
using namespace std;

float weights[3] = {};
float angles[3] = {};
float lengths[3] = {};
float periods[3] = {};
float outputs[3] = {};


void inputs(int count) {
    cout << "Enter [Weight] (grams), [Angle] (degrees), [Length] (centimeters) and [Period] (seconds):" << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;

    
    // Inputs for run 1
    cout << "Run 1:" << endl;
    cout << "   Weight: "; cin >> weights[0];
    cout << "   Angle: "; cin >> angles[0];
    cout << "   Length: "; cin >> lengths[0];
    cout << "   Period: "; cin >> periods[0];

    if (count == 1) {
        return;
    }
    cout << endl;

    // Inputs for run 2
    cout << "Run 2:" << endl;
    cout << "   Weight: "; cin >> weights[1];
    cout << "   Angle: "; cin >> angles[1];
    cout << "   Length: "; cin >> lengths[1];
    cout << "   Period: "; cin >> periods[1];

    if (count == 2) {
        return;
    }

    cout << endl;

    // Inputs for run 3
    cout << "Run 3:" << endl;
    cout << "   Weight: "; cin >> weights[2];
    cout << "   Angle: "; cin >> angles[2];
    cout << "   Length: "; cin >> lengths[2];
    cout << "   Period: "; cin >> periods[2];

    return;
}


void adjust() {
    // Adjusting input units for formulas
    for (int i = 0; i < 3; i++) {
        weights[i] = weights[i] / 1000;
        lengths[i] = lengths[i] / 100;
    }
}


void results(int count) {
    cout << endl << "RESULTS:" << endl;
    cout << "--------" << endl;
    
    // Output for run 1
    cout << "Run 1: " << outputs[0] << " m/s^2" << endl;
    cout << "(" << weights[0] << " kilograms, " << angles[0] << " degrees, " <<  lengths[0] << " meters, " << periods[0] << " seconds)" << endl << endl;

    if (count == 1) {
        return;
    }

    // Output for run 2
    cout << "Run 2: " << outputs[1] << " m/s^2" << endl;
    cout << "(" << weights[1] << " kilograms, " << angles[1] << " degrees, " <<  lengths[1] << " meters, " << periods[1] << " seconds)" << endl << endl;

    if (count == 2) {
        return;
    }
    
    // Output for run 3
    cout << "Run 3: " << outputs[2] << " m/s^2" << endl;
    cout << "(" << weights[2] << " kilograms, " << angles[2] << " degrees, " <<  lengths[2] << " meters, " << periods[2] << " seconds)" << endl << endl;

    return;
}


void find(int j) {
    // Formulas
    float angle_rad = angles[j] * M_PI / 180.0;
    float grav_accel = 4 * pow(M_PI, 2) * lengths[j] / pow(periods[j], 2);

    outputs[j] = grav_accel;

    return;
}


int main() {
    string confirm;
    int run_count;

    cout << "Enter amount of runs (1-3): "; cin >> run_count;
    cout << endl;

    inputs(run_count);
    adjust();

    for (int i = 0; i < 3; i++) {
        find(i);
    }

    results(run_count);

    cout << "Input anything to exit... "; cin >> confirm;

    return 0;
}