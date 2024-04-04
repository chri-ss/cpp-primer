#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<int> ivec{32, 4, 7, 65, 13, 10, 2, 16, 9, 54};

  for (auto it = ivec.begin(); it != ivec.end(); ++it) {
    *it = *it * 2;
    cout << *it << endl;
  }
}
