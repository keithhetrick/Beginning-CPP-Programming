/*****************************************************************
 * Name: Comments
 * Author: Keith Hetrick
 * Course: Beginning C++ Programming - Udemy
 * Program: Comments
 * Description: This program demonstrates the use of comments in C++
 * Input: User input
 * Output: Console output
 * Last Modified: 04/20/2023
 *****************************************************************/

#include <iostream>

/*
  Example
  of
  multi-line
  comment
*/

// Example of single line comment

int main()
{
  int favorite_number;
  std::cout << "Ingrese su número favorito entre 1 y 100: ";
  std::cin >> favorite_number;
  std::cout << "¡Increíble, ese es mi número favorito también!" << std::endl;
  std::cout << "No, en serio, " << favorite_number << " es mi número favorito." << std::endl;
  std::cout << "El programa se ejecutó en " << __TIME__ << std::endl;

  return 0;
}
