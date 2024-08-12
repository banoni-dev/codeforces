

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
  int x, y, k;
  cin >> x >> y >> k;
  int s = 0;
  if (x == 0 && y == 0 && k % 2 == 0) {
    s = 1;
  } else {
    cout << x * k << " " << y * k << endl;
  }
  bool ok1 = false, ok2 = false, ok3 = false, ok4 = false;
  int v = 0;

  if (k % 2 == 0) {
    for (int i = 1; i <= k - 2 + s; i++) {
      if (i == x) {
        ok1 = true;
        continue;
      }
      if (i == y) {
        ok2 = true;
        continue;
      }
      v += i;
      cout << i << " " << i << endl;
    }
    if (ok1) {
      cout << k + 1 << " " << k + 1 << endl;
      v += k + 1;
    }
    if (ok2) {
      cout << k + 2 << " " << k + 2 << endl;
      v += k + 2;
    }
    cout << -v << " " << -v << endl;
  } else {
    for (int i = 1; i <= (k - 1) / 2; i++) {
      if (i == x) {
        ok3 = true;
        continue;
      }
      if (i == y) {
        ok4 = true;
        continue;
      }
      cout << i << " " << i << endl;
      cout << -i << " " << -i << endl;
    }
    if (ok3) {
      cout << k << " " << k << endl;
      cout << -k << " " << -k << endl;
    }
    if (ok4) {
      cout << k + 1 << " " << k + 1 << endl;
      cout << -k - 1 << " " << -k - 1 << endl;
    }
  }
}

// -----------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------

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
