



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

    int n, k;
    cin >> n >> k;
    int a[n];
    int s= 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    int ans = 0;
    if (k >= s) {
        cout << n << endl;
        return;
    }

    int i1 = 0, i2 = 0;
    int idx = k / 2 + (k % 2);


    for (int i = 0; i < k / 2 + 1; i++) {
        if(a[i] < k) {
            ans++;
            k-= a[i];
        }else {
            break;
        }
    }
    if(ans == 0) {
        cout << ans << endl;
        return;
    }

    for (int i = n - 1; i >= n - k / 2 - 1; i--) {
        if(a[i] <= k) {
            ans++;
            k-= a[i];
        }else {
            break;
        }
    }


      cout << ans << endl;


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



