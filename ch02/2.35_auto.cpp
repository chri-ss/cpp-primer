#include <iostream>

using namespace std;

int main() {
  const int i = 42;
  auto j = i;
  const auto &k = i;
  auto *p = &i;
  const auto j2 = i, &k2 = i;

  // j = int, k = int, p = pointer to int,
  // j2 = int, k2 = ref int

  cout << typeid(i).name() << "\n"
       << typeid(j).name() << "\n"
       << typeid(k).name() << "\n"
       << typeid(p).name() << "\n"
       << typeid(j2).name() << "\n"
       << typeid(k2).name() << endl;
}
