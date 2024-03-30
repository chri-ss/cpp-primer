#include <cctype>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string str;

  getline(cin, str);

  for (decltype(str.size()) i = 0; i != str.size(); i++) {
    if (ispunct(str[i])) {
      for (auto j = i; j < str.size(); j++) {
        str[j] = str[j + 1];
      }
      i--;
    }
  }
  cout << str << endl;
  return 0;
}
