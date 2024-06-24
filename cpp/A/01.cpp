
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
const ll INF = LLONG_MAX;
const double PI = acos(-1.0);

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    ll x, y, z, w;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) {
                x = (i + 1 < n) ? a[i + 1][j] : -1;
                y = (j + 1 < m) ? a[i][j + 1] : -1;
                a[i][j] = min(a[i][j], max(x, y));
            } else if (i == n - 1 && j == m - 1) {
                x = (i - 1 >= 0) ? a[i - 1][j] : -1;
                y = (j - 1 >= 0) ? a[i][j - 1] : -1;
                a[i][j] = min(a[i][j], max(x, y));
            } else if (i == 0) {
                y = (j - 1 >= 0) ? a[i][j - 1] : -1;
                z = (i + 1 < n) ? a[i + 1][j] : -1;
                w = (j + 1 < m) ? a[i][j + 1] : -1;
                a[i][j] = min(a[i][j], max({w, z, y}));
            } else if (j == 0) {
                x = (i - 1 >= 0) ? a[i - 1][j] : -1;
                z = (i + 1 < n) ? a[i + 1][j] : -1;
                w = (j + 1 < m) ? a[i][j + 1] : -1;
                a[i][j] = min(a[i][j], max({w, x, z}));
            } else {
                x = (i - 1 >= 0) ? a[i - 1][j] : -1;
                y = (j - 1 >= 0) ? a[i][j - 1] : -1;
                z = (i + 1 < n) ? a[i + 1][j] : -1;
                w = (j + 1 < m) ? a[i][j + 1] : -1;
                a[i][j] = min(a[i][j], max({x, y, z, w}));
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
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
