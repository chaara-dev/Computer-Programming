#include "..\common.h"

int main() {
    float weight;
    float angle;
    float str_len;

    cout << "Weight (grams): "; cin >> weight;
    cout << "Angle (degrees): "; cin >> angle;
    cout << "String Length (cm): "; cin >> str_len;

    weight = weight / 1000;
    str_len = str_len / 100;
    
    float angle_rad = angle * M_PI / 180.0;
    float period = (2 * M_PI * sqrt(str_len / 9.81)) / sqrt(1 - pow(sin(angle_rad), 2));
    float grav_accel = 4 * pow(M_PI, 2) * str_len / pow(period, 2);

    cout << fixed << setprecision(4) << grav_accel << " m/s^2";

    return 0;
}