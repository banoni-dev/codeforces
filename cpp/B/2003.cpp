

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

int findMax(vector<int> a) {
  int mx = 0;
  int idx = -1;
  for (int i = 0; i < a.size() - 1; i++) {
    if (a[i] >= mx) {
      mx = a[i];
      idx = i;
    }
  }
  return idx;
}

int findMin(vector<int> a) {
  int mn = INT_MAX;
  int idx = -1;
  int prev = 0;
  for (int i = 0; i < a.size() - 1; i++) {
    if (a[i] < mn && a[i] >= prev) {
      mn = a[i];
      idx = i;
    }
    prev = max(prev, a[i]);
  }
  return idx;
}

void solve() {
  int n;
  cin >> n;
  int mx = 0;
  int idx = -1;
  int e;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> e;
    if (e > mx) {
      idx = i;
      mx = e;
    }
    a[i] = e;
  }
  if (n == 2) {
    cout << mx << endl;
    return;
  }
  cout << a[(n - 1) / 2] << endl;
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