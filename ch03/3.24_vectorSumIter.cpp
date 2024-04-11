#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void sumAdjacent() {
  vector<int> ivec;
  int n;

  while (cin >> n) {
    ivec.push_back(n);
  }

  cout << endl;

  for (auto i = ivec.begin(); i != ivec.end() - 1; ++i) {
    cout << *i + *(i + 1) << endl;
  }
  cout << endl;
}

void sumEnds() {
  vector<int> ivec;
  int n;

  while (cin >> n) {
    ivec.push_back(n);
  }

  cout << endl;

  for (auto i = ivec.begin(); i != ivec.begin() + ivec.size() / 2; ++i) {
    cout << *i + (ivec.end() - i) << endl;
  }
  cout << endl;
}

int main() {
  // sumAdjacent();
  sumEnds();
  return 0;
}
