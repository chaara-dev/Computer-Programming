#include "..\..\common.h"

int main() {
    int friends_num, removal_round_count;
    cout << "Enter the number of friends: ";
    cin >> friends_num;
    cout << "Enter the number of removal rounds: ";
    cin >> removal_round_count;

    vector<int> lost_friends(friends_num);
    for (int i = 0; i < friends_num; ++i) {
        lost_friends[i] = i + 1;
    }

    vector<int> positions_to_remove(removal_round_count);
    for (int i = 0; i < removal_round_count; ++i) {
        cout << "Enter the position to remove in round " << (i + 1) << ": ";
        cin >> positions_to_remove[i];
    }

    for (const auto& round : positions_to_remove) {
        vector<int> remaining_friends;
        for (int i = 0; i < lost_friends.size(); ++i) {
            if ((i + 1) % round != 0) {
                remaining_friends.push_back(lost_friends[i]);
            }
        }
        lost_friends = remaining_friends;
    }

    cout << "Remaining friends: ";
    for (const auto& friend_number : lost_friends) {
        cout << friend_number << " ";
    }
    cout << endl;

    return 0;
}