#include <iostream>
#include <ostream>

using namespace std;

int main()
{
  int i = 42;
  const int ci = i;
  const int &ri = ci;
  
  //two different types
  decltype(&ri) j = &i;
  auto k = &i;
  cout << typeid(j).name() << endl;

  cout << typeid(k).name() << endl;

  //same types
  decltype(ci) &l = ri;
  auto &m = ri;

  cout << typeid(l).name() << endl;
  cout << typeid(m).name() << endl;
}
