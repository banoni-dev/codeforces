

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x;
  cin >> x;
  vector<int> arr(x);
  for (int i = 0; i < x; i++) {
    cin >> arr[i];
  }
  if (x == 1) {
    cout << 1 << endl;
    return;
  }
  for (int i = 0; i < x; i++) {
    if (arr[i] == x) {
      cout << 1 << " ";
    } else {
      cout << arr[i] + 1 << " ";
    }
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
