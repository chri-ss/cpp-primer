#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<vector<int>> intsVec;
  vector<vector<string>> stringsVec;

  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};

  intsVec.push_back(v1);
  intsVec.push_back(v2);
  intsVec.push_back(v3);
  intsVec.push_back(v4);
  intsVec.push_back(v5);
  stringsVec.push_back(v6);
  stringsVec.push_back(v7);

  for (auto it = intsVec.begin(); it != intsVec.end(); ++it) {
    cout << it->size() << endl;
    for (auto it2 = it->begin(); it2 != it->end(); ++it2) {
      cout << *it2 << " ";
    }
    cout << endl;
  }

  for (auto it = stringsVec.begin(); it != stringsVec.end(); ++it) {
    cout << it->size() << endl;
    for (auto it2 = it->begin(); it2 != it->end(); ++it2) {
      cout << *it2 << " ";
    }
    cout << endl;
  }
}
