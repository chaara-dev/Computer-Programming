#include "..\..\common.h"

int main() {
    int antennae, eyes;

    cout << "How many antennas? ";
    cin >> antennae;
    cout << "How many eyes? ";
    cin >> eyes;

    if (antennae <= 2) {
        if (eyes <= 3) {
            cout << "VladSaturnian" << endl;
            cout << "GrameMercurian";
        } else {
            return 0;
        }
    } else if (antennae >= 3 && antennae <= 6) {
        if (eyes <= 4){
            cout << "TroyMartian";
        } else if (eyes >= 2) {
            cout << "VladSaturnian";
        }
    } else {
        return 0;
    }
}