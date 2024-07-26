

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
  int n;
  cin >> n;
  int x, y;
  cin >> x;
  int mx = x;
  int ans = 1;
  for (int i = 1; i < n; i++) {
    cin >> y;
    if (y > mx) {
      mx = y;
      ans = 0;
    }
    if (y == mx) {
      ans++;
    }
  }
  cout << (ans % 2 == 0 ? "NO" : "YES") << endl;
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
