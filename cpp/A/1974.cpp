
#include <bits/stdc++.h>
using namespace std;

void calculateResults() {
    int n, m;    
    cin >> n >> m;
    if(m == 0) {
        cout << n / 15 + (n % 15 != 0) << endl;
        return;
    }

    int halfY = 0;
    halfY = m / 2 + m % 2;
    int totalSquares = 7 * halfY + (m % 2) * 4;
    if (n > totalSquares) {
        cout << (n - totalSquares) / 15 + ((n - totalSquares) % 15 != 0) + halfY << endl;
    } else {
        cout << halfY << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        calculateResults();
    }

    return 0;
}
