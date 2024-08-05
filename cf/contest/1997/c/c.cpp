

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

int calc(string s, int j) {
  int sum1 = 0, sum2 = 0;
  for (int i = j; i < s.size(); i++) {
    if (s[i] == '(') {
      sum1++;
    }
    if (s[i] == '_') {
      sum2++;
    }
  }
  return sum2 - sum1;
}

void solve() {
  int n;
  string s;
  map<int, int> m;
  cin >> n >> s;
  int ans = 0;
  int cnt = 0;
  int x = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '(') {
      x++;
    }
    m[i] = 0;
    if (s[i] == ')') {
      cnt++;
      int j = i - 1;
      dbg(i, j, s[j], calc(s, j), x, m[j]);
      while ((s[j] != '_' || (calc(s, j) - x) <= 0) || m[j]) {
        j--;
      }
      m[j] = 1;
      dbg(i, j);
      ans += (i - j);
    }
  }
  ans += ((n - cnt * 2) / 2);
  cout << ans << endl;
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
