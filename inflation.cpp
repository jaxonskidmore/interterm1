#include <iostream>
#include <string>
using namespace std;

int main() {
  double itemCost;
  cout << "Enter the cost of the item: " << endl;
  cin >> itemCost;
  int purchaseDate;
  cout << "Enter the number of years the item will be purchased from now: ";
  cin >> purchaseDate;
  double inflatRate;
  cout << "enter the inflation rate : ";
  cin >> inflatRate;
  inflatRate /= 100;

// asks the user for the item cost, when it will be purchased and the inflation rate
  int i;
  for(i = 0; i < purchaseDate; i++){
    itemCost += (itemCost*inflatRate);

  }
//for loop takes the purchase date for every year added and calculates the increasing inflation rate

  cout << itemCost << endl;
  return 0;
}
