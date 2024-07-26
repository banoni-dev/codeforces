

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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const double PI = acos(-1.0);

void solve() {
  int n, m, k;
  string s;
  cin >> n >> m >> k >> s;
  int w = 0, xc = 0, xw = 0, c = 0, x = 0, xx = 0, v = 0;
  for (int i = 0; i < s.size(); i++) {
    w += (s[i] == 'W');
    c += (s[i] == 'C');
    if (s[i] != 'C') {
      xc = max(c, xc);
      c = 0;
    }
    if (s[i] != 'W') {
      xw = max(w, xw);
      w = 0;
    }
    if (s[i] != 'L') {
      xx = max(x, xx);
      if (xx >= m) {
        v += xx / m;
      }
      x = 0;
    }
  }
  if (m > n) {
    yes;
    return;
  }
  if (xc >= m) {
    no;
    return;
  }
  if (v > k) {
    no;
    return;
  }
  yes;
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
