#include <iostream>
int main() {
  int i = 100, sum = 0;

  for (int i = 0; i != 10; i++) {
    sum += i;
  }
  std::cout << i << " " << sum << std::endl;
  // prints '100' for i because the 'i' inside the loop no longer exists in this scope.
  // prints '45' for sum as the loop fills it with the sum from 0 -> 10
}
