



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
    int n,s,r;
    cin >> n >> s >> r;
    int target = s-r;
    int pretarget = r - (n - 2);
    int remain = 0;
    if (pretarget > target) {
        remain = pretarget - target;
    }
    for (int i = 0; i < n - 2; i++) {
        if (remain == 0) {
            cout << 1 << " ";
        } else {
            cout << min(target, remain+1) << " ";
            remain -= min(target, remain+1) - 1;
            if(remain < 0) {
                remain = 0;
            }
        }
    }
    cout << min(target, pretarget) << " " << target << endl;
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



