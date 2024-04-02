#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(4);
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    std::set<int> uniqueSet(a.begin(), a.end());
    a.assign(uniqueSet.begin(), uniqueSet.end());
    cout << 4 - uniqueSet.size() << endl;
    return 0;
}
