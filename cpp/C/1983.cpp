

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

pair<int, int> smallestSubarrayWithSum(vector<int> &arr, int s, int e,
                                       int sum) {
  int n = arr.size();
  int start = s;
  int end = 0;
  int currentSum = 0;
  int minLength = INT_MAX;
  int minStart = -1;
  int minEnd = -1;

  while (end < e) {
    currentSum += arr[end];

    while (currentSum >= sum) {
      if (end - start + 1 < minLength) {
        minLength = end - start + 1;
        minStart = start;
        minEnd = end;
      }
      currentSum -= arr[start];
      start++;
    }
    end++;
  }

  return {minStart, minEnd};
}

void solve() {
  vector<int> a = {6, 3, 1, 8, 7, 1};
  vector<int> b = {10, 2, 6, 2, 2, 4};
  vector<int> c = {10, 9, 2, 1, 2, 2};
  int sum = 9;
  pair<int, int> result1 = smallestSubarrayWithSum(a, 0, a.size(), sum);
  pair<int, int> result2 =
      smallestSubarrayWithSum(b, result1.second + 1, b.size(), sum);
  pair<int, int> result3 = smallestSubarrayWithSum(c, 0, c.size(), sum);
  cout << result1.first << " " << result1.second << endl;
  cout << result2.first << " " << result2.second << endl;
  cout << result3.first << " " << result3.second << endl;
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
