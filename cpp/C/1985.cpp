



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
    int n;
    cin >> n;
    ll mx = 0,x,s=0;
    if(n == 1) {
        cin >> x;
        if(x == 0) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
        return;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        mx = max(mx, x);
        s+=x;
        if(mx*2 == s) {
            ans++;
        }
    }
    cout << ans << endl;
    return;
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


