// Section 8: Increment and Decrement Operators
/*
 *
 * Increment operators: ++
 * Decrement operators: --
 *
 * Increment or decrements its operand by 1
 * Can be used with integers, floating point types and pointers
 *
 * Prefix: ++num
 * Postfix: num++
 *
 * Don't overuse this operator
 * ALERT: Don't use this operator more than once in the same statement
 */

#include <iostream>

using namespace std;

int main()
{

  int counter{10};
  int result{0};

  // Example 1 - simple increment
  cout << "\nExample 1 - simple increment" << endl;
  cout << "\tCounter: " << counter << endl;

  counter = counter + 1;                    // difficult to read
  cout << "\tCounter: " << counter << endl; // expects 11

  counter++;                                // easier to read
  cout << "\tCounter: " << counter << endl; // expects 12

  ++counter;                                // easier to read
  cout << "\tCounter: " << counter << endl; // expects 13

  // Example 2 - preincrement
  counter = 10;
  result = 0;

  cout << "\nExample 2 - preincrement" << endl;
  cout << "\tCounter: " << counter << endl; // expects 10

  result = ++counter;                       // note the pre increment
  cout << "\tCounter: " << counter << endl; // expects 11
  cout << "\tResult: " << result << endl;   // expects 11

  // Example 3 - postincrement
  counter = 10;
  result = 0;

  cout << "\nExample 3 - postincrement" << endl;
  cout << "\tCounter: " << counter << endl; // expects 10

  result = counter++;                       // note the post increment
  cout << "\tCounter: " << counter << endl; // expects 11
  cout << "\tResult: " << result << endl;   // expects 10

  // Example 4 - preincrement and postincrement
  counter = 10;
  result = 0;

  cout << "\nExample 4 - preincrement and postincrement" << endl;
  cout << "\tCounter: " << counter << endl; // expects 10

  result = ++counter + 10; // note the pre increment

  cout << "\tCounter: " << counter << endl; // expects 11
  cout << "\tResult: " << result << endl;   // expects 21

  // Example 5 - more increment and decrement
  counter = 10;
  result = 0;

  cout << "\nExample 5 - more increment and decrement" << endl;
  cout << "\tCounter: " << counter << endl; // expects 10

  result = counter++ + 10; // note the post increment

  cout << "\tCounter: " << counter << endl; // expects 11
  cout << "\tResult: " << result << endl;   // expects 20

  cout << endl;

  return 0;
}