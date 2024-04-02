#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Check if it's possible to make all elements zero
        int sum = accumulate(a.begin(), a.end(), 0);
        if (sum % 2 == 0 && *max_element(a.begin(), a.end()) <= sum / 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
