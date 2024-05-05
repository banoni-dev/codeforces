



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
    int x = 0;
    int n = s.size();
    vector<pair<int, int>> v;
    int t[n];
    for (int i = 0; i < s.size(); i++) {
        v.pb(mp(i, x));
        if (s[i] == '(' ) {
            x++;
        }else{
            x = max(0, x-1);
        }
    }

    sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b) {
        if (a.second == b.second) {
            return a.first > b.first;
        } else {
            return a.second < b.second;
        }
    });

    for (int i = 0; i < n; i++) {
        cout << s[v[i].first];
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



