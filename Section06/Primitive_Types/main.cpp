// Section 6 - Primitive Types
// Primitive Types

#include <iostream>

using namespace std;

int main()
{
  /**************************************************
   * Character Type
   * ************************************************/
  char middle_initial{'J'}; // Notice the single quotes around characters
  cout << "\nMy middle initial is " << middle_initial << endl;

  /**************************************************
   * Integer Types
   * ************************************************/
  unsigned short int exam_score{55}; // same as unsigned short exam_score {55};
  cout << "\nMy exam score was " << exam_score << " out of 60" << endl;

  int countries_represented{65};
  cout << "\nThere were " << countries_represented << " countries represented in my meeting" << endl;

  long people_in_tennessee{6975000};
  cout << "\nThere are about " << people_in_tennessee << " people in Tennessee" << endl;

  long long people_on_earth{8'000'000'000};
  cout << "\nThere are about " << people_on_earth << " people on earth" << endl;

  long long distance_to_alpha_centauri{9'461'000'000'000};
  cout << "\nThe distance to Alpha Centauri is " << distance_to_alpha_centauri << " kilometers" << endl;

  /**************************************************
   * Floating Point Types
   * ************************************************/
  float car_payment{401.23};
  cout << "\nMy car payment is " << car_payment << endl;

  double pi{3.14159};
  cout << "\nPi is " << pi << endl;

  long double large_amount{2.7e120};
  cout << "\nLarge amount is " << large_amount << endl;

  /**************************************************
   * Boolean Type
   * ************************************************/
  bool game_over{false};
  cout << "\nThe value of game_over is " << game_over << endl;

  /**************************************************
   * Overflow Example
   * ************************************************/
  // short value1{30000};
  // short value2{1000};
  // short product{value1 * value2};

  // cout << "The product of " << value1 << " and " << value2
  //      << " is " << product << endl;

  return 0;
}