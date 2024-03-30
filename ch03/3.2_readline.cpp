#include <cstdio>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
void readLine() {
  string line;
  while (getline(cin, line)) {
    cout << line << endl;
  }
}

void readWord() {
  string word;
  while (cin >> word) {
    cout << word << endl;
  }
}

int main() {
  // readLine();
  readWord();
}
