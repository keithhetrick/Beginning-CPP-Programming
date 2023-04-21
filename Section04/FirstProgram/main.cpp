/*****************************************************************
 * Name: Favorite Number
 * Author: Keith Hetrick
 * Course: Beginning C++ Programming - Udemy
 * Program: Favorite Number
 * Description: This program allows the user to enter their favorite number between 1 and 100
 * Input: User input
 * Output: Console output
 * Last Modified: 04/20/2023
 *****************************************************************/

#include <iostream>

int main()
{
  int favorite_number;
  std::cout << "Ingrese su número favorito entre 1 y 100: ";
  std::cin >> favorite_number;
  std::cout << "No, en serio, " << favorite_number << " es mi número favorito tambien!" << std::endl;

  return 0;
}
