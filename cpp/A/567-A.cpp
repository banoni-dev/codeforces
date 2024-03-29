#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        if(i == n-1) {
            cout << a[i] - a[i-1] << " " << a[i] - a[0] << endl;
        } else if(i == 0) {
            cout << a[i+1] - a[i] << " " << a[n-1] - a[i] << endl;
        } else {
            cout << min(a[i] - a[i-1], a[i+1] - a[i]) << " " << max(a[i] - a[0], a[n-1] - a[i]) << endl;
        }
    }
    return 0;
}
