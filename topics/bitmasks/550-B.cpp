

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
#define endl '\n';
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const double PI = acos(-1.0);

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int dxx[8] = {-1, 0, 1, 0, -1, 1, 1, -1};
int dyy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

bool isValid(int x, int y, int rows, int cols) {
  return (x >= 0 && x < rows && y >= 0 && y < cols);
}

// -----------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------

void solve() {
  int n, l, r, x;
  cin >> n >> l >> r >> x;
  vi c(n);
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  int ans = 0;
  for (int i = 0; i < (1 << n); i++) {
    int sum = 0;
    int mx = 0, mn = 1e6;
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if ((i & (1 << j)) != 0) {
        cnt++;
        sum += c[j];
        mx = max(mx, c[j]);
        mn = min(mn, c[j]);
      }
    }
    if ((sum >= l && sum <= r) && (mx - mn >= x) && (cnt >= 2)) {
      ans++;
    }
  }
  cout << ans << endl;
}

// -----------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
