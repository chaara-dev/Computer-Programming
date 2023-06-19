#include "..\..\common.h"

int main() {
    int amt;
    string votes;
    map<char, int> vote_map = {{'A', 0}, {'B', 0}};

    cout << "Enter total number of votes: ";
    cin >> amt;

    cout << "Enter votes (A/B): ";
    cin >> votes;

    for (int i = 0; i < amt; i++) {
        if (votes[i] == 'A') {
            vote_map['A']++;
        } else if (votes[i] == 'B') {
            vote_map['B']++;
        }
    }

    if (vote_map['A'] > vote_map['B']) {
        cout << "A";
    } else if (vote_map['A'] < vote_map['B']) {
        cout << "B";
    } else {
        cout << "Tie";
    }

    return 0;
}