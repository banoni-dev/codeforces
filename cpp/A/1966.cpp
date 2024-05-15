



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
    int n, k;
    int occ[106];
 		cin >> n >> k;
		for(int i = 0; i <= 100; i++)
			occ[i]=0;
		bool found=0;
		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			occ[x]++;
			if(occ[x] >= k)
				found=1;
		}
		if(found)
			cout << k-1 << '\n';
		else
			cout << n << '\n';   
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



