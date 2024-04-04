#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int x = max(a, b);
    if (x == 6) return cout << "1/6", 0;
    if (x == 1) return cout << "1/1", 0;
    cout << (6 - x + 1) / __gcd(6 - x + 1, 6) << "/" << 6 / __gcd(6 - x + 1, 6);
    return 0;
}
