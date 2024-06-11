



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
    int n, m,x = -1, y = -1, count, s, sum = 0;
    cin >> n >> m;
    char c;
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < m; j++){
            cin >> c;
            if (c == '#') {
                if (y == -1) {
                    y = j;
                    s = i;
                }
                count++;
            }
            if (j == m-1 && i != s && count == 1) {
                x = i;
            }
        }
        sum+=count;
    }
    if (sum == 1) {
        cout << s+1 << " " << y+1 << endl;
        return;
    }
    cout << (x-s)/2+1 + s << " " << y+1 << endl;
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



