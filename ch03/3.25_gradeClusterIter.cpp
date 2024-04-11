#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<unsigned> scores(11, 0);
  unsigned grade;

  while (cin >> grade) {
    if (grade <= 100) {
      vector<unsigned>::iterator toRaise = scores.begin();

      toRaise += (grade / 10);
      ++(*toRaise);
    }
  }
  for (auto i : scores) {
    cout << i << endl;
  }
}
