



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




void solve() {
    int n;
    cin >> n;
    int freq[1001] = {0};
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    for (int i = 0; i < n; i++) {
        if(freq[i] % 4 == 0){
            ans += freq[i] / 4;
            continue;
        }else if(freq[i] % 5 == 0) {
            ans += freq[i] / 5;
            continue;
        }else if(freq[i] % 6 == 0) {
            ans += freq[i] / 6;
            continue;
        }else if(freq[i] % 7 == 0) {
            ans += freq[i] / 7;
            continue;
        }else if(freq[i] % 8 == 0) {
            ans += freq[i] / 8;
            continue;
        }else if(freq[i] % 9 == 0) {
            ans += freq[i] / 9;
            continue;
        }else if(freq[i] % 10 == 0) {
            ans += freq[i] / 10;
        }
    }
    cout << ans << endl;
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



