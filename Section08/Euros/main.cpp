// Section 8: Euro Conversion
// Goal: Convert US Dollars to Euros
// Input: US Dollars
// Output: Euros

#include <iostream>

using namespace std;

int main()
{

  const double usd_per_eur{0.9}; // as of May 3, 2023

  cout << "Welcome to the EUR to USD converter" << endl;
  cout << "Enter the value in Euros: ";

  double euros{0.0};
  double dollars{0.0};

  cin >> euros;
  dollars = euros * usd_per_eur;

  cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;

  cout << endl;
  return 0;
}