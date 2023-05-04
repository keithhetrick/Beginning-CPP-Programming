/*
 *
 * Relational Operators
 *
 */

#include <iostream>

using namespace std;

int main()
{
  int num1{}, num2{};

  cout << boolalpha;

  cout << "\nEnter two integers separated by a space: ";
  cin >> num1 >> num2;

  cout << endl;
  cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
  cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
  cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
  cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;
  cout << endl;

  int num3{};
  const int lower{10}, upper{20};

  cout << "\nEnter an integer that is greater than " << lower << " : ";
  cin >> num3;
  cout << num3 << " > " << lower << " is " << (num3 > lower) << endl;

  cout << "\nEnter an integer that is less than or equal to " << upper << " : ";
  cin >> num3;
  cout << num3 << " <= " << upper << " is " << (num3 <= upper) << endl;

  return 0;
}