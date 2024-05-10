



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

    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0, j = 0;
    for (int i = 0; i < k; i++) {
        if (j >= n) {
            j = 0;
        }
        cout << "i: " << i << "--" << "j: " << j << " " << endl;
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        

      if (j % 2 == 0) {
        int x1 = j;
        while (a[x1] == 0) {
            x1++;
            if (x1 >= n) {
                return;
            }
        }
        
        if (a[j] > 0) {
            a[j]--;
            if (a[j] == 0) {
                ans++;
            }
        }
      }else{

        int x2 = j;

        while (a[n-x2] == 0) {
            x2++;
            if (x2 >= n) {
                return;
            }
        }

        if (a[n-j] > 0) {
            a[n-j]--;
            if (a[n-j] == 0) {
                ans++;
            }
        }
      }
        cout << "i: " << i << "--" << "j: " << j << " ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl << "----------------" << endl;
        j++;
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



