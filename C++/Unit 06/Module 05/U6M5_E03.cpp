#include "..\..\common.h"

int count_sheep(int cows, int sheep, int donkeys) {
   if ((cows + donkeys) > sheep) {
    cout << "You have LESS sheep than cows and donkeys combined.";
   } else if ((cows + donkeys) < sheep) {
    cout << "You have MORE sheep than cows and donkeys combined.";
   } else if ((cows + donkeys) == sheep) {
    cout << "You have THE SAME amount of sheep as cows and donkeys combined.";
   }

   return 0;
}

int count_cows(int cows, int sheep, int donkeys) {
   if ((sheep + donkeys) > cows) {
    cout << "You have LESS cows than sheep and donkeys combined.";
   } else if ((sheep + donkeys) < cows) {
    cout << "You have MORE cows than sheep and donkeys combined.";
   } else if ((sheep + donkeys) == cows) {
    cout << "You have THE SAME amount of cows as sheep and donkeys combined.";
   }

   return 0;
}

int main() {
    count_sheep(10, 20, 15);
    cout << endl;
    count_cows(10, 20, 15);

    return 0;
}