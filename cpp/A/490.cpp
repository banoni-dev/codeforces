



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

const int N = 5005;
const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const double PI = acos(-1.0);






void solve() {
    int n, x1=0, x2=0, x3=0;
    vi a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            x1++;
        } else if (x == 2) {
            x2++;
        } else {
            x3++;
        }
        a.pb(x);
    }
    int mi = min(x1, min(x2, x3));
    cout << mi << endl;
    for (int i = 0; i < mi; i++) {
        for (int j = 0; j < a.size(); j++) {
            if (a[j] == 1) {
                cout << j+1 << " ";
                a[j] = 0;
                break;
            }
        }
        for(int j = 0; j < a.size(); j++) {
            if (a[j] == 2) {
                cout << j+1 << " ";
                a[j] = 0;
                break;
            }
        }
        for(int j = 0; j < a.size(); j++) {
            if (a[j] == 3) {
                cout << j+1;
                a[j] = 0;
                break;
            }
        }
        cout << endl;
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



