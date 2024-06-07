



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
    int idxMin = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = x;
        idxMin = (x <= a[idxMin]) ? i : idxMin;
    }
    int k = idxMin - 1;
    while(a[idxMin] == a[k]) {
        k--;
    }
    k++;
    for (int i = 1; i < k; i++) {
        if (a[i] < a[i - 1]) {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = k + 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            cout << "NO" << endl;
            return;
        }
    }
    if (a[n - 1] > a[0] && k > 0) {
        cout << "NO" << endl;
        return;
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



