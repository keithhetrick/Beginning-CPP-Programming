/**************************************************
 *
 * Coding Exercise - Exercise 6
 *
 * Declare a vector of integers named vec  and initialize the vector to 10,20,30,40, and 50.
 *
 * Modify the first element of the vector to be 100  and modify the last element of the vector to be 1000.
 *
 * The final vector should then be 100, 20, 30, 40, and 1000.
 *
 **************************************************/

#include <iostream>
#include <vector>

using namespace std;

vector<int> use_vector()
{
  //----WRITE YOUR CODE BELOW THIS LINE----

  vector<int> vec{10, 20, 30, 40, 50};

  for (int i = 0; i < vec.size(); i++)
  {
    cout << "\nOriginal vector: " << vec.at(i) << " ";
  }

  vec.at(0) = 100;
  vec.at(4) = 1000;

  //----WRITE YOUR CODE ABOVE THIS LINE----
  //----NO NOT MODIFY THE CODE BELOW THIS LINE----
  return vec;
}

int main()
{
  vector<int> vec = use_vector();

  cout << endl;
  cout << "\nThe length of the vector is: " << vec.size() << endl;
  cout << "The first element is: " << vec.at(0) << endl;
  cout << "The last element is: " << vec.at(4) << endl;
  return 0;
}