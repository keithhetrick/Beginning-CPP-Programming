/**************************************************
 *
 * Coding Exercise - Exercise 3
 *
 * In this exercise, you will write code to allow a user to enter their date of birth.
 *
 * Assume that the user will enter their date of birth in the order of month, day, year, with each value being separated by a blank space.
 *
 * You do not need to prompt the user for any information.
 *
 **************************************************/

#include <iostream>
using namespace std;

void date_of_birth()
{
  int m{};
  int d{};
  int y{};
  //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
  //---- WRITE YOUR CODE BELOW THIS LINE----

  std::cin >> m >> d >> y;

  //---- WRITE YOUR CODE ABOVE THIS LINE----
  //---- Do NOT MODIFY THE CODE BELOW THIS LINE----
  cout << m << " " << d << " " << y;
}

int main()
{
  date_of_birth();
  return 0;
}
