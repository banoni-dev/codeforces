
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
    vector<ll> a(n);
    vector<int> b; 
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a[i] = x;
        if (x == 1 || x == 2 || x == 3 || x == 5) {
            b.push_back(x);
        }
    }

    for (int i = 0; i < n; i++) {
        bool divisible = false; 
        for (int j = 0; j < b.size(); j++) {
            if (a[i] % b[j] == 0) {
                divisible = true;
                break;
            }
        }
        if (!divisible) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
