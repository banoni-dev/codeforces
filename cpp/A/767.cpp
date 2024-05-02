



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
    vector<int> a(n), pos(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = x;
        pos[x] = i;
    }
    for (int i = 0; i < pos[n]; i++) {
        cout << i << endl;
    }

}








int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}



