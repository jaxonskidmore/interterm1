#include <iostream>
#include <string>
using namespace std;

int main() {
  float wageRate;
  wageRate = 16.00;
  float overTime;
  overTime = wageRate * 1.5;
//calculates if the overtime happens
  double hrsWorked;
  cout << "Enter how many hours your worked: " << endl;
  cin >> hrsWorked;
//takes user input hrs wrked
  float revenue;
  float socSecTax;
  float fedIncTax;
  float stateIncTax;
  float medicalInsurance;
  float grossPay;
// sets up the variables
  revenue = hrsWorked * wageRate;
  socSecTax = revenue * .06;
  fedIncTax = revenue * .14;
  stateIncTax = revenue * .05;
  medicalInsurance = 10;
//calculates the taxes for each
  grossPay = revenue - socSecTax - fedIncTax - stateIncTax - medicalInsurance;
//calculates the gross pay
  cout << "Your gross pay is: " << grossPay << endl;

}
