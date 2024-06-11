



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
    ll n, f, x, ok = 0;    
    vi a;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> x;
        a.pb(x);
    }
    for (ll i = 1; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            ok = 1;
            break;
        }
    }
    if (ok) {
        cout << "YES" << endl;
        cout << "R";
        for (ll i = 1; i < n; i++) {
            cout << "B";
        }
        cout << endl;
    } else {
        if (a[0] == a[1]) {
            cout << "NO" << endl;
            return;
        }else{
            cout << "YES" << endl;
            cout << "R";
            for (ll i = 1; i < n - 1; i++) {
                cout << "B";
            }
            cout << "R" << endl;
        }
    }
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



