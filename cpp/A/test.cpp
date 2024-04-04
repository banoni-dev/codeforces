#include <iostream>
#include <string>

using namespace std;

int main() {
    unsigned ans = 0;
    for (int i = 0; i < 21; i++) {
        string s;
        cin >> s;
        int count = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '1') {
                count++;
            }
        }
        if (count > 10) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
