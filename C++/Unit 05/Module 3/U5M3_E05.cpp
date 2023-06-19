#include "..\..\common.h"

int main() {
    string word = "Tacos";
    int ascii_t = static_cast<int> (word[0]);
    int ascii_a = static_cast<int> (word[1]);
    int ascii_c = static_cast<int> (word[2]);
    int ascii_o = static_cast<int> (word[3]);
    int ascii_s = static_cast<int> (word[4]);
    int nums [] = {103, 114, 97, 99, 105, 97, 115};

    // cout << ascii_t << ascii_a << ascii_c << ascii_o << ascii_s << endl;

    cout << static_cast<char> (nums[0]) << static_cast<char> (nums[1]); 
    cout << static_cast<char> (nums[2]) << static_cast<char> (nums[3]);
    cout << static_cast<char> (nums[4]) << static_cast<char> (nums[5]);
    cout << static_cast<char> (nums[6]); // gracias

    return 0;
}