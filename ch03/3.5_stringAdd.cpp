#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void stringAdd() {
  string acc;
  string s;

  while (cin >> s) {
    acc += s;
  }
  cout << acc << endl;
}

void stringAddSpace() {
  string acc;
  string s;

  while (cin >> s) {
    acc += s + " ";
  }
  cout << acc << endl;
}

int main() {
  // stringAdd();
  stringAddSpace();
  return 0;
}
