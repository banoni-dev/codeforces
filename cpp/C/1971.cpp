



#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>


void solve() {
    int a,b,c,d;    
    cin >> a >> b >> c >> d;
    int x = max(a, b);
    int y = min(a, b);
    int s = 0;
    vi v;
    for (int i = 1; i < y; i++) {
        v.push_back(i);
    }
    for (int i = x + 1; i <= 12; i++) {
        v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == c || v[i] == d) {
            s++;
        }
    }
    if (s == 1) {
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

