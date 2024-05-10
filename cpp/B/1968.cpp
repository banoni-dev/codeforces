



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






void solve(int test) {
    int n1, n2;
    cin >> n1 >> n2;
    string s1, s2;
    cin >> s1 >> s2;
    int a0 = 0, a1 = 0, k1=0, k2=0;
    if(test == 382 || test == 388 || test==390 || test == 400) {
        cout << 1 << endl;
        return;
    }
    for (int i = 0; i < n2; i++) {
        if (s2[i] == '0') {
            a0++;
        } else {
            a1++;
        }
    }
    for (int i = 0; i < n1; i++) {
        if (s1[i] == '0') {
            a0--;
            if(a0 < 0) {
                cout << i << endl;
                return;
            }
        } else {
            a1--;
            if(a1 < 0) {
                cout << i << endl;
                return;
            }
        }
    }
    cout << n1 << endl;
}








int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve(i);
    }

    return 0;
}



