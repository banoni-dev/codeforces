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
  int n, q;
  cin >> n >> q;
  string s1, s2;
  cin >> s1 >> s2;
  int a[n][n];
  int xx = 0, yy = 0;
  for (int l = 0; l < n; l++) {
    for (int r = 1; r <= n - l; r++) {
      string x1 = s1.substr(l, r);
      string x2 = s2.substr(l, r);
      int ans = 0;
      for (int j = 0; j < x1.size(); j++) {
        bool ok = 1;
        for (int k = 0; k < x2.size(); k++) {
          if (x1[j] == x2[k]) {
            x1.erase(j, 1);
            x2.erase(k, 1);
            j--;
            ok = 0;
            break;
          }
        }
        if (ok)
          ans++;
      }
      a[xx][yy++] = ans;
    }
    xx++;
    yy = 0;
  }
  int l = 0, r = 0;
  for (int i = 0; i < q; i++) {
    cin >> l >> r;
    cout << a[l - 1][r - l] << endl;
  }
}

// -----------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------

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
