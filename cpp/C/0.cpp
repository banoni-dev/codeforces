

#include <bits/stdc++.h>
using namespace std;


#define vi vector<int>



void solve() {
    int a,b,c,d;    
    cin >> a >> b >> c >> d;
    int x = max(a, b);
    int y = min(a, b);
    vi v;
    int s1 = 0, s2= 0, n = v.size();
    for (int i = 1; i < y; i++) {
        v.push_back(i);
    }
    for (int i = x + 1; i <= 12; i++) {
        v.push_back(i);
    }
    for (int i = 0; i < n; i++) {
        if (v[i] == c) {
            s1 = 1;
        }
        if (v[i] == d) {
            s2 = 1;
        }
    }
    if (s1 + s2 == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

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



