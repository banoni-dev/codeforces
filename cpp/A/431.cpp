



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
    int a1, a2, a3, a4;
    string s;
    cin >> a1 >> a2 >> a3 >> a4;
    cin >> s;
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            res += a1;
        } else if (s[i] == '2') {
            res += a2;
        } else if (s[i] == '3') {
            res += a3;
        } else {
            res += a4;
        }
    }
    cout << res << endl;
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



