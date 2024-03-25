#include <iostream>
using namespace std;

int main() {
  int n, c =0;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
  if (s[i] == 'A') {
    c++;
  }else {
    c--;
  }
  if (c == 0) {
    cout << "Friendship" << endl;
  } else if (c > 0) {
    cout << "Anton" << endl;
  } else {
    cout << "Danik" << endl;
  }  }
}
