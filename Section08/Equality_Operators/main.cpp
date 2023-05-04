#include <iostream>

using namespace std;

int main()
{

  bool equal_result{false};
  bool not_equal_result{false};

  cout << boolalpha; // will display true/false instead of 1/0 for booleans

  /*
   *
   *  Integers
   *
   */
  int num{}, num2{};

  cout << "Enter two integers separated by a space: ";
  cin >> num >> num2;
  equal_result = (num == num2);
  not_equal_result = (num != num2);

  cout << "Comparison result (equals): " << equal_result << endl;
  cout << "Comparison result (not equals): " << not_equal_result << endl;

  /*
   *
   *  Characters
   *
   */
  char char1{}, char2{};

  cout << "Enter two characters separated by a space: ";
  cin >> char1 >> char2;
  equal_result = (char1 == char2);
  not_equal_result = (char1 != char2);

  cout << "Comparison result (equals): " << equal_result << endl;
  cout << "Comparison result (not equals): " << not_equal_result << endl;

  /*
   *
   *  Doubles
   *
   */
  double double1{}, double2{};

  cout << "Enter two doubles separated by a space: ";
  cin >> double1 >> double2;
  equal_result = (double1 == double2);
  not_equal_result = (double1 != double2);

  cout << "Comparison result (equals): " << equal_result << endl;
  cout << "Comparison result (not equals): " << not_equal_result << endl;

  /*
   *
   *  Mixed types
   *
   */
  int num{};
  double double1{};

  cout << "Enter an integer and a double separated by a space: ";
  cin >> num >> double1;
  equal_result = (num == double1);
  not_equal_result = (num != double1);

  cout << "Comparison result (equals): " << equal_result << endl;
  cout << "Comparison result (not equals): " << not_equal_result << endl;

  return 0;
}