#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  string str;
  vector<string> svec;

  while (cin >> str) {
    svec.push_back(str);
  }

  cout << endl;

  for (int i = 0; i < svec.size(); i++) {
    cout << svec[i] << endl;
  }
  return 0;
}
