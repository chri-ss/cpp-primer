#include <vector>
using std::vector;
int main() {
  vector<int> v1(10, 42);
  vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

  //preferred way, in case of large or variable/computed number of elements
  vector<int> v3;
  for (decltype(v3.size()) i = 0; i < 10; ++i) {
    v3.push_back(42);
  }
}
