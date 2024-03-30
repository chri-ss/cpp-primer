#include <iostream>
#include <ostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void compareStrings() {
  string s1, s2;
  cin >> s1 >> s2;
  if (s1 == s2) {
    cout << "strigns are equal" << endl;
  } else if (s1 > s2) {
    cout << "s1 is greater than s2" << endl;
  } else if (s2 > s1) {
    cout << "s2 is greater than s1" << endl;
  }
}

void compareStringsLength() {
  string s1, s2;
  cin >> s1 >> s2;
  if (s1.length() == s2.length()) {
    cout << "string have equal length" << endl;
  } else if (s1.length() > s2.length()) {
    cout << "s1 is longer than s2" << endl;
  } else if (s2.length() > s1.length()) {
    cout << "s2 is longer than s1" << endl;
  } else {
    cout << "something else??" << endl;
  }
}

int main() {
  // compareStrings();
  compareStringsLength();
}
