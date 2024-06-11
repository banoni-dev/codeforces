



#include <bits/stdc++.h>
using namespace std;

#define ll long long
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
    int n, x, sum, mx = 2, ans = 2;
    cin >> n;
    for(int i = 2; i <= n; i++) {
        x = i;
        int v = x;
        while(v*2 < n) {
            v = x*2;
            x++;
        }
        if(v > mx) {
            mx = v;
            ans = i;
        }
    }
    cout << ans << endl;
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



