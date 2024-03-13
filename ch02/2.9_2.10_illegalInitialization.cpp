#include <cmath>
#include <iostream>

using namespace std;

int main()
{
  //can't use initialization with cin 
  //cin >> int input_value

  //instead initialize first
  int input_value;
  cin >> input_value;

  //works, but truncates
  //initial value 3
  int i = { 3.14 };

  //works, assuming wage is a double
  //initial value 9999.99
  double wage;
  double salary = wage = 9999.99;

  //same issue with truncation seen above.
  //initial value 3
  int j = 3.14;
}
