#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  string word;

  vector<string> words;

  while (cin >> word) {
    words.push_back(word);
  }

  for (decltype(words.size()) i = 0; i != words.size(); ++i) {
    if (i % 8 == 0) {
      cout << endl << words[i] << " ";
    } else {
      cout << words[i] << " ";
    }
  }
  cout << endl;
}
