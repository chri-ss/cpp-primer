#include <iostream>

using namespace std;

int main()
{
  int a = 3, b = 4;
  decltype(a) c = a;  //c is an int 
  decltype(a = b) d = a;  //d is an int&
}

