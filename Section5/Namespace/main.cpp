/*****************************************************************
 * Name: Namespace
 * Author: Keith Hetrick
 * Course: Beginning C++ Programming - Udemy
 * Program: Namespace
 * Description: This program demonstrates the use of Namespace in C++
 * Input: User input
 * Output: Console output
 * Last Modified: 04/20/2023
 *****************************************************************/

#include <iostream>

// using namespace std;

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int favorite_number;
  cout << "Ingrese su número favorito entre 1 y 100: ";
  cin >> favorite_number;
  cout << "¡Increíble, ese es mi número favorito también!" << endl;
  cout << "No, en serio, " << favorite_number << " es mi número favorito." << endl;
  cout << "El programa se ejecutó en " << __TIME__ << endl;

  return 0;
}
