



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
    int n, sum1 = 0, sum2 = 0;
    string x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int a = x[i] - '0';
        if(a != 4 && a != 7) {
            cout << "NO" << endl;
            return;
        }
        if(i < n/2) {
            sum1 += a;
        } else {
            sum2 += a;
        }
    }
    if(sum1 == sum2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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



