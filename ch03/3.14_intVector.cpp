#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  int n;
  vector<int> ivec;
  while (cin >> n) {
    ivec.push_back(n);
  }

  cout << endl;

  for (int i = 0; i < ivec.size(); i++) {
    cout << ivec[i] << endl;
  }
  return 0;
}
