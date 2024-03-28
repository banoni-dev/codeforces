#include <iostream>

using namespace std;


int main() {
    int n;
  while (cin >> n, n) {
  // calculate the number of divisors
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      count++;
    }
  }

  printf("%s\n", count % 2 == 0 ? "no" : "yes");
  }
    return 0;
}
