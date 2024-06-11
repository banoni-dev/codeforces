



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
    string s1, s2;
    cin >> s1 >> s2;
    cout << s2[0];
    for (int i = 1; i < s1.size(); i++) {
            cout << s1[i];
    }
    cout << " " << s1[0];
    for (int i = 1; i < s2.size(); i++) {
        cout << s2[i];
    }
    cout << endl;
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



