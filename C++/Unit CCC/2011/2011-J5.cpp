#include "..\..\common.h"

int main()
{
    int numFriends;
    int numFriendships;
    cin >> numFriends;
    int friendNetwork[6] = {1, 1, 1, 1, 1, 1};
    for (int i = 0; i < numFriends; i++) {
        friendNetwork[i] = 1;
    }
    for (int i = 0; i < numFriends - 1; i++) {
        cin >> numFriendships;
        friendNetwork[numFriendships - 1] *= (friendNetwork[i] + 1);
    }
    cout << friendNetwork[numFriends - 1] << endl;
    return 0;
}