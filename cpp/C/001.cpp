#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vi vector<int>
#define all(c) (c).begin(), (c).end()
#define sz(a) int((a).size())

const int INF = INT_MAX;

pair<int, int> smallestSubarrayWithSum(vector<int> &arr, int requiredSum) {
  int n = arr.size();
  int start = 0, end = 0, currentSum = 0;
  int minLength = INF, minStart = -1, minEnd = -1;

  while (end < n) {
    currentSum += arr[end];

    while (currentSum >= requiredSum) {
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
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];
  for (int i = 0; i < n; i++)
    cin >> c[i];

  int tot = accumulate(all(a), 0);
  int requiredSum = (tot + 2) / 3;

  vector<pair<int, int>> resA, resB, resC;
  resA.push_back(smallestSubarrayWithSum(a, requiredSum));
  resB.push_back(smallestSubarrayWithSum(b, requiredSum));
  resC.push_back(smallestSubarrayWithSum(c, requiredSum));

  // Check for non-overlapping valid subarrays
  int la = resA[0].first, ra = resA[0].second;
  int lb = resB[0].first, rb = resB[0].second;
  int lc = resC[0].first, rc = resC[0].second;

  if (la == -1 || lb == -1 || lc == -1 || ra >= lb || rb >= lc) {
    cout << -1 << endl;
  } else {
    cout << la + 1 << " " << ra + 1 << " " << lb + 1 << " " << rb + 1 << " "
         << lc + 1 << " " << rc + 1 << endl;
  }
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
