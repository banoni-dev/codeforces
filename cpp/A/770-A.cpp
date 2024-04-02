#include <bits/stdc++.h>
using namespace std;


int main() {
    int l,s;
    string res = "", x = "";
    cin >> l >> s;
        for (int i = 0; i < s; i++) {
            x += 'a' + i;
        }
        for (int i = 0; i < l/s; i++) {
            res += x;
        }
        for (int i = 0; i < l%s; i++) {
            res += 'a' + i;
        }
        cout << res << endl;
  return 0;
}
