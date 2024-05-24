



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
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        if (t.substr(0, s.size()) == s) {
            v.pb(t);
        }
    }
    sort(all(v), [](string a, string b) {
        return a.size() < b.size();
    });
    if(v.size() == 0) {
        cout << s << endl;
        return;
    }else {
        cout << v[0] << endl;
    }
}








int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t= 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}



