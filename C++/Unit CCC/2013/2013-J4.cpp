#include "..\..\common.h"

int main() {
    int total_time, chore_amt, input;
    int count = 1;
    vector<int> chores_times = {};

    cout << "Enter time to do chores: ";
    cin >> total_time;

    cout << "Enter chore amount: ";
    cin >> chore_amt;

    for (int i = 0; i < chore_amt; i++) {
        cout << "Enter time to do chore #" << i + 1 << ": ";
        cin >> input;
        chores_times.push_back(input);
    }

    sort(chores_times.begin(), chores_times.end());

    for (int i = 0; i < chores_times.size(); i++) {
        if (total_time - chores_times[i] <= 0) {
            break;
        } else if (total_time - chores_times[i] > 0) {
            total_time = total_time - chores_times[i];
            count++;
        }
    }

    cout << "You can do " << count << " chores in the given time.";

    return 0;
}