



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
const ll N = 1e9 + 7;





void solve() {
    int n, k, count = 0;
    cin >> n >> k;
    map<char, int> freq;
    while (n--) {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }
        if (freq.size() == k + 1) {
            count++;
        }
    }
    cout << count << endl;

}








int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}



