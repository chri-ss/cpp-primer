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

  for (decltype(ivec.size()) i = 0; i != ivec.size() - 1; i++) {
    cout << ivec[i] + ivec[i + 1] << " ";
  }
  cout << endl;
}

void sumEnds()
{
  vector<int> ivec;
  int n;

  while(cin >> n)
  {
    ivec.push_back(n);
  }

  cout << endl;

  for(decltype(ivec.size()) i = 0; i != ivec.size() / 2; i++)
  {
    cout << ivec[i] + ivec[ivec.size() - i - 1] << " ";
  }

  cout << endl;
}

int main() {
  // sumAdjacent();
  sumEnds();
  return 0;
}
