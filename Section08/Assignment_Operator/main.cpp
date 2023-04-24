#include <iostream>

using namespace std;

int main()
{
  int num1{10};
  int num2{20};

  num1 = 100;

  cout << endl;
  cout << "num1 is: " << num1 << endl;
  cout << "num2 is: " << num2 << endl;

  cout << endl;

  if (num1 == num2)
    cout << "num1 and num2 are equal" << endl;
  else
    cout << "num1 and num2 are not equal" << endl;

  cout << endl;

  return 0;
}