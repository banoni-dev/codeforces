
#include <bits/stdc++.h>
using namespace std;

#define all(c) (c).begin(), (c).end()
#define sz(a) int((a).size())

void solve() {
  int n;
  string s;
  cin >> n >> s;

  string digits = "";
  string letters = "";

  // Separate digits and letters
  for (int i = 0; i < n; i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      letters = s.substr(i);
      break;
    }
    digits += s[i];
  }

  for (int i = 0; i < sz(digits) - 1; i++) {
    int c = digits[i] - '0';
    int n = digits[i + 1] - '0';
    if (c > n || c > 9) {
      cout << "NO\n";
      return;
    }
  }

  for (int i = 0; i < sz(letters) - 1; i++) {
    if (letters[i] >= '0' && letters[i] <= '9') {
      cout << "NO\n";
      return;
    }
    if (letters[i] > letters[i + 1]) {
      cout << "NO\n";
      return;
    }
  }
  if (letters.size() != 0) {

    if (letters.back() >= '0' && letters.back() <= '9') {
      cout << "NO\n";
      return;
    }
  }
  if (digits.size() != 0) {
    if (digits.back() >= 'a' && digits.back() <= 'z') {
      cout << "NO\n";
      return;
    }
  }

  cout << "YES\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
