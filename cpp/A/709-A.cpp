#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, b, d, sum = 0, count = 0;
    cin >> n >> b >> d;
    while (n--) {
        int a;
        cin >> a;
        if (a <= b) {
            sum += a;
            if (sum > d) {
                count++;
                sum = 0;
            }
        }
    }
    cout << count << endl;
    return 0;
}
