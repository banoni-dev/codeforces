#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int l, ok = 0, count = 0;
    string s;
    cin >> l;
    cin >> s;
    ok = 0;
    for (int i = 0; i < s.size(); i++) {
      if(s[i]=='1') count++;
      if(i == s.size() - 1) {
        if(s[i] == '1' && s[i+1] == '0') {
          ok = 1;
        }
      }
    }
    if(count % 2 != 0) {
      cout << "NO" << endl;
      continue;
    }
    if(l == 2 && count == 0){
      cout << "NO" << endl;
      continue;
    }
    if(ok == 1) {
      cout << "NO" << endl;
      continue;
    } 
    cout << "YES" << endl;
  }
}
