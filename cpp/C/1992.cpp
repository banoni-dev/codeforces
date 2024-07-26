

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
  int n, m, k;
  cin >> n >> m >> k;
  for (int i = n; i >= k; i--) {
    cout << i << " ";
  }
  for (int i = m + 1; i <= k - 1; i++) {
    cout << i << " ";
  }
  for (int i = 1; i <= m; i++) {
    cout << i << " ";
  }
  cout << endl;
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
