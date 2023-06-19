#include "..\..\common.h"

double apple_profit(int apple_trees) {
  int total_apples = apple_trees * 480;
  double total_weight = total_apples * 0.151;
  double total_price = total_weight * 3.80;

  return total_price;
}

int main() {
  int apple_trees;
  cout << "Enter the number of apple trees: "; cin >> apple_trees;
  cout << "The total profit from " << apple_trees << " apple trees is $" << apple_profit(apple_trees) << endl;
  return 0;
}