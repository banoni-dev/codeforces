



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


ll nearestPowerOfTwo(ll n) {
    ll x = 1;
    int i = 0;
    while (x*2 <= n) {
        x *= 2;
        i++;
    }
    return i;
}


void solve() {
    ll x;
    cin >> x;

    if(x == 1){
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }

    int odd = 0;
    int fun = nearestPowerOfTwo(x) * nearestPowerOfTwo(x);
    ll near = pow(2, fun);
    vector<int> ans;
    int diff = x - near;
    if((x - near)%2 == 1){
        odd = 1;
        diff--;
    }


    for (int i = fun-1; i >= 1; i--) {
        if(i%2 != 0){
            ans.pb(0);
            continue;
        }
        if (diff >= pow(2, i)) {
            diff -= pow(2, i);
            ans.pb(1);
        }else{
            ans.pb(0);
        }
    }
    cout << ans.size() + 2 << endl;
    cout << (odd ? 1 : 0) << " ";

    for (int i = ans.size()-1; i >= 0; i--) {
        cout << ans[i] << " ";
    }


    cout << 1 << endl;
        
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



