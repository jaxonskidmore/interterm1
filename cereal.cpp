#include <iostream>
#include <string>
using namespace std;

int main (){

  float metricTonOunces;

  metricTonOunces = 35273.92;

  float boxOfCereal;

	cout << "Enter the weight of a box of cereal (in ounces): ";

	cin >> boxOfCereal;

	cout << "You have " << (boxOfCereal / metricTonOunces) << " metric tons of cereal." << endl;

  // converts it

	cout << "You would need " << (metricTonOunces / boxOfCereal) << " boxes to make 1 metric ton." << endl;

  //converts it for one box


}
