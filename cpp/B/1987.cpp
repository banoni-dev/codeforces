



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
  vector<pair<int, int>> a;
  int x, y;
  cin >> x;
  for (int i = 1; i < n; i++) {
    cin >> y;
    if (y < x) {
      a.pb({y , x - y});
    }
    x = y;
  }
  int ans = 0;
  for (auto it = a.begin(); it != a.end();) {
    auto it = find_if(it, a.end(), [&](pair<int, int> p) {
      return p.ss <= it->ss;
    });
  }
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



