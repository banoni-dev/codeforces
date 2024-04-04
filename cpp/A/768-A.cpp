#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <=2 ) {
        cout << 0 << endl;
        return 0;
    }
    int max = 0, min = INT_MAX;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != min && a[i] != max) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
