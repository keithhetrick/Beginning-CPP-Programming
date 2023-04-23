/**************************************************
 *
 * Coding Exercise - Exercise 5
 *
 * Declare an array of 10  integers named arr  and initialize the array so that all 10 integers are 0.
 *
 * Then assign 100  to the first element of the array and 1000  to the last element of the array.
 *
 **************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<int> use_array()
{
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----

    int arr[]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    arr[0] = 100;
    arr[1] = 0;
    arr[2] = 0;
    arr[3] = 0;
    arr[4] = 0;
    arr[5] = 0;
    arr[6] = 0;
    arr[7] = 0;
    arr[8] = 0;
    arr[9] = 1000;

    cout << endl;
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << arr[5] << " " << arr[6] << " " << arr[7] << " " << arr[8] << " " << arr[9] << endl;

    //-----WRITE YOUR ABOVE THIS LINE----
    //-----DO NOT CHANGE THE CODE BELOW THIS LINE----
    vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);
    return v;
}

int main()
{
    use_array();
    return 0;
}