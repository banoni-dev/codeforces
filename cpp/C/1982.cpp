

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lll __int128_t
#define ld long double
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
	int n, l, r;    
	cin >> n >> l >> r;
	int a[100007];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	int sum = 0;
	int i = 0;
	while(i < n) {
		sum = a[i];
		if (sum > r) {
			i++;
			continue;
		}

		while(sum < l) {
			i++;
			sum += a[i];
			if (sum > r) {
				sum -= a[i];
				i--;
				break;
			}
		}
		if(sum >= l && sum <= r) {
			ans++;
		}
		cout << i << " " << sum << endl;
		i++;
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

