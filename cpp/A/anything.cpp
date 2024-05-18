



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

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    vector<int> ans;
    ans.push_back(a[0]);

    for (int i = 1; i < n - 1; i++) {
        if (a[i] != ans[i - 1]) {
            ans.push_back(a[i]);
        } else if (b[i] != ans[i - 1]) {
            ans.push_back(b[i]);
        } else {
            ans.push_back(c[i]);
        }
    }

    if (a[n - 1] != ans[n - 2] && a[n - 1] != ans[0]) {
        ans.push_back(a[n - 1]);
    } else if (b[n - 1] != ans[n - 2] && b[n - 1] != ans[0]) {
        ans.push_back(b[n - 1]);
    } else {
        ans.push_back(c[n - 1]);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
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



