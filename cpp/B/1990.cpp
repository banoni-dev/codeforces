

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lll __int128_t
#define ld long double
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define ff first
#define ss second
#define all(c) (c).begin(), (c).end()
#define sz(a) int((a).size())

const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const double PI = acos(-1.0);

void solve() {
  int n, x, y;
  cin >> n >> x >> y;
  int diff = x - y - 1;
  int ok = 0;
  if (y > 1) {
    for (int i = 0; i < y - 2; i++) {
      cout << 1 << " ";
    }
    cout << -1 << " " << 1 << " ";
  } else {
    cout << 1 << " ";
  }
  if (diff % 2 == 0) {
    if (diff == 0) {
      ok = 1;
    }
    if (diff == 1) {
      cout << -1 << " ";
      ok = 2;
    }

    if (diff == 2) {
      ok = 3;
    }
    if (ok == 3) {
      cout << -1 << " ";
    }

    if (ok == 0) {
      int k = 0;
      for (int i = y + 1; i < x - 2; i++) {
        if (k % 2 == 0) {
          cout << -1 << " ";
        } else {
          cout << 1 << " ";
        }
        k++;
      }
    }
    if (ok == 3) {
      cout << -1 << " ";
    }

  } else {
    int k = 0;
    for (int i = y; i < x - 1; i++) {
      if (k % 2 == 0) {
        cout << -1 << " ";
      } else {
        cout << 1 << " ";
      }
      k++;
    }
  }

  for (int i = x - 1; i < n - 1; i++) {
    cout << 1 << " ";
  }
  cout << 1 << endl;
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
