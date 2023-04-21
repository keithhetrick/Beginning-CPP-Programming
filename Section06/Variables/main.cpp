/*****************************************************************
 * Name: Room Area Calculator
 * Author: Keith Hetrick
 * Course: Beginning C++ Programming - Udemy
 * Program: Variables
 * Description: This program demonstrates the use of Variables in C++
 * Input: User input
 * Output: Console output
 * Last Modified: 04/20/2023
 *****************************************************************/

#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

int main()
{
  // Declare variables
  int room_length{0};
  int room_width{0};
  int area{0};

  // Get the length and width of the room
  cout << "\nEnter the length of the room (in ft): ";
  cin >> room_length;
  cout << "\nEnter the width of the room (in ft): ";
  cin >> room_width;

  // Calculate the area of the room
  area = room_length * room_width;

  // Display the area of the room
  cout << "\nThe area of the room is " << area << " square feet" << endl;

  return 0;
}