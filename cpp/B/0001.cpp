#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define endl '\n';
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
typedef long long ll;
const int N = 3e5 + 5;
 
int n;
ll a[N];
 
void test_case() {
    cin >> n;
    int bef = 0;
    ll mx = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < bef) {
            ll x = bef - a[i];
            mx = max(mx, x);
            ans += x;
            cout << ans << " " << x << endl;
        } else {
            bef = a[i];
        }
    }
    cout << ans + mx << endl;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--) {
        test_case();
    }
    return 0;
}
