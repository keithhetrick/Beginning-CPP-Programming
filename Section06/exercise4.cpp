/**************************************************
 *
 * Coding Exercise #4
 *
 * In this exercise you will write code that creates a profile for a new employee at a company.
 *
 * You must declare a total of THREE variables, each of a different type, to represent the employee's name, age, and hourly_wage.
 *
 * You must initialize the hourly_wage to 23.50. Allow the employee to enter their name and age in that order separated by a single space.
 *
 **************************************************/

#include <iostream>
#include <string>
using namespace std;

void employee_profile()
{

  //----WRITE YOUR CODE BELOW THIS LINE----
  int age;
  double hourly_wage = 23.50;
  string name;

  cin >> name >> age;

  //----WRITE YOUR CODE ABOVE THIS LINE----
  //----DO NOT MODIFY THE CODE BELOW THIS LINE----

  cout << name << " " << age << " " << hourly_wage;
}

int main()
{
  employee_profile();

  return 0;
}