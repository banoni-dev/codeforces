



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
    string s;
    cin >> s;
    int u = s[s.size() - 1] - '0';
    int v = s[0] - '0';
    for(int i = 1; i < s.size() - 1; i++) {
        if (s[i] - '0' < 1) {
            cout << "NO" << endl;
            return;
        }
    }
    if (u < 9 && v == 1) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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



