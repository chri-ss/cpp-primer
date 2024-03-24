#include <iostream>

using namespace std;

int main() {
  int a = 3, b = 4;
  decltype(a) c = a;   // c is an int
  decltype((b)) d = a; // d is an int&
  cout << typeid(c).name() << " " << typeid(d).name() << endl;

  ++c; // int
  ++d; // int&

  cout << typeid(c).name() << " " << typeid(d).name() << endl;
}
