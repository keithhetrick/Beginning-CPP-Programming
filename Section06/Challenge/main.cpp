// Section 6
// Constants

/*
    Frank's Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:

Estimate for carpet cleaning service:
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost: $110
Tax: $7.70
====================================
Total estimate: $117.70
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of small rooms
    Display number of large rooms
    Display price per small room
    Display price per large room

    Display cost:  (number of rooms * price per room)
    Display tax:   number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
*/

#include <iostream>

using namespace std;

int main()
{
  cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;

  cout << "\nHow many small rooms would you like cleaned? ";
  int number_of_small_rooms{0};
  cin >> number_of_small_rooms;

  cout << "How many large rooms would you like cleaned? ";
  int number_of_large_rooms{0};
  cin >> number_of_large_rooms;

  const double price_per_small_room{25.0};
  const double price_per_large_room{35.0};
  const int total_room_number{number_of_small_rooms + number_of_large_rooms};

  const double sales_tax{0.07}; // 7% - for Tennessee

  const double total_price_before_tax{number_of_small_rooms * price_per_small_room +
                                      number_of_large_rooms * price_per_large_room};
  const double total_estimate{total_price_before_tax +
                              (total_price_before_tax * sales_tax)};

  const int estimate_valid_for{30}; // 30 days

  cout << "\nEstimate for carpet cleaning service" << endl;
  cout << "Total number of rooms: " << total_room_number << endl;
  cout << "Number of small rooms: " << number_of_small_rooms << endl;
  cout << "Number of large rooms: " << number_of_large_rooms << endl;
  cout << "Price per small room: $" << price_per_small_room << endl;
  cout << "Price per large room: $" << price_per_large_room << endl;
  cout << "Cost : $" << total_price_before_tax << endl;
  cout << "Tax: $" << total_price_before_tax * sales_tax << endl;
  cout << "=====================================" << endl;
  cout << "Total estimate: $" << total_estimate << endl;
  cout << "This estimate is valid for " << estimate_valid_for << " days" << endl;

  cout << endl;
  return 0;
}