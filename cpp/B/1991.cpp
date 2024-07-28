

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
  int n;
  cin >> n;
  vector<ll> a(n - 1);
  vector<ll> x(n);
  int k = 0;
  if (n == 2) {
    int x;
    cin >> x;
    cout << x << " " << x << endl;
    return;
  }
  for (int i = 0; i < n - 1; i++) {
    cin >> a[i];
  }
  x[k++] = a[0];
  for (int i = 0; i < n - 2; i++) {
    x[k++] = (a[i] | a[i + 1]);
  }
  if (n > 2) {
    x[k++] = (a[n - 2] & (a[n - 2] | a[n - 3]));
  }
  for (int i = 0; i < n - 1; i++) {
    if (a[i] != (x[i] & x[i + 1])) {
      cout << -1 << endl;
      return;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << x[i] << " ";
  }
  cout << endl;
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
