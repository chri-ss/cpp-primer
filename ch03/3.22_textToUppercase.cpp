#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> text;

  string sentence;
  while (getline(cin, sentence)) {
    text.push_back(sentence);
  }

  for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
    for (auto it2 = it->begin(); it2 != it->end(); ++it2) {
      *it2 = toupper(*it2);
    }
    cout << *it << endl;
  }
}
