#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s("a string with some characters");

  cout << s << endl;

  for (char &c : s) {
    c = 'X';
  }
  cout << s << endl;
}
