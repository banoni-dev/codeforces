#include <iostream>

using namespace std;


int main() {
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i == 0) {
            count += min(s[i] - 'a', 'z' - s[i] + 1);
        } else {
            count += min(abs(s[i] - s[i - 1]), 26 - abs(s[i] - s[i - 1]));
        }
    }
    cout << count << endl;
    return 0;
}
